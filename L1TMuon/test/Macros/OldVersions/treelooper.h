//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Oct 31 16:53:16 2013 by ROOT version 5.34/05
// from TTree ho_muon_tree/Generator, Propagator, and Trigger Data
// found on file: L1ITMuonPM_14Pt_caloInspector_New.root
//////////////////////////////////////////////////////////

#ifndef treelooper_h
#define treelooper_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TH1F.h>
#include <TH2F.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class treelooper : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Float_t         Generator_Phi;
   Float_t         Generator_Eta;
   Float_t         Generator_Pt;
   Float_t         Propagator_Phi;
   Float_t         Propagator_Eta;
   Bool_t          Propagator_IsaSiPM;
   vector<float>   *Trigger_Etas;
   vector<float>   *Trigger_Phis;
   vector<float>   *Trigger_Energies;
   vector<bool>    *Trigger_IsaSiPMs;

   // List of branches
   TBranch        *b_Generator_Phi;   //!
   TBranch        *b_Generator_Eta;   //!
   TBranch        *b_Generator_Pt;   //!
   TBranch        *b_Propagator_Phi;   //!
   TBranch        *b_Propagator_Eta;   //!
   TBranch        *b_PropagatorHO_IsaSiPM;   //!
   TBranch        *b_Trigger_Etas;   //!
   TBranch        *b_Trigger_Phis;   //!
   TBranch        *b_Trigger_Energies;   //!
   TBranch        *b_Trigger_IsaSiPMs;   //!

   treelooper(TTree * /*tree*/ =0) : fChain(0) { }
     virtual ~treelooper() { }
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

     // Our stuff
     TH1F * hist_energy;
     TH2F * hist_map;

     bool IsaFiducial(double eta, double phi);
     
     
   ClassDef(treelooper,0);
};

#endif

#ifdef treelooper_cxx
void treelooper::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Trigger_Etas = 0;
   Trigger_Phis = 0;
   Trigger_Energies = 0;
   Trigger_IsaSiPMs = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Generator_Phi", &Generator_Phi, &b_Generator_Phi);
   fChain->SetBranchAddress("Generator_Eta", &Generator_Eta, &b_Generator_Eta);
   fChain->SetBranchAddress("Generator_Pt", &Generator_Pt, &b_Generator_Pt);
   fChain->SetBranchAddress("Propagator_Phi", &Propagator_Phi, &b_Propagator_Phi);
   fChain->SetBranchAddress("Propagator_Eta", &Propagator_Eta, &b_Propagator_Eta);
   fChain->SetBranchAddress("Propagator_IsaSiPM", &Propagator_IsaSiPM, &b_PropagatorHO_IsaSiPM);
   fChain->SetBranchAddress("Trigger_Etas", &Trigger_Etas, &b_Trigger_Etas);
   fChain->SetBranchAddress("Trigger_Phis", &Trigger_Phis, &b_Trigger_Phis);
   fChain->SetBranchAddress("Trigger_Energies", &Trigger_Energies, &b_Trigger_Energies);
   fChain->SetBranchAddress("Trigger_IsaSiPMs", &Trigger_IsaSiPMs, &b_Trigger_IsaSiPMs);
}

Bool_t treelooper::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef treelooper_cxx
