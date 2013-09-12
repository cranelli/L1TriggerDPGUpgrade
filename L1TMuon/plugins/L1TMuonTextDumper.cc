// 
// Class: L1TMuonTextDumper
//
// Info: Just a simple text dumper for manual debugging
//
// Author: L. Gray (FNAL)
//

#include <memory>
#include <map>

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"

#include "L1TriggerDPGUpgrade/L1TMuon/interface/GeometryTranslator.h"

#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitive.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonTriggerPrimitiveFwd.h"

#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrack.h"
#include "L1TriggerDPGUpgrade/DataFormats/interface/L1TMuonInternalTrackFwd.h"

#include "L1TriggerDPGUpgrade/L1TMuon/interface/SubsystemCollectorFactory.h"

#include "DataFormats/HepMCCandidate/interface/GenParticleFwd.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"

using namespace L1TMuon;

typedef edm::ParameterSet PSet;

class L1TMuonTextDumper : public edm::EDAnalyzer {
public:
  L1TMuonTextDumper(const PSet&);
  ~L1TMuonTextDumper() {}

  void analyze(const edm::Event&, const edm::EventSetup&);  
private:
  bool _dogen;
  edm::InputTag _geninput;
  std::vector<edm::InputTag> _tpinputs, _convTrkInputs;
};

L1TMuonTextDumper::L1TMuonTextDumper(const PSet& p) {
  if( (_dogen = p.getUntrackedParameter<bool>("doGen",false)) ) {
    _geninput = p.getUntrackedParameter<edm::InputTag>("genSrc");
  }
  _tpinputs = p.getParameter<std::vector<edm::InputTag> >("primitiveSrcs");
  _convTrkInputs = 
    p.getParameter<std::vector<edm::InputTag> >("converterSrcs");
}

void L1TMuonTextDumper::analyze(const edm::Event& ev, 
			       const edm::EventSetup& es) {
  //dump the generated muons in the event (if requested)
  if( _dogen ) {
    edm::Handle<reco::GenParticleCollection> genps;
    ev.getByLabel(_geninput,genps);
    auto bgen = genps->cbegin();
    auto egen = genps->cend();
    for( ; bgen != egen; ++bgen ) {
      if( std::abs(bgen->pdgId()) == 13 ) {
	std::cout << "Particle Type: " << bgen->pdgId() 
		  << " pt: " << bgen->pt()
		  << " eta: " << bgen->eta() 
		  << " phi: " << bgen->phi() << std::endl;
      }
    }
  }
  // dump the trigger primitive digis
  auto tpsrc = _tpinputs.cbegin();
  auto tpend = _tpinputs.cend();
  for( ; tpsrc != tpend; ++tpsrc ) {
    edm::Handle<TriggerPrimitiveCollection> tps;
    ev.getByLabel(*tpsrc,tps);
    auto tp = tps->cbegin();
    auto tpend = tps->cend();
    
    std::cout << "Dumping trigger primitives from : " << *tpsrc << std::endl;
    for( ; tp != tpend; ++tp ) {
      tp->print(std::cout);
    }    
  }
  // dump tracks made from track converters
  auto cvtksrc = _convTrkInputs.cbegin();
  auto cvtkend = _convTrkInputs.cend();
  for( ; cvtksrc != cvtkend; ++cvtksrc ) {
    edm::Handle<InternalTrackCollection> trks;
    ev.getByLabel(*cvtksrc,trks);
    auto trk = trks->cbegin();
    auto trend = trks->cend();

    std::cout << "Dumping converted tracks from : " << *cvtksrc << std::endl;
    for( ; trk != trend; ++trk ) {
      trk->print(std::cout);
    }
  }
}

#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_FWK_MODULE(L1TMuonTextDumper);
