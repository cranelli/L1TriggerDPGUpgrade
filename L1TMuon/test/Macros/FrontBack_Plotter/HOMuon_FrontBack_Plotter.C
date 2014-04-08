/*
 * Created  by Christopher Anelli 3.10.2014
 * Continue using an All SiPM Detector.
 * Back an Front Surfaces set by the caloGeometry
 * are now propagated to.
 */

#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>
//#include "HOMuon_TreeLoop_FrontBack_Plotter.h"


void HOMuon_FrontBack_Plotter(const char *file =
			      "/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/test/RootFiles/L1ITMuonSingleMu_14Pt_PostLS1_caloInspector.root",
			      const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree") {
  TFile* inFile = TFile::Open(file);
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(tree_loc);
  cout<<T << endl;
  //gRoot->ProcessLine(".L HOMuon_TreeLoop_FrontBack_Plotter.C+");
  T->Process("HOMuon_TreeLoop_FrontBack_Plotter.C+");
  cout << "working" << endl;
};
  
