#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>


void HOMuon_Geometry_Plotter(const char *file = 
		    "/home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/RootFiles/L1ITMuonSingleMu_14Pt_FrontBackHO_caloInspector_New.root",
		    const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree") {
  TFile* inFile = TFile::Open(file);
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(tree_loc);
  cout<<T << endl;
  //gRoot->ProcessLine(".L HOMuon_TreeLoop_Plotter.C+");


  /*
   *Make X-Y Plots
   */
  TCanvas *c = new TCanvas("XYGeometry","XYGeometry",500,500);
  gStyle->SetMarkerColor(6);
  gStyle->SetOptStat(1111111);

  //Just in wheel 0
  T->Draw("Prop_HO_Front_Ys:Prop_HO_Front_Xs",
	  "Prop_HO_Front_Etas<-0.3075 || Prop_HO_Front_Etas>0.3075");
  TH2F *htemp = (TH2F*)gPad->GetPrimitive("htemp");
  
  htemp->GetXaxis()->SetTitle("X-axis (cm)");
  htemp->GetXaxis()->SetTitleFont(42);
  htemp->GetYaxis()->SetTitleSize(0.05);
  htemp->GetYaxis()->SetTitleOffset(1.0);
  
  htemp->GetYaxis()->SetTitle("Y-axis (cm)");
  htemp->GetYaxis()->SetTitleFont(42);
  htemp->GetYaxis()->SetTitleSize(0.05);
  htemp->GetYaxis()->SetTitleOffset(1.0);
  

  //TGraph->SetMarkerSize(2);
  

  c->SetFillColor(0);

  //htemp->Draw();
 
  cout << "working" << endl;
};

  
