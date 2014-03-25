//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Dec 11 13:59:39 2013 by ROOT version 5.34/05
// from TTree ho_muon_tree/Generator, Propagator, and Trigger Data
// found on file: ../RootFiles/L1ITMuonSingleMu_14Pt_caloInspector_New.root
//////////////////////////////////////////////////////////

#ifndef HOMuon_TreeLoop_Efficiency_h
#define HOMuon_TreeLoop_Efficiency_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <string>
#include <TH1F.h>
#include <TH2F.h>
#include <TGraph.h>

// Header file for the classes stored in the TTree if any.
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class HOMuon_TreeLoop_Efficiency : public TSelector {
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

   HOMuon_TreeLoop_Efficiency(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~HOMuon_TreeLoop_Efficiency() { }
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

   //My Stuff
   double WrapCheck(double phi1, double phi2);
   bool TriggerMatch(int i_part, int i_rcut, int i_tcut);
   bool IsAccepted(int i_trig, int i_tcut);
   bool IsFake(int i_trig, int i_rcut);
   double IndexToValue(int i, char cut_type);
   void PrintTables();
   void GraphRockCurve(int i_rcut);
   void NormalizeFakeCount();
   void PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, 
		      double xMin, double xMax,double yMin, double yMax,int num_xbinmerge, 
		      int num_ybinmerge, const char * type);

   //Histograms
   TH2F * hist_efficiency_RT;
   TH2F *  hist_purity_RT;
   TH2F * hist_normfakerate_RT;

   //Graphs
   TGraph * graph_rock;

   
   ClassDef(HOMuon_TreeLoop_Efficiency,0);
};

#endif

#ifdef HOMuon_TreeLoop_Efficiency_cxx
void HOMuon_TreeLoop_Efficiency::Init(TTree *tree)
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

Bool_t HOMuon_TreeLoop_Efficiency::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef HOMuon_TreeLoop_Efficiency_cxx
