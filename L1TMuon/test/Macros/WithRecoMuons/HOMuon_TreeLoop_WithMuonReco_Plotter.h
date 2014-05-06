//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May  6 11:59:57 2014 by ROOT version 5.34/10
// from TTree ho_muon_tree/Generator, Propagator, and Reco Data
// found on file: ../../SingleMu14Pt_PostLS1_caloInspector.root
//////////////////////////////////////////////////////////

#ifndef HOMuon_TreeLoop_WithMuonReco_Plotter_h
#define HOMuon_TreeLoop_WithMuonReco_Plotter_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TH1.h>
#include <TH1F.h>
#include <TH2F.h>
#include <set>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class HOMuon_TreeLoop_WithMuonReco_Plotter : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   vector<int>     *Generator_pdgId;
   vector<float>   *Generator_Etas;
   vector<float>   *Generator_Phis;
   vector<float>   *Generator_Pts;
   vector<float>   *Prop_HO_Front_Etas;
   vector<float>   *Prop_HO_Front_Phis;
   vector<float>   *Prop_HO_Front_Xs;
   vector<float>   *Prop_HO_Front_Ys;
   vector<float>   *Prop_HO_Front_Zs;
   vector<float>   *Prop_HO_Back_Etas;
   vector<float>   *Prop_HO_Back_Phis;
   vector<float>   *Prop_HO_Back_Xs;
   vector<float>   *Prop_HO_Back_Ys;
   vector<float>   *Prop_HO_Back_Zs;
   vector<bool>    *Prop_HO_FrontBackSame;
   vector<float>   *HOReco_Etas;
   vector<float>   *HOReco_Phis;
   vector<float>   *HOReco_Energies;
   vector<float>   *StandAlone_Etas;
   vector<float>   *StandAlone_Phis;
   vector<float>   *StandAlone_Pts;
   vector<float>   *GlobalMuons_Etas;
   vector<float>   *GlobalMuons_Phis;
   vector<float>   *GlobalMuons_Pts;

   // List of branches
   TBranch        *b_Generator_pdgId;   //!
   TBranch        *b_Generator_Etas;   //!
   TBranch        *b_Generator_Phis;   //!
   TBranch        *b_Generator_Pts;   //!
   TBranch        *b_Prop_HO_Front_Etas;   //!
   TBranch        *b_Prop_HO_Front_Phis;   //!
   TBranch        *b_Prop_HO_Front_Xs;   //!
   TBranch        *b_Prop_HO_Front_Ys;   //!
   TBranch        *b_Prop_HO_Front_Zs;   //!
   TBranch        *b_Prop_HO_Back_Etas;   //!
   TBranch        *b_Prop_HO_Back_Phis;   //!
   TBranch        *b_Prop_HO_Back_Xs;   //!
   TBranch        *b_Prop_HO_Back_Ys;   //!
   TBranch        *b_Prop_HO_Back_Zs;   //!
   TBranch        *b_Prop_HO_FrontBackSame;   //!
   TBranch        *b_HOReco_Etas;   //!
   TBranch        *b_HOReco_Phis;   //!
   TBranch        *b_HOReco_Energies;   //!
   TBranch        *b_StandAlone_Etas;   //!
   TBranch        *b_StandAlone_Phis;   //!
   TBranch        *b_StandAlone_Pts;   //!
   TBranch        *b_GlobalMuons_Etas;   //!
   TBranch        *b_GlobalMuons_Phis;   //!
   TBranch        *b_GlobalMuons_Pts;   //!

   HOMuon_TreeLoop_WithMuonReco_Plotter(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~HOMuon_TreeLoop_WithMuonReco_Plotter() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();


   //Hold the Histograms with the same axis in Maps                                                  
   //My Stuff

   //int eventcount;                                                                                 
   int propagatorCount;
   int recoAboveThresholdCount;

   std::map<std::string,TH1F*>::iterator it;
   std::map<std::string,TH2F*>::iterator it2D;

   std::map<std::string,TH1F*> _h1Energy;
   std::map<std::string,TH1F*> _h1Eta;
   std::map<std::string,TH1F*> _h1Phi;
   std::map<std::string,TH2F*> _h2EtaPhiMap;
   std::map<std::string,TH1F*> _h1DeltaEta;
   std::map<std::string,TH1F*> _h1DeltaPhi;
   std::map<std::string,TH2F*> _h2DeltaEtaDeltaPhi;
   std::map<std::string,TH1F*> _h1Count;
   std::map<std::string,TH2F*> _h2EnergyMap;

   std::set<Long64_t> plotted_entries;

   void FillEnergyHistograms(float energy, std::string key);
   void FillEtaPhiHistograms(float eta, float phi, std::string key);
   void FillDeltaEtaPhiHistograms(float eta1, float eta2, float phi1, float phi2, std::string key);
   void FillCountHistograms(float counts, std::string key);
   void FillEnergyMap(float eta, float phi, double energy, std::string key);

   bool LooseCut(double eta1, double eta2, double phi1, double phi2);
   void PlotEntry(Long64_t entry);

   void PlotCreator(TH1F * hist,const char * title, const char * xAxis, const char * yAxis,double xMin, 
		    double xMax, int num_binmerge=1, bool isLogy=false);
   void PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, double xMin, 
		      double xMax,double yMin, double yMax,int num_xbinmerge=1, int num_ybinmerge=1, 
		      const char * type="box");
   
   double WrapCheck(double phi1, double phi2);

   ClassDef(HOMuon_TreeLoop_WithMuonReco_Plotter,0);
};

#endif

#ifdef HOMuon_TreeLoop_WithMuonReco_Plotter_cxx
void HOMuon_TreeLoop_WithMuonReco_Plotter::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Generator_pdgId = 0;
   Generator_Etas = 0;
   Generator_Phis = 0;
   Generator_Pts = 0;
   Prop_HO_Front_Etas = 0;
   Prop_HO_Front_Phis = 0;
   Prop_HO_Front_Xs = 0;
   Prop_HO_Front_Ys = 0;
   Prop_HO_Front_Zs = 0;
   Prop_HO_Back_Etas = 0;
   Prop_HO_Back_Phis = 0;
   Prop_HO_Back_Xs = 0;
   Prop_HO_Back_Ys = 0;
   Prop_HO_Back_Zs = 0;
   Prop_HO_FrontBackSame = 0;
   HOReco_Etas = 0;
   HOReco_Phis = 0;
   HOReco_Energies = 0;
   StandAlone_Etas = 0;
   StandAlone_Phis = 0;
   StandAlone_Pts = 0;
   GlobalMuons_Etas = 0;
   GlobalMuons_Phis = 0;
   GlobalMuons_Pts = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Generator_pdgId", &Generator_pdgId, &b_Generator_pdgId);
   fChain->SetBranchAddress("Generator_Etas", &Generator_Etas, &b_Generator_Etas);
   fChain->SetBranchAddress("Generator_Phis", &Generator_Phis, &b_Generator_Phis);
   fChain->SetBranchAddress("Generator_Pts", &Generator_Pts, &b_Generator_Pts);
   fChain->SetBranchAddress("Prop_HO_Front_Etas", &Prop_HO_Front_Etas, &b_Prop_HO_Front_Etas);
   fChain->SetBranchAddress("Prop_HO_Front_Phis", &Prop_HO_Front_Phis, &b_Prop_HO_Front_Phis);
   fChain->SetBranchAddress("Prop_HO_Front_Xs", &Prop_HO_Front_Xs, &b_Prop_HO_Front_Xs);
   fChain->SetBranchAddress("Prop_HO_Front_Ys", &Prop_HO_Front_Ys, &b_Prop_HO_Front_Ys);
   fChain->SetBranchAddress("Prop_HO_Front_Zs", &Prop_HO_Front_Zs, &b_Prop_HO_Front_Zs);
   fChain->SetBranchAddress("Prop_HO_Back_Etas", &Prop_HO_Back_Etas, &b_Prop_HO_Back_Etas);
   fChain->SetBranchAddress("Prop_HO_Back_Phis", &Prop_HO_Back_Phis, &b_Prop_HO_Back_Phis);
   fChain->SetBranchAddress("Prop_HO_Back_Xs", &Prop_HO_Back_Xs, &b_Prop_HO_Back_Xs);
   fChain->SetBranchAddress("Prop_HO_Back_Ys", &Prop_HO_Back_Ys, &b_Prop_HO_Back_Ys);
   fChain->SetBranchAddress("Prop_HO_Back_Zs", &Prop_HO_Back_Zs, &b_Prop_HO_Back_Zs);
   fChain->SetBranchAddress("Prop_HO_FrontBackSame", &Prop_HO_FrontBackSame, &b_Prop_HO_FrontBackSame);
   fChain->SetBranchAddress("HOReco_Etas", &HOReco_Etas, &b_HOReco_Etas);
   fChain->SetBranchAddress("HOReco_Phis", &HOReco_Phis, &b_HOReco_Phis);
   fChain->SetBranchAddress("HOReco_Energies", &HOReco_Energies, &b_HOReco_Energies);
   fChain->SetBranchAddress("StandAlone_Etas", &StandAlone_Etas, &b_StandAlone_Etas);
   fChain->SetBranchAddress("StandAlone_Phis", &StandAlone_Phis, &b_StandAlone_Phis);
   fChain->SetBranchAddress("StandAlone_Pts", &StandAlone_Pts, &b_StandAlone_Pts);
   fChain->SetBranchAddress("GlobalMuons_Etas", &GlobalMuons_Etas, &b_GlobalMuons_Etas);
   fChain->SetBranchAddress("GlobalMuons_Phis", &GlobalMuons_Phis, &b_GlobalMuons_Phis);
   fChain->SetBranchAddress("GlobalMuons_Pts", &GlobalMuons_Pts, &b_GlobalMuons_Pts);
}

Bool_t HOMuon_TreeLoop_WithMuonReco_Plotter::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef HOMuon_TreeLoop_WithMuonReco_Plotter_cxx
