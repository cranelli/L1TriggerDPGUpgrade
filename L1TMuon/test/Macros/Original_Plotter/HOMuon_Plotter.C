#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>
#include "HOMuon_TreeLoop_Plotter.h"

void HOMuon_Plotter(const char *file = 
		    "/home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/RootFiles/L1ITMuonSingleMu_14Pt_R412_caloInspector_New.root",
		    const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree") {
  TFile* inFile = TFile::Open(file);
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(tree_loc);
  cout<<T << endl;
  //gRoot->ProcessLine(".L HOMuon_TreeLoop_Plotter.C+");
  T->Process("HOMuon_TreeLoop_Plotter.C+");
  cout << "working" << endl;
};

/*
  //const char * name = "L1TMuonCaloInsp/ho_muon_tree";
  //TCanvas *c = new TCanvas(Form("c_%s",name),Form("c_%s",name),600,500);
  
  //Float_t Generator;  //These are the addresses of the branches
  

  //T->Draw("Generator_Phi");
  
  //T->Draw("Trigger_Energies","Propagator_IsaSiPM==1" );
  
  //Plot of Eta and Phi Positions of SiPM Sectors.
  //T->Draw("Trigger_Phis:Trigger_Etas", "Trigger_IsaSiPMs==1","box");
  
  //Plots of Energy for IsaSiPM (Trigger & Propagator) on a log scale.
  //c->SetLogy();
  //T->Draw("Trigger_Energies","Trigger_IsaSiPMs==1 && Propagator_IsaSiPM==1");
  
  //Plot of Delta Eta
  //T->Draw("Trigger_Etas", "Trigger_IsaSiPMs==1 && Trigger_Energies > 0.1");
  // T->Draw("Propagator_Eta", "Propagator_IsaSiPM==1");
  T->Draw("Trigger_Etas-Propagator_Eta","Trigger_IsaSiPMs==1 && Propagator_IsaSiPM==1 && Trigger_Energies > 0.1");
  
  //T->Draw("Generator_Struct.phi");
  //T->Draw("Generator_Struct.phi", "Generator_Struct.eta > 0");
  //T->SetBranchAddress("Generator",&Generator);
};
*/
  
