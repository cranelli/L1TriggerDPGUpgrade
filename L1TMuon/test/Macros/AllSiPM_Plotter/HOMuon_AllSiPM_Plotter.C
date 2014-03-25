#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>
#include "HOMuon_TreeLoop_AllSiPM_Plotter.h"


void HOMuon_AllSiPM_Plotter(const char *file = 
			    "../RootFiles/L1ITMuonSingleMu_14Pt_Plane_caloInspector_New.root",
			    const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree") {
  TFile* inFile = TFile::Open(file);
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(tree_loc);
  cout<<T << endl;
  //gRoot->ProcessLine(".L HOMuon_TreeLoop_AllSiPM_Plotter.C+");
  T->Process("HOMuon_TreeLoop_AllSiPM_Plotter.C+");
  cout << "working" << endl;
};
  
