//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Nov 27 16:21:26 2013 by ROOT version 5.34/05
// from TTree ho_muon_tree/Generator, Propagator, and Trigger Data
// found on file: ../L1ITMuonSingleMu_14Pt_caloInspector_New.root
//////////////////////////////////////////////////////////

#ifndef HOMuon_TreeLoop_AllSiPM_Plotter_h
#define HOMuon_TreeLoop_AllSiPM_Plotter_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TH1F.h>
#include <TH2F.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class HOMuon_TreeLoop_AllSiPM_Plotter : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   vector<int>     *Generator_pdgId;
   vector<float>   *Generator_Etas;
   vector<float>   *Generator_Phis;
   vector<float>   *Generator_Pts;
   vector<float>   *Propagator_Etas;
   vector<float>   *Propagator_Phis;
   vector<bool>    *Propagator_IsaSiPMs;
   vector<float>   *Trigger_Etas;
   vector<float>   *Trigger_Phis;
   vector<float>   *Trigger_Energies;
   vector<bool>    *Trigger_IsaSiPMs;

   // List of branches
   TBranch        *b_Generator_pdgId;   //!
   TBranch        *b_Generator_Etas;   //!
   TBranch        *b_Generator_Phis;   //!
   TBranch        *b_Generator_Pts;   //!
   TBranch        *b_Propagator_Etas;   //!
   TBranch        *b_Propagator_Phis;   //!
   TBranch        *b_Propagator_IsaSiPMs;   //!
   TBranch        *b_Trigger_Etas;   //!
   TBranch        *b_Trigger_Phis;   //!
   TBranch        *b_Trigger_Energies;   //!
   TBranch        *b_Trigger_IsaSiPMs;   //!

   HOMuon_TreeLoop_AllSiPM_Plotter(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~HOMuon_TreeLoop_AllSiPM_Plotter() { }
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

        
     // My stuff
   
   //Hold the Histograms of the same type in Maps

   std::map<std::string,TH1F*> _h1Energy;
   std::map<std::string,TH2F*> _h2DeltaEtaDeltaPhi;
   //std::map<std::string,TH2F*> _h2Map; 

   void FillEnergyHistograms(float energy, std::string key);
   void FillEtaPhiHistograms(float eta1, float eta2, float phi1, float phi2, std::string key);

   TH1F * hist_SiPM_energy;
   TH1F * hist_HPD_energy;
   void SiPM_energy_Fill();
   TH1F * hist_wheelzero_energy;
   void WheelZero_energy_Fill();
   TH2F * hist_PropSiPM_Map;
   void PropSiPM_Map_Fill(unsigned int i);
   TH2F * hist_TriggerSiPM_Map;
   TH2F * hist_TriggerSiPMT_Map;
   TH2F * hist_PropTriggerSiPMT_Map;
   TH2F * hist_GeneratorTriggerSiPMT_Map;
   void TriggerSiPM_Map_Fill();
   TH1F * hist_PropSiPMT_energy;
   void PropSiPMT_energy_Fill(unsigned int i);
   TH1F * hist_SiPMPropTriggerT_deltaEta;
   TH1F * hist_SiPMPropTriggerT_deltaPhi;
   TH2F * hist_SiPMPropTriggerT_deltaEtaPhi;
   TH2F * hist_PropSiPMTriggerT_deltaEtaPhi;
   void PropTrigger_deltaEtadeltaPhi_Fill(unsigned int i);
   TH1F * hist_TightFit_energy;
   TH1F * hist_NotTightFit_energy;
   TH1F * hist_TightFitT_energy;
   TH1F * hist_NotTightFitT_energy;
   TH2F * hist_NotTightFit_deltaEtaPhi;
   TH2F * hist_NotTightFitT_deltaEtaPhi;
   void TightFitandNot_Fill(unsigned int i, double TightCutWidth);
   TH1F * hist_LooseFit_energy;
   TH1F * hist_NotLooseFit_energy;
   TH1F * hist_LooseFitT_energy;
   TH1F * hist_NotLooseFitT_energy;
   TH2F * hist_NotLooseFit_deltaEtaPhi;
   TH2F * hist_NotLooseFitT_deltaEtaPhi;
   void LooseFitandNot_Fill(unsigned int i, double LooseCutWidth);
   // void NotTightFit_Fill();
       
     void PlotCreator(TH1F * hist,const char * title, const char * xAxis, const char * yAxis,double xMin, double xMax, int num_binmerge=1, bool isLogy=false);
     void PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, double xMin, double xMax,double yMin, double yMax,int num_xbinmerge=1, int num_ybinmerge=1, const char * type="box");
     double WrapCheck(double phi1, double phi2);
     
     
   ClassDef(HOMuon_TreeLoop_AllSiPM_Plotter,0);
};

#endif

#ifdef HOMuon_TreeLoop_AllSiPM_Plotter_cxx
void HOMuon_TreeLoop_AllSiPM_Plotter::Init(TTree *tree)
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
   Propagator_Etas = 0;
   Propagator_Phis = 0;
   Propagator_IsaSiPMs = 0;
   Trigger_Etas = 0;
   Trigger_Phis = 0;
   Trigger_Energies = 0;
   Trigger_IsaSiPMs = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Generator_pdgId", &Generator_pdgId, &b_Generator_pdgId);
   fChain->SetBranchAddress("Generator_Etas", &Generator_Etas, &b_Generator_Etas);
   fChain->SetBranchAddress("Generator_Phis", &Generator_Phis, &b_Generator_Phis);
   fChain->SetBranchAddress("Generator_Pts", &Generator_Pts, &b_Generator_Pts);
   fChain->SetBranchAddress("Propagator_Etas", &Propagator_Etas, &b_Propagator_Etas);
   fChain->SetBranchAddress("Propagator_Phis", &Propagator_Phis, &b_Propagator_Phis);
   fChain->SetBranchAddress("Propagator_IsaSiPMs", &Propagator_IsaSiPMs, &b_Propagator_IsaSiPMs);
   fChain->SetBranchAddress("Trigger_Etas", &Trigger_Etas, &b_Trigger_Etas);
   fChain->SetBranchAddress("Trigger_Phis", &Trigger_Phis, &b_Trigger_Phis);
   fChain->SetBranchAddress("Trigger_Energies", &Trigger_Energies, &b_Trigger_Energies);
   fChain->SetBranchAddress("Trigger_IsaSiPMs", &Trigger_IsaSiPMs, &b_Trigger_IsaSiPMs);
}

Bool_t HOMuon_TreeLoop_AllSiPM_Plotter::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef HOMuon_TreeLoop_AllSiPM_Plotter_cxx
