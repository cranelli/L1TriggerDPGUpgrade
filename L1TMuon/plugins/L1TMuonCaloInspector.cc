// -*- C++ -*-
//
// Package:    L1TMuon
// Class:      L1TMuonCaloInspector
// 
/**\class L1TMuonCaloInspector L1TMuonCaloInspector.cc 
   L1TriggerDPGUpgrade/L1TMuon/plugins/L1TMuonCaloInspector.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Alberto Belloni
//     Modified by:  Christopher Anelli
//         Created:  Wed, 12 Jun 2013 16:42:12 GMT
// $Id$
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/ESHandle.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "CalibFormats/CaloTPG/interface/CaloTPGRecord.h"
#include "CalibFormats/CaloTPG/interface/CaloTPGTranscoder.h"
#include "DataFormats/Math/interface/deltaR.h"

#include "DataFormats/HepMCCandidate/interface/GenParticleFwd.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"

#include "DataFormats/TrackReco/interface/TrackFwd.h"
#include "DataFormats/TrackReco/interface/Track.h"

#include "DataFormats/CaloTowers/interface/CaloTower.h"
#include "DataFormats/CaloTowers/interface/CaloTowerFwd.h"

#include "DataFormats/HcalRecHit/interface/HORecHit.h"
#include "DataFormats/HcalRecHit/interface/HBHERecHit.h"
#include "DataFormats/HcalRecHit/interface/HFRecHit.h"
#include "DataFormats/HcalRecHit/interface/ZDCRecHit.h"
#include "DataFormats/HcalRecHit/interface/CastorRecHit.h"
#include "DataFormats/HcalRecHit/interface/HcalCalibRecHit.h"
#include "DataFormats/HcalRecHit/interface/HcalRecHitFwd.h"

#include "Geometry/Records/interface/IdealGeometryRecord.h"
#include "Geometry/Records/interface/CaloGeometryRecord.h"
#include "Geometry/CaloTopology/interface/HcalTopology.h"
#include "Geometry/CaloGeometry/interface/CaloGeometry.h"
#include "Geometry/Records/interface/HcalGeometryRecord.h"

#include "TrackPropagation/SteppingHelixPropagator/interface/SteppingHelixPropagator.h"
#include "TrackingTools/Records/interface/TrackingComponentsRecord.h"
#include "MagneticField/Engine/interface/MagneticField.h"
#include "MagneticField/Records/interface/IdealMagneticFieldRecord.h"
#include "Geometry/CommonDetUnit/interface/GlobalTrackingGeometry.h"
#include "Geometry/Records/interface/GlobalTrackingGeometryRecord.h"
#include "DataFormats/GeometrySurface/interface/Cylinder.h"
#include "TrackingTools/TrajectoryState/interface/TrajectoryStateOnSurface.h"

#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitive.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitiveFwd.h"

#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrack.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrackFwd.h"

#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "TTree.h"
#include "TH1F.h"
#include "TH2F.h"

using namespace L1TMuon;

//
// class declaration
//

class L1TMuonCaloInspector : public edm::EDAnalyzer {
public:
  explicit L1TMuonCaloInspector(const edm::ParameterSet&);
  ~L1TMuonCaloInspector();
  
  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);
  
  
private:
  virtual void beginJob() override;
  virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
  virtual void endJob() override;
  
  edm::Service<TFileService> _fileService;
  
  edm::ESHandle<CaloTPGTranscoder> _caloDecoder;

  // Surfaces to be used for extrapolation
  Cylinder::CylinderPointer _rpcCyl[4]; // 4 = number of stations
  Cylinder::CylinderPointer _hoCyl;

  bool _doGen;
  edm::InputTag _genInput;

  edm::InputTag _rpcInput;
  edm::InputTag _dttfInput;
  edm::InputTag _hcalInput;
  edm::InputTag _stdmuInput;
  edm::InputTag _glbmuInput;

  // Delta R values to be used for matching
  double _dRtruthToRpc, _dRrpcToDttf, _dRdttfToHcal, 
    _dRhcalToStdMu, _dRdttfToStdMu;
  edm::InputTag _truthToRpc;
  edm::InputTag _rpcToDttf;
  edm::InputTag _dttfToHcal;
  edm::InputTag _hcalToStdMu;
  edm::InputTag _dttfToStdMu; // or global: can't be too different

  // map with histograms: all deltaEta and deltaPhi plots will
  // have same boundaries (very generous), then work out useful
  // ranges with plotting macro

  std::map<std::string,TH1F*> _h1Eta;
  std::map<std::string,TH1F*> _h1Phi;
  std::map<std::string,TH1F*> _h1Pt;

  std::map<std::string,TH1F*> _h1dDeltaEta;
  std::map<std::string,TH1F*> _h1dDeltaPhi;
  std::map<std::string,TH1F*> _h1dDeltaR;
  std::map<std::string,TH2F*> _h2dDeltaEtaPhi;

  std::map<std::string,TH1F*> _h1dEta;
  std::map<std::string,TH1F*> _h1dPhi;
  std::map<std::string,TH1F*> _h1dPt;

  std::map<std::string,TH2F*> _h2dEtaPhi;
  std::map<std::string,TH2F*> _h2diEtaiPhi;
  std::map<std::string,TH2F*> _h2dXY;

  std::map<std::string,TH1F*> _h1StationDistribution;

  std::map<std::string,TH1F*> _h1Energy;
  std::map<std::string,TH2F*> _h2dDeltaPhiPt;

  TH1F* _counters;
  enum { ALL=0, TRUTH, RPC, DTTF, HCAL, STDMU, GLBMU };
  
  TriggerPrimitiveRef getBestTriggerPrimitive
  (const TriggerPrimitiveList& list, unsigned subsystem) const;



  void fillDeltaEtaPhiHistograms(float eta1, float phi1,
				 float eta2, float phi2,
				 std::string key);
  void filldPhiPtHistograms(float phi1, float pt, float phi2, std::string key);
  void fillEnergyHistograms(float energy, std::string key);
  //bool IsaSiPM(const HORecHit * bho_reco);
  //bool IsaSiPM(double eta, double phi);
  bool IsaSiPM(int ieta, int iphi); 
  double WrapCheck(double phi1, double phi2);
  void ConvertetaphitoHOietaiphi(double eta, double phi, int & ieta, int & iphi);
  void fillStationDistributionHistograms(TriggerPrimitiveStationMap stubs, std::string key);
  void fillMapHistograms(float eta, float phi,
			 int ieta, int iphi,
			 float x, float y,
			 std::string key);
  void fillKinematicHistograms(float eta, float phi, float pt,
			       std::string key);
  // ----------member data ---------------------------
};

//
// constants, enums and typedefs
//

//
// static data member definitions
//

//
// constructors and destructor
//
L1TMuonCaloInspector::L1TMuonCaloInspector(const edm::ParameterSet& iConfig)

{
  //now do what ever initialization is needed
  if( (_doGen = iConfig.getUntrackedParameter<bool>("doGen",false)) ) {
    _genInput = iConfig.getParameter<edm::InputTag>("genSrc");
  }
  _rpcInput =   iConfig.getParameter<edm::InputTag>("rpcSrc");
  _dttfInput =  iConfig.getParameter<edm::InputTag>("dttfSrc");
  _hcalInput =  iConfig.getParameter<edm::InputTag>("hcalSrc");
  _stdmuInput = iConfig.getParameter<edm::InputTag>("stdmuSrc");
  _glbmuInput = iConfig.getParameter<edm::InputTag>("glbmuSrc");

  _dRtruthToRpc =iConfig.getUntrackedParameter<double>("dRtruthToRpc" ,1.);
  _dRrpcToDttf  =iConfig.getUntrackedParameter<double>("dRrpcToDttf"  ,1.);
  _dRdttfToHcal =iConfig.getUntrackedParameter<double>("dRdttfToHcal" ,1.);
  _dRhcalToStdMu=iConfig.getUntrackedParameter<double>("dRhcalToStdMu",1.);
  _dRdttfToStdMu=iConfig.getUntrackedParameter<double>("dRdttfToStdMu",1.);

  _counters = _fileService->make<TH1F>("counter","counters",10,-0.5,9.5);

  // Build surfaces for extrapolation
  Cylinder::PositionType pos0; // mah, we do not use them, but they are
  Cylinder::RotationType rot0; // needed in Cylinder constructor
  
  //changing to cm
  _rpcCyl[0] = Cylinder::build(400,pos0,rot0);
  _rpcCyl[1] = Cylinder::build(500,pos0,rot0);
  _rpcCyl[2] = Cylinder::build(600,pos0,rot0);
  _rpcCyl[3] = Cylinder::build(700,pos0,rot0);

  _hoCyl = Cylinder::build(360,pos0,rot0);
  /*
  _rpcCyl[0] = Cylinder::build(4000,pos0,rot0);
  _rpcCyl[1] = Cylinder::build(5000,pos0,rot0);
  _rpcCyl[2] = Cylinder::build(6000,pos0,rot0);
  _rpcCyl[3] = Cylinder::build(7000,pos0,rot0);

  _hoCyl = Cylinder::build(3600,pos0,rot0);
  */
}


L1TMuonCaloInspector::~L1TMuonCaloInspector()
{
 
   // do anything here that needs to be done at desctruction time
   // (e.g. close files, deallocate resources etc.)

}


//
// member functions
//

// ------------ method called for each event  ------------
void
L1TMuonCaloInspector::analyze(const edm::Event& iEvent, 
			      const edm::EventSetup& iSetup)
{

  // Raise flags to indicate matching
  bool foundTruth = false;
  bool foundRpc   = false;
  bool foundDttf  = false;
  bool foundHcal  = false;
  bool foundStdMu = false;
  
  edm::ESHandle<HcalTopology> htopo;
  iSetup.get<IdealGeometryRecord>().get(htopo);

  edm::ESHandle<CaloGeometry> hgeome;
  iSetup.get<CaloGeometryRecord>().get(hgeome);

  // Setup the decoder
  iSetup.get<CaloTPGRecord>().get(_caloDecoder);
  //_caloDecoder->setup(iSetup, CaloTPGTranscoder::HcalTPG);

  // Setup the B field
  edm::ESHandle<MagneticField> bField;
  iSetup.get<IdealMagneticFieldRecord>().get(bField);

  // Setup the tracking geometry
  edm::ESHandle<GlobalTrackingGeometry> htrackgeo;
  iSetup.get<GlobalTrackingGeometryRecord>().get(htrackgeo);

  // Setup the track propagator
  edm::ESHandle<Propagator> shProp;
  iSetup.get<TrackingComponentsRecord>().
    get("SteppingHelixPropagatorAlong", shProp);

  // Here we open all collections!
  edm::Handle<reco::GenParticleCollection> truthParticles;
   // I will get it only if needed, later on!
  //iEvent.getByLabel(_genInput,truthParticles);

  edm::Handle<InternalTrackCollection> rpcTriggerPrimitives;
  iEvent.getByLabel(_rpcInput,rpcTriggerPrimitives);

  edm::Handle<InternalTrackCollection> dttfTriggerPrimitives;
  iEvent.getByLabel(_dttfInput,dttfTriggerPrimitives);

  edm::Handle<TriggerPrimitiveCollection> hcalTriggerPrimitives;
  iEvent.getByLabel(_hcalInput,hcalTriggerPrimitives);

  edm::Handle<reco::TrackCollection> standaloneMuons;
  iEvent.getByLabel(_stdmuInput,standaloneMuons);

  edm::Handle<reco::TrackCollection> globalMuons;
  iEvent.getByLabel(_glbmuInput,globalMuons);

  // Some extra collection, always interesting
  edm::Handle<CaloTowerCollection> caloTowers;
  iEvent.getByLabel("towerMaker",caloTowers);

  edm::Handle<HORecHitCollection> hoRecoHits;
  iEvent.getByLabel("horeco",hoRecoHits);

  edm::ESHandle<CaloGeometry> caloGeo;
  const CaloGeometryRecord& geoC = iSetup.get<CaloGeometryRecord>();
  geoC.get(caloGeo);
  
  // HORecHit *myHit; 
  // HcalDetId myId = myHit->id();
  // GlobalPoint myPosition = caloGeo->getPosition(myId);
  // myPosition.eta(), myPosition.phi(), myPosition.x()...

  //_RPCStationDistribution = _fileService->make<TH1F>("RPCStationDistribution", "Distribution of RPC events by Station",4,1,4);

  // Weird idea: if running on data, let us use the global muons
  // instead of truth muons in the outer loop
  // May have to use good old unsigned int loop on collections
  // instead of nice loop with iterators
  //auto btruth = _doGen ? truthParticles->cbegin() : globalMuons->cbegin();
  //auto etruth = _doGen ? truthParticles->cend() : globalMuons->cend();
  //if (_doGen) {
  

  iEvent.getByLabel(_genInput,truthParticles);
  auto btruth = truthParticles->cbegin();
  auto etruth = truthParticles->cend();
  //}
  //std::cout << "Number of truth particles:"
  //<< truthParticles->size() << std::endl;

  
  
  for( ; btruth != etruth; ++btruth ) {
    // Initial quality cuts
    if (_doGen) {
      if (std::abs(btruth->pdgId()) != 13 ||
	  btruth->pt()<20.)
	continue;
    }
    else {
      if (btruth->pt()<20.)
	continue;
    }
    foundTruth = true;

    //Let us fill some just "truth" histograms.
    fillKinematicHistograms(btruth->eta(),btruth->phi(),btruth->pt(),"truth");
    fillMapHistograms(btruth->eta(), btruth->phi(), 
		      0, 0, 0, 0,
		      "Truth");
    //Propogate the truth muons to each of the different detector positions:


    FreeTrajectoryState initial(GlobalPoint(btruth->vx(),
					      btruth->vy(),
					      btruth->vz()),
				  GlobalVector(btruth->px(),
					       btruth->py(),
					       btruth->pz()),
				  btruth->charge(),
				  &*bField);
    
    TrajectoryStateOnSurface prop_ho = 
      shProp->propagate(initial,*_hoCyl);
    TrajectoryStateOnSurface prop_rpc[4];
    for(int i = 0; i<4; i++){
      prop_rpc[i] = shProp->propagate(initial,*_rpcCyl[i]);
    }

    //See how many truth muons go through SiPM sectors after propogation.
    //First need to convert to ieta and iphi.

    double prop_ho_eta, prop_ho_phi;
    prop_ho_eta = prop_ho.globalPosition().eta();
    prop_ho_phi = prop_ho.globalPosition().phi();

    int prop_ho_ieta, prop_ho_iphi;
    ConvertetaphitoHOietaiphi(prop_ho_eta, prop_ho_phi, prop_ho_ieta, prop_ho_iphi);
    
    //if(IsaSiPM(prop_ho.globalPosition().eta(), prop_ho.globalPosition().phi())){
    if(IsaSiPM(prop_ho_ieta, prop_ho_iphi)){
      //Propogated eta and phi, truth pt
      fillKinematicHistograms(prop_ho_eta,
			      prop_ho_phi,
			      btruth->pt(),
			      "truth_prop_ho-SiPMSector");
      
      fillMapHistograms(prop_ho_eta, prop_ho_phi, 
			prop_ho_ieta, prop_ho_iphi,
			0, 0,
			"Truth_prop_ho-SiPMSector");
    }

       
    /*
     * Work with the HO_reco
     */
    
    auto bho_reco = hoRecoHits->begin();
    auto eho_reco = hoRecoHits->end();
    //std::cout << "Number of HO Reconstructed Hits:"
    //<< hoRecoHits->size() <<" ";
    for( ; bho_reco != eho_reco; ++bho_reco ) {

      double ho_recoPhi = caloGeo->getPosition(bho_reco->id()).phi();
      double ho_recoEta = caloGeo->getPosition(bho_reco->id()).eta();
      double ho_recox = caloGeo->getPosition(bho_reco->id()).x();
      double ho_recoy = caloGeo->getPosition(bho_reco->id()).y();
      int ho_recoieta = bho_reco->id().ieta();
      int ho_recoiphi = bho_reco->id().iphi();


      // Lets fill some Reconstructed HO Histograms

      fillEnergyHistograms(bho_reco->energy(),"Ho_Reco");

      /*
      fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				ho_recoEta,ho_recoPhi,
				"truth-Ho_Reco");
      filldPhiPtHistograms(btruth->phi(),btruth->pt(), 
			   ho_recoPhi,
			   "truth-HOReco");
      */

      // Make Selection Cuts on the Energy (Only events > 0.5)
      /*
      if(bho_reco->energy() > 0.5){
	fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				  ho_recoEta,ho_recoPhi,
				  "truth-Ho_Reco_EnergySelection");
	filldPhiPtHistograms(btruth->phi(),btruth->pt(), 
			     ho_recoPhi,
			     "truth-HOReco_EnergySelection");
      }
      */

      /*
       * Incorporate Propogated Muon Position into Histograms
       */

      if (prop_ho.isValid()){
	fillDeltaEtaPhiHistograms(prop_ho_eta,prop_ho_phi,
				  ho_recoEta,ho_recoPhi,
				  "proptruth-HOReco");
	
	/*
	 * Have included HORecoEnergySelection map
	 * as a quick consistency check that the SiPMs
	 * are in fact where the documentation says they are.  Should look
	 * inside the code.
	 */
	
	if(bho_reco->energy() > 0.4){
	  fillMapHistograms(ho_recoEta, ho_recoPhi, 
			    ho_recoieta, ho_recoiphi, ho_recox, ho_recoy,
			    "HORecoEnergySelection");
	}
	
	// Select out only HO's with SIPMS
	if(IsaSiPM(ho_recoieta, ho_recoiphi)){
	  /*
	  fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				    ho_recoEta,ho_recoPhi,
				    "truth-Ho_RecowSiPM");
	  */
	  fillEnergyHistograms(bho_reco->energy(),"Ho_RecowSiPM");
	  fillMapHistograms(ho_recoEta, ho_recoPhi, 
			    ho_recoieta, ho_recoiphi, ho_recox, ho_recoy,
			    "HORecoWithSiPM");

	  //Use Propogated Truth Particles that pass through a SiPM
	  if(IsaSiPM(prop_ho_ieta, prop_ho_iphi)){ 
	    fillDeltaEtaPhiHistograms(prop_ho_eta,
				      prop_ho_phi,
				      ho_recoEta,ho_recoPhi,
				      "proptruth-HORecowSiPM");
	    
	    //Look at HO_Reco events associated and unassociated with a propagated truth muon
	  
	    //Associated
	    if(std::abs(ho_recoEta - prop_ho_eta) < 0.087/2
	       && std::abs(ho_recoPhi - prop_ho_phi) < 0.087/2){
	      fillEnergyHistograms(bho_reco->energy(),
				 "HO_RecowSiPM_AssociatedTruth");
	      fillDeltaEtaPhiHistograms(prop_ho_eta,prop_ho_phi,
					ho_recoEta,ho_recoPhi,
					"proptruth-HORecowSiPM_AssociatedTruth");
	      fillMapHistograms(ho_recoEta, ho_recoPhi, 
				ho_recoieta, ho_recoiphi, ho_recox, ho_recoy,
				"HORecoWithSiPM_AssociatedTruth");
	    }
	    //Unassocaiated
	    else{
	      /*
	      std::cout <<"For my unassociated events I have," << std::endl
			<< "prop_eta = " << prop_ho_eta << " prop_phi = " << prop_ho_phi << std::endl
			<< "ho_eta = " << ho_recoEta << "and ho_phi = "  << ho_recoPhi << std::endl 
			<< "With an eta difference of: " << prop_ho_eta - ho_recoEta << std::endl
			<< "and a phi difference of: " << prop_ho_phi - ho_recoPhi << std::endl;
	      //<< "and the check that Prop is a SiPM:" << IsaSiPM(prop_ho_eta, prop_ho_phi)
	      */
	      fillEnergyHistograms(bho_reco->energy(),
				   "HO_RecowSiPM_NoAssociatedTruth");
	      fillDeltaEtaPhiHistograms(prop_ho_eta, prop_ho_phi,
					ho_recoEta, ho_recoPhi,
				      "proptruth-HORecowSiPM_NoAssociatedTruth");
	      
	      fillMapHistograms(ho_recoEta, ho_recoPhi, 
				ho_recoieta, ho_recoiphi, ho_recox, ho_recoy,
				"HORecoWithSiPM_NoAssociatedTruth");
	    }
	  
	    //Make a second selection cut on the energy > 0.4
	    if(bho_reco->energy() > 0.4){
	      
	      /*
	      fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
	      ho_recoEta,ho_recoPhi,
	      "truth-Ho_RecowSiPM_EnergySelection");
	      fillEnergyHistograms(bho_reco->energy(),"Ho_RecowSiPM_EnergySelection");
	      filldPhiPtHistograms(btruth->phi(),btruth->pt(), 
				 ho_recoPhi,
				 "truth-HORecowSiPM_EnergySelection");
	      */
	      //Compare to Propogated Truth Particles
	      fillDeltaEtaPhiHistograms(prop_ho_eta,
					prop_ho_phi,
					ho_recoEta,ho_recoPhi,
					"proptruth-HORecowSiPM_EnergySelection");
	      /*
	       * After the two main selection cuts, 
	       * see which ones are associated with real muons.
	       * Condition that they are in the same tile, muon was propogated to.
	       */
	      // Check if propogated muon and generated muon are in the same tile
	      
	      /*
	      if(std::abs(ho_recoEta - prop_ho_eta) < 0.087/2
	      && std::abs(ho_recoPhi - prop_ho_phi) < 0.087/2){
	      fillEnergyHistograms(bho_reco->energy(),
	      "Ho_RecowSiPM_EnergySelection_AssociatedTruth");
	      fillDeltaEtaPhiHistograms(prop_ho_eta,
					  prop_ho_phi,
					  ho_recoEta,ho_recoPhi,
					  "proptruth-HORecowSiPM_EnergySelection_AssociatedTruth");
					  }
					  else{
					  fillEnergyHistograms(bho_reco->energy(),
					  "Ho_RecowSiPM_EnergySelection_NoAssociatedTruth");
	      fillDeltaEtaPhiHistograms(prop_ho_eta,
	      prop_ho_phi,
	      ho_recoEta,ho_recoPhi,
	      "proptruth-HORecowSiPM_EnergySelection_NoAssociatedTruth");
	      }
	      
	      */
	      
	      /*
	       * After the two main selection cuts.
	       */
	      
	      /*
	       * To account for the edge effects of muons propagated to one tile,
	       * but depositing their energy in a neighboring tile, make a loose
	       * cut on associated events.
	       */
	      
	      //Width in eta and phi of Loosely Associated Events
	      double LooseAssoc_BoxWidth = 1.5*0.087;  //Includes all neighboring tiles.
	      if(std::abs(ho_recoEta - prop_ho_eta) < LooseAssoc_BoxWidth/2 
		 && std::abs(ho_recoPhi - prop_ho_phi) < LooseAssoc_BoxWidth/2){ 
		fillEnergyHistograms(bho_reco->energy(),
				     "Ho_RecowSiPM_EnergySelection_LooseAssocProp");
		fillDeltaEtaPhiHistograms(prop_ho_eta,
					  prop_ho_phi,
					  ho_recoEta,ho_recoPhi,
					  "PropwSiPM-HORecowSiPM_EnergySelect_LooseAssoc");
	      } else {
		
		fillEnergyHistograms(bho_reco->energy(),
				     "Ho_RecowSiPM_EnergySelection_LooseNoAssocProp");
		fillDeltaEtaPhiHistograms(prop_ho_eta,
					  prop_ho_phi,
					  ho_recoEta,ho_recoPhi,
					  "PropwSiPM-HORecowSiPM_EnergySelect_LooseNoAssoc");
	      }
	    }
	  }
	}
      }
    }
  
  /*
     * Start with the RPC
     */
    
    auto brpc = rpcTriggerPrimitives->cbegin();
    auto erpc = rpcTriggerPrimitives->cend();
    //std::cout << "Number of rpcTriggerPrimitives:"
    //<< rpcTriggerPrimitives->size() <<" ";
    for( ; brpc != erpc; ++brpc ) {
      // std::cout <<"with layers: " << rpcTriggerPrimitives->layer()<< endl;
      double rpcEta=0.,rpcPhi=0.;
      int rpcStat=0; // number of RPC stations with a trigger primitive
      TriggerPrimitiveStationMap stubs = brpc->getStubs();
      // Chris' function will return configuration of RPC trigger
      // primitives: how many and which stations
      //int rpctype = getType(stubs);
      fillStationDistributionHistograms(stubs, "RPC");
      
      // Loop on RPC stations, for each of which you can get a TP
      unsigned station;
      for(station = 1; station <= 4; ++station ) {
	const unsigned idx = 4*1+station-1; // RPCb=1
	//_RPCStationDistribution->Fill(station, stubs.count(idx));
	if( !stubs.count(idx) ) continue;
	TriggerPrimitiveList tpRpcB = stubs[idx];
	TriggerPrimitiveRef bestRpcB = getBestTriggerPrimitive(tpRpcB,1);
	rpcEta+=bestRpcB->getCMSGlobalEta();
	rpcPhi+=bestRpcB->getCMSGlobalPhi();
	++rpcStat;
	std::stringstream keystream;
	//if(station==3 || station == 4) cout << "Station 3 or 4 used" << std::endl;
	keystream <<"truth-rpc_Layer" << station;
	
	//filling histograms that are RPC layer sensitive.
	
	filldPhiPtHistograms(btruth->phi(),btruth->pt(), 
			     bestRpcB->getCMSGlobalPhi(),
			     keystream.str());

	if (prop_rpc[station-1].isValid()){
	  //std::cout << "RPC Propogation Valid" << std::endl;
	  fillDeltaEtaPhiHistograms(prop_rpc[station-1].globalPosition().eta(),
				    prop_rpc[station-1].globalPosition().phi(),
				    bestRpcB->getCMSGlobalEta(),
				    bestRpcB->getCMSGlobalPhi(),
				    "prop-truth-rpc");
	}
      }

      //I question this.  Now that we have the propogator, why should we only assign one
      // eta and phi to the RPC.  Why not calculate it for every triger primitive.

      if (rpcStat>0) {
	rpcEta/=rpcStat;
	rpcPhi/=rpcStat;
      }

      //Note beyond here we are using the average of the layers.

      // Let us fill some histograms that are RPC layer averaged!
      fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				rpcEta,rpcPhi,
				"truth-rpc");

      filldPhiPtHistograms(btruth->phi(),btruth->pt(), rpcPhi, "truth-rpc");
      
      if (btruth == truthParticles->cbegin()) {
      	fillMapHistograms(rpcEta,rpcPhi,0.,0., 0., 0.,
      			  "rpc");
      }
      
      ////////////////////-///////////////////
      
      // Continue with matching only if we did find a match
      if (sqrt(reco::deltaR2(btruth->eta(),btruth->phi(),
			     rpcEta,rpcPhi))>_dRtruthToRpc)
	continue;
      foundRpc = true;

      // Now loop on DTTF tracks...
      auto bdttf = dttfTriggerPrimitives->cbegin();
      auto edttf = dttfTriggerPrimitives->cend();
      for( ; bdttf != edttf; ++bdttf ) {
	double dttfEta=0.,dttfPhi=0.;
	int dttfStat=0; // number of DTTF stations with a trigger primitive
	TriggerPrimitiveStationMap stubs = bdttf->getStubs();
	// Chris' function will return configuration of DTTF trigger
	// primitives: how many and which stations
	//int dttftype = getType(stubs);
	
	// Loop on DTTF stations, for each of which you can get a TP
	unsigned station;
	for( station = 1; station <= 4; ++station ) {
	  const unsigned idx = 4*0+station-1; // DTTF=0
	  if( !stubs.count(idx) ) continue;
	  TriggerPrimitiveList tpDttf = stubs[idx];
	  TriggerPrimitiveRef bestDttf = getBestTriggerPrimitive(tpDttf,0);
	  dttfEta+=bestDttf->getCMSGlobalEta();
	  dttfPhi+=bestDttf->getCMSGlobalPhi();
	  ++dttfStat;
	}
	if (dttfStat>0) {
	  dttfEta/=dttfStat;
	  dttfPhi/=dttfStat;
	}
	// Let us fill some histograms here too
	// Carefull that we are inside a double-loop
	// I want to fill the RPC-DTTF plot only once per truth muon
	// and, similarly, fill the TRUTH-DTTF only once per RPC stub 
	if (brpc == rpcTriggerPrimitives->cbegin()) {
	  fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				    dttfEta,dttfPhi,
				    "truth-dttf");
	}
	if (btruth == truthParticles->cbegin()) {
	  fillDeltaEtaPhiHistograms(rpcEta,rpcPhi,
				    dttfEta,dttfPhi,
				    "rpc-dttf");
	}
	if (btruth == truthParticles->cbegin() &&
	    brpc == rpcTriggerPrimitives->cbegin()) {
	  fillMapHistograms(dttfEta,dttfPhi,0.,0., 0., 0.,
			    "dttf");
	}
	

	// Check: what is the eta of the internal track vs. the
	// one of the trigger primitive?
	//if (btruth == truthParticles->cbegin() &&
	//    brpc == rpcTriggerPrimitives->cbegin()) {
	//  fillDeltaEtaPhiHistograms(bdttf->parent()->etaValue(),
	//			    bdttf->parent()->phiValue(),
	//			    dttfEta,dttfPhi,
	//			    "dttfTK-dttfTP");
	//}
	///////////////////////////////////////

	// Continue with matching only if we did find a match
	if (sqrt(reco::deltaR2(rpcEta,rpcPhi,
			       dttfEta,dttfPhi))>_dRrpcToDttf)
	  continue;
	foundDttf = true;

	// One other layer of complication: loop on HCAL TP
	auto bhcal = hcalTriggerPrimitives->cbegin();
	auto ehcal = hcalTriggerPrimitives->cend();
	for( ; bhcal != ehcal; ++bhcal ) {

	  //TriggerPrimitiveStationMap stubs = bhcal->getStubs();
	  //const unsigned idx = 4*4+1-1; // HCAL=4, station=1
	  //if( !stubs.count(idx) ) continue;
	  //TriggerPrimitiveList tpHcal = stubs[idx];
	  //TriggerPrimitiveRef bestHcal = 
	  //  getBestTriggerPrimitive(tpHcal,4);

	  //filldPhiPtHistograms(btruth->phi(), btruth->pt(),
	  //			 bhcal->getCMSGlobalPhi(),
	  //			 "truth-hcal");

	  if (brpc == rpcTriggerPrimitives->cbegin() &&
	      bdttf == dttfTriggerPrimitives->cbegin() ) {
	    fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
				      bhcal->getCMSGlobalEta(),
				      bhcal->getCMSGlobalPhi(),
				      "truth-hcal");
	  }
	  if (btruth == truthParticles->cbegin() &&
	      bdttf == dttfTriggerPrimitives->cbegin() ) {
	    fillDeltaEtaPhiHistograms(rpcEta,rpcPhi,
				      bhcal->getCMSGlobalEta(),
				      bhcal->getCMSGlobalPhi(),
				      "rpc-hcal");
	  }
	  if (btruth == truthParticles->cbegin() &&
	      brpc == rpcTriggerPrimitives->cbegin() ) {
	    fillDeltaEtaPhiHistograms(dttfEta,dttfPhi,
				      bhcal->getCMSGlobalEta(),
				      bhcal->getCMSGlobalPhi(),
				      "dttf-hcal");
	  }
	  if (btruth == truthParticles->cbegin() &&
	      brpc == rpcTriggerPrimitives->cbegin() &&
	      bdttf == dttfTriggerPrimitives->cbegin() ) {
	    fillMapHistograms(bhcal->getCMSGlobalEta(),
	  		      bhcal->getCMSGlobalPhi(),
	  		      0.,0., 0., 0.,
	  		      "hcal");
	  }
	  

	  // Notice that here I have a truth muon, an RPC TP,
	  // a DTTF track and an HCAL TP, not necessarily matching

	  // Continue with matching only if we did find a match
	  if (sqrt(reco::deltaR2(dttfEta,dttfPhi,
				 bhcal->getCMSGlobalEta(),
				 bhcal->getCMSGlobalPhi()))>_dRdttfToHcal)
	    continue;
	  foundHcal = true;
	  
	  //std::cout << _caloDecoder->hcaletValue
	  //  (bhcal->detId<HcalTrigTowerDetId>().ieta(),
	  //   bhcal->detId<HcalTrigTowerDetId>().iphi(),
	  //   bhcal->getHCALData().SOI_compressedEt)
	  //	    << std::endl;

	  // Let's loop on muons
	  // I will be sneaky and write this code only once
	  // then use it for standalone and global muons by just
	  // modifying the python file...
	  auto bstdmu = standaloneMuons->cbegin();
	  auto estdmu = standaloneMuons->cend();
	  for( ; bstdmu != estdmu; ++bstdmu ) {
	    if (brpc == rpcTriggerPrimitives->cbegin() &&
		bdttf == dttfTriggerPrimitives->cbegin() &&
		bhcal == hcalTriggerPrimitives->cbegin() ) {
	      fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
					bstdmu->eta(),bstdmu->phi(),
					"truth-standalone");
	    }

	    // Continue with matching only if we did find a match
	    if (sqrt(reco::deltaR2(bhcal->getCMSGlobalEta(),
				   bhcal->getCMSGlobalPhi(),
				   bstdmu->eta(),
				   bstdmu->phi()))>_dRhcalToStdMu)
	      continue;
	    foundStdMu = true;
  
	    // Technically, here I have a truth muon matched to
	    // an RPC TP, matched to a DTTF TP, matched to an HCAL TP,
	    // matched to a standalone (or global, if I change the
	    // collection name) muon

	    // Let's loop on Calo Towers
	    // I want to check if there is an HORecHit in front of the
	    // global muon, and check its energy. How does that
	    // hit match with HcalTrigPrimitives? And RPC and DTTF?
	    // Notice that there will be tons of noisy towers
	    auto bcalo = caloTowers->begin();
	    auto ecalo = caloTowers->end();
	    for( ; bcalo != ecalo; ++bcalo ) {
	      if (btruth == truthParticles->cbegin() &&
		  brpc == rpcTriggerPrimitives->cbegin() &&
		  bdttf == dttfTriggerPrimitives->cbegin() &&
		  bhcal == hcalTriggerPrimitives->cbegin() ) {
		fillDeltaEtaPhiHistograms(bstdmu->eta(),bstdmu->phi(),
					  bcalo->hadPosition().eta(),
					  bcalo->hadPosition().phi(),
					  "standalone-calotower");
	      }
	      if (brpc == rpcTriggerPrimitives->cbegin() &&
		  bdttf == dttfTriggerPrimitives->cbegin() &&
		  bhcal == hcalTriggerPrimitives->cbegin() &&
		  bstdmu == standaloneMuons->cbegin() ) {
		fillDeltaEtaPhiHistograms(btruth->eta(),btruth->phi(),
					  bcalo->hadPosition().eta(),
					  bcalo->hadPosition().phi(),
					  "truth-calotower");
	      }
	      if (btruth == truthParticles->cbegin() &&
		  bdttf == dttfTriggerPrimitives->cbegin() &&
		  bhcal == hcalTriggerPrimitives->cbegin() &&
		  bstdmu == standaloneMuons->cbegin() ) {
		fillDeltaEtaPhiHistograms(rpcEta,rpcPhi,
					  bcalo->hadPosition().eta(),
					  bcalo->hadPosition().phi(),
					  "rpc-calotower");
	      }
	      if (btruth == truthParticles->cbegin() &&
		  brpc == rpcTriggerPrimitives->cbegin() &&
		  bhcal == hcalTriggerPrimitives->cbegin() &&
		  bstdmu == standaloneMuons->cbegin() ) {
		fillDeltaEtaPhiHistograms(dttfEta,dttfPhi,
					  bcalo->hadPosition().eta(),
					  bcalo->hadPosition().phi(),
					  "dttf-calotower");
	      }
	      if (btruth == truthParticles->cbegin() &&
		  brpc == rpcTriggerPrimitives->cbegin() &&
		  bdttf == dttfTriggerPrimitives->cbegin() &&
		  bstdmu == standaloneMuons->cbegin() ) {
		fillDeltaEtaPhiHistograms(bhcal->getCMSGlobalEta(),
					  bhcal->getCMSGlobalPhi(),
					  bcalo->hadPosition().eta(),
					  bcalo->hadPosition().phi(),
					  "hcal-calotower");
	      }
	      if (btruth == truthParticles->cbegin() &&
	      	  brpc == rpcTriggerPrimitives->cbegin() &&
	      	  bdttf == dttfTriggerPrimitives->cbegin() &&
	      	  bhcal == hcalTriggerPrimitives->cbegin() &&
	      	  bstdmu == standaloneMuons->cbegin() ) {
		if (fabs(bcalo->hadPosition().eta())<1.3)
		  fillMapHistograms(bcalo->hadPosition().eta(),
				    bcalo->hadPosition().phi(),
				    bcalo->id().ieta(),
				    bcalo->id().iphi(),
				    bcalo->hadPosition().x(),
				    bcalo->hadPosition().y(),
				    "calotower");
	      }
	    } // end loop on calo towers
	  } // end loop on standalone muons
	} // end loop on HCAL TP
      } // end loop on DTTF
    } // end loop on RPC
    } // end loop on truth or global

    //Count of Truth Muons going through HO sectors with SiPMs
    
  // Here we fill counters - notice that I have to avoid leaving
  // the function analyze before I get here, otherwise the counts
  // will not be correct
  if (true)       _counters->Fill(ALL);
  if (foundTruth) _counters->Fill(TRUTH);
  if (foundRpc)   _counters->Fill(RPC);
  if (foundDttf)  _counters->Fill(DTTF);
  if (foundHcal)  _counters->Fill(HCAL);
  if (foundStdMu) _counters->Fill(STDMU);

  }


// ------------ method called once each job just before starting event loop  ------------
void 
L1TMuonCaloInspector::beginJob()
{
}

// ------------ method called once each job just after ending the event loop  ------------
void 
L1TMuonCaloInspector::endJob() 
{
}

// ------------ method called when starting to processes a run  ------------
/*
void 
L1TMuonCaloInspector::beginRun(edm::Run const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when ending the processing of a run  ------------
/*
void 
L1TMuonCaloInspector::endRun(edm::Run const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when starting to processes a luminosity block  ------------
/*
void 
L1TMuonCaloInspector::beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}
*/

// ------------ method called when ending the processing of a luminosity block  ------------
/*
void 
L1TMuonCaloInspector::endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&)
{
}
*/

// ------------ method fills 'descriptions' with the allowed parameters for the module  ------------
void
L1TMuonCaloInspector::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
}

TriggerPrimitiveRef L1TMuonCaloInspector::
getBestTriggerPrimitive(const TriggerPrimitiveList& list, 
			unsigned subsystem) const {
  TriggerPrimitiveRef result;
  unsigned bestquality = 0, qualtemp; // for CSCs / DTs / HCAL (just for fun)
  float phiavg, bestdphi, lsize; // average strip for RPCS
  auto tp = list.cbegin();
  auto tpend = list.cend();
  
  switch( subsystem ) {
  case 0: // DTs
    for( ; tp != tpend; ++tp ) {
      qualtemp = 0;
      if( (*tp)->getDTData().qualityCode != -1 ) {
	qualtemp += (~((*tp)->getDTData().qualityCode)&0x7) << 1;	
      }
      if( (*tp)->getDTData().theta_quality != -1 ) {
	qualtemp += (~((*tp)->getDTData().theta_quality)&0x1);
      }
      if( qualtemp > bestquality ) {
	bestquality = qualtemp;
	result = *tp;
      }
    }
      break;
  case 2: // CSCs
    for( ; tp != tpend; ++tp ) {
      qualtemp = (*tp)->getCSCData().quality;      
      if ( qualtemp > bestquality ) {
	bestquality = qualtemp;
	result = *tp;
      }
    }
    break;
  case 1:
  case 3: // RPCb/f
    phiavg = 0;
    lsize = list.size();
    for( ; tp != tpend; ++tp ) {
      phiavg += (*tp)->getCMSGlobalPhi();
    }
    phiavg = phiavg/lsize;    
    tp = list.cbegin();
    bestdphi = 100;
    for( ; tp != tpend; ++tp ) {      
      if( std::abs((*tp)->getCMSGlobalPhi() - phiavg) < bestdphi ) {
	result = *tp;
	bestdphi = std::abs((*tp)->getCMSGlobalPhi() - phiavg);
      }
    }
    break;
  case 4: // HCAL
    for( ; tp != tpend; ++tp ) {
      qualtemp = (*tp)->getHCALData().size;
      if ( qualtemp > bestquality ) {
	bestquality = qualtemp;
	result = *tp;
      }
    }
    break;
  default:
    break;
  }
  return result;
}
/*
 *Method to fill in histograms of the eta and phi distributions of a type given by the key.
 */

void L1TMuonCaloInspector::fillDeltaEtaPhiHistograms(float eta1, float phi1,
						     float eta2, float phi2,
						     std::string key) {
  
  if(!_h1dDeltaEta.count(key))
    _h1dDeltaEta[key] = 
      _fileService->make<TH1F>(Form("deta_%s",key.c_str()),
			       Form("#Delta#eta %s",key.c_str()),
			       500,-0.5,0.5);
  _h1dDeltaEta[key]->Fill(eta1-eta2);

  if(!_h1dDeltaPhi.count(key))
    _h1dDeltaPhi[key] = 
      _fileService->make<TH1F>(Form("dphi_%s",key.c_str()),
			       Form("#Delta#phi %s",key.c_str()),
			       500,-M_PI/10.,M_PI/10.);
  _h1dDeltaPhi[key]->Fill(WrapCheck(phi1,phi2));
  
  if(!_h1dDeltaR.count(key))
    _h1dDeltaR[key] = 
      _fileService->make<TH1F>(Form("dR_%s",key.c_str()),
			       Form("#Delta R %s",key.c_str()),
			       500,0,1.0);
  _h1dDeltaR[key]->Fill(sqrt(reco::deltaR2(eta1,phi1,eta2,phi2)));

  if(!_h2dDeltaEtaPhi.count(key))
    _h2dDeltaEtaPhi[key] = 
      _fileService->make<TH2F>(Form("detaphi_%s",key.c_str()),
			       Form("#Delta#phi vs. #Delta#eta %s",
				    key.c_str()),
			       500,-1.3,1.3,
			       500,-M_PI,M_PI);
  _h2dDeltaEtaPhi[key]->Fill(eta1-eta2,
			     WrapCheck(phi1,phi2));
  
  return;
}

void L1TMuonCaloInspector::fillMapHistograms(float eta, float phi,
					     int ieta, int iphi,
					     float x, float y,
					     std::string key) {
  
  if(!_h2dEtaPhi.count(key))
    _h2dEtaPhi[key] = 
      _fileService->make<TH2F>(Form("etaphi_%s",key.c_str()),
			       Form("#phi vs. #eta %s",
				    key.c_str()),
			       500,-1.3,1.3,
			       500,-3.14,3.14);
  _h2dEtaPhi[key]->Fill(eta,phi);

if(!_h2diEtaiPhi.count(key))
    _h2diEtaiPhi[key] = 
      _fileService->make<TH2F>(Form("ietaiphi_%s",key.c_str()),
			       Form("iphi vs. ieta %s",
				    key.c_str()),
			       30,-15,15,
			       72,-0,72);
  _h2diEtaiPhi[key]->Fill(ieta,iphi);

  if(!_h2dXY.count(key))
    _h2dXY[key] = 
      _fileService->make<TH2F>(Form("xy_%s",key.c_str()),
			       Form("Y vs. X %s",
				    key.c_str()),
			       2050,-4100,4100,
			       2050,-4100,4100);
  _h2dXY[key]->Fill(x,y);
  
  return;
}


void L1TMuonCaloInspector::filldPhiPtHistograms(float phi1, float pt, 
						     float phi2,std::string key) {
  
  if(!_h2dDeltaPhiPt.count(key))
    _h2dDeltaPhiPt[key] = 
      _fileService->make<TH2F>(Form("dphipt_%s",key.c_str()),
			       Form("#Delta#phi vs. Pt %s",
				    key.c_str()),
			       500,0,200,
			       500,-M_PI/10,M_PI/10);
  _h2dDeltaPhiPt[key]->Fill(pt, WrapCheck(phi1,phi2));
  
  return;
}

void L1TMuonCaloInspector::fillKinematicHistograms(float eta, float phi,
						   float pt,
						   std::string key) {
  
  if(!_h1dEta.count(key))
    _h1dEta[key] = 
      _fileService->make<TH1F>(Form("eta_%s",key.c_str()),
			       Form("#eta %s",
				    key.c_str()),
			       500,-1.3,1.3);
  _h1dEta[key]->Fill(eta);
  
  if(!_h1dPhi.count(key))
    _h1dPhi[key] = 
      _fileService->make<TH1F>(Form("phi_%s",key.c_str()),
			       Form("#phi %s",
				    key.c_str()),
			       500,-M_PI,M_PI);
  _h1dPhi[key]->Fill(phi);
  
  if(!_h1dPt.count(key))
    _h1dPt[key] = 
      _fileService->make<TH1F>(Form("pt_%s",key.c_str()),
			       Form("#pt %s",
				    key.c_str()),
			       500,0,250);
  _h1dPt[key]->Fill(pt);



  
  return;
}


//Method to fill a Histogram with Energies

void L1TMuonCaloInspector::fillEnergyHistograms(float energy, std::string key){

  if(!_h1Energy.count(key)){
    _h1Energy[key] = 
      _fileService->make<TH1F>(Form("Energy_%s",key.c_str()),
			       Form("Energy %s",key.c_str()),
			       500,0.0,100.0);
  }
  _h1Energy[key]->Fill(energy);
}

/*
 * When subtracting 2 phi's, checks to make sure it is not accidently
 * wrapping around the unit circle.  Returns delta phi
 */
double L1TMuonCaloInspector::WrapCheck(double phi1, double phi2){
  double delta_phi = phi1 - phi2;
  if(delta_phi < -M_PI){
    return (2*M_PI + delta_phi);
  }
  if(delta_phi > M_PI){
    return (delta_phi - 2*M_PI);
  }
  return delta_phi;
}
 

// Example of how to pass the HORecHit object
//bool L1TMuonCaloInspector::IsaSiPM(const HORecHit * bho_rec){
 
bool L1TMuonCaloInspector::IsaSiPM(int ieta, int iphi){
 
  //Sectors 9 and 10 in YB1
  //  5 <= ieta <= 10, end of eta range  = ieta * 0.087
  // 47 <= iphi <= 58, end of  phi range  = iphi * 0.087 for iphi <= 36 
  //                                   and -pi + (iphi-36)*0.087 for iphi > 36
  if(ieta >= 5 && ieta <= 10){
    if(iphi >= 47 && iphi <= 58){
      return true;
    }
  }
  //Sectors 11 and 12 in YB2
  //  11 <= ieta <= 15, end of eta range  = ieta * 0.087
  // 59 <= iphi <= 70, end of  phi range  = iphi * 0.087 for iphi <= 36 
  //                                   and -pi + (iphi-36)*0.087 for iphi > 36
  if(ieta >= 11 && ieta <= 15){
    if(iphi >= 59 && iphi <= 70){
      return true;
    }
  }
  return false;
}
/*
bool L1TMuonCaloInspector::IsaSiPM(double eta, double phi){
//int ieta = bho_reco->id().ieta();
//int iphi = bho_reco->id().iphi();
//Sectors 9 and 10 in YB1
//  5 <= ieta <= 10, end of eta range  = ieta * 0.087
// 47 <= iphi <= 58, end of  phi range  = iphi * 0.087 for iphi <= 36 
//                                   and -pi + (iphi-36)*0.087 for iphi > 36
  if(eta >= (5-1)*0.087 && eta <= (10)*0.087){
  if(phi >= -M_PI+(47-36-1)*(2*M_PI/72) && phi <= -M_PI+(58-36)*(2*M_PI/72)){
  return true;
  }
  }
  //Sectors 11 and 12 in YB2
  //  11 <= ieta <= 15, end of eta range  = ieta * 0.087
  // 59 <= iphi <= 70, end of  phi range  = iphi * 0.087 for iphi <= 36 
  //                                   and -pi + (iphi-36)*0.087 for iphi > 36
  if(eta >= (11-1)*0.087 && eta <= 15*0.087){
    if(phi >= -M_PI+(59-36-1)*(2*M_PI/72) && phi <= -M_PI+(70-36)*(2*M_PI/72)){
      return true;
    }
  }
  return false;
}
*/

/*
 * Takes a give eta and phi position
 * Converts them to the associated ieta and iphi values of the HO.
 * passes back by reference.
 */

void L1TMuonCaloInspector::ConvertetaphitoHOietaiphi(double eta, double phi, int & ieta, int & iphi){
  if(eta >= 0){
    ieta =  1+eta/0.087 +1;
    //std::cout << "eta of " << eta << "gives ieta of " << ieta << std::endl;
  }
  else{
    ieta = -1 + eta/0.087;
    //std::cout << "eta of " << eta << "gives ieta of " << ieta << std::endl;
  }
  if(phi >=0){
    iphi = 1+ 72*phi/(2*M_PI);
    //std::cout << "phi of " << phi << "gives iphi of " << iphi << std::endl;
  }
  else{
    iphi = 1+ 72*(2*M_PI+phi)/(2*M_PI);
    //std::cout << "phi of " << phi << "gives iphi of " << iphi << std::endl;
  }
}

void L1TMuonCaloInspector::fillStationDistributionHistograms(TriggerPrimitiveStationMap stubs, std::string key){
  if(!_h1StationDistribution.count(key)){
    _h1StationDistribution[key] = 
      _fileService->make<TH1F>(Form("%s_Station_Distribution",key.c_str()),
			       Form("%s Station Distribution",key.c_str()),
				   11,0.5,11.5);
  } 

  /*
   *11 Histograms bins are defined as followed:
     * 1 -> 12
     * 2 -> 23
     * 3 -> 34
     * 4 -> 13
     * 5 -> 14
     * 6 -> 24
     * 7 -> 123
     * 8 -> 234
     * 9 -> 124
     * 10 -> 134
     * 11 -> 1234
     */
    
    std::stringstream stationcombo;
    unsigned station;
    //If station records an event, add to station combo.
    for( station = 1; station <= 4; ++station ) {
      const unsigned idx = 4*1+station-1; // RPCb=1
      if(stubs.count(idx)){
	stationcombo << station;
      }
    }
    if(stationcombo.str()=="12") _h1StationDistribution[key]->Fill(1);
    if(stationcombo.str()=="23") _h1StationDistribution[key]->Fill(2);
    if(stationcombo.str()=="34") _h1StationDistribution[key]->Fill(3);
    if(stationcombo.str()=="13") _h1StationDistribution[key]->Fill(4);
    if(stationcombo.str()=="14") _h1StationDistribution[key]->Fill(5);
    if(stationcombo.str()=="24") _h1StationDistribution[key]->Fill(6);
    if(stationcombo.str()=="123") _h1StationDistribution[key]->Fill(7);
    if(stationcombo.str()=="234") _h1StationDistribution[key]->Fill(8);
    if(stationcombo.str()=="124") _h1StationDistribution[key]->Fill(9);
    if(stationcombo.str()=="134") _h1StationDistribution[key]->Fill(10);
    if(stationcombo.str()=="1234") _h1StationDistribution[key]->Fill(11);

    return;
}


//define this as a plug-in
DEFINE_FWK_MODULE(L1TMuonCaloInspector);
