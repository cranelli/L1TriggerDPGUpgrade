#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>

using namespace std;

void plotCreator(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		 double xMin, double xMax,int num_binmerge=5,
		 bool isLogy=false);


void plotCreatorOverlap(TFile* file, vector<char*> & names,
			const char* xAxis, const char* yAxis,
			double xMin, double xMax, int num_binmerge=5,
			bool isLogy=false);


void plotCreator2D(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		   double xMin, double xMax,
		   double yMin, double yMax,
		   int num_xbinmerge=5, int num_ybinmerge=5);

void caloInspectorPlotter(const char * file = 
			  "../RootFiles/L1ITMuPM_caloInspector_New.root") {

  TFile * inFile = TFile::Open(file);

  std::cout << inFile << std::endl;

  /*
  
  plotCreator(inFile,"L1TMuonCaloInsp/eta_truth_prop_ho-SiPMSector",
	      "#eta PropwSiPM","Muons",
	      0.2,1.3,
	      2);

  plotCreator(inFile,"L1TMuonCaloInsp/deta_PropwSiPM-HORecowSiPM_EnergySelect_LooseAssoc",
	      "#Delta#eta","Counts",
	      -0.2,0.2,
	      2);
  */

  /*
   * Same Energy, Eta-Phi, and Overlap plots, but now for loosely associated muons.  1x1 etaxphi square.
   */
  
  /*
  plotCreator2D(inFile,"L1TMuonCaloInsp/detaphi_PropwSiPM-HORecowSiPM_EnergySelect_LooseAssoc",
	      "#Delta#eta","#Delta#phi",
		-0.2, 0.2, 
		-0.2, 0.2,
		1,1);
      
  plotCreator2D(inFile,"L1TMuonCaloInsp/detaphi_PropwSiPM-HORecowSiPM_EnergySelect_LooseNoAssoc",
	      "#Delta#eta","#Delta#phi",
		-0.4, 0.4, 
		-0.4, 0.4,
		2,2);

  plotCreator(inFile, "L1TMuonCaloInsp/Energy_Ho_RecowSiPM_EnergySelection_LooseAssocProp",
	      "Energy LooseAssoc (Energy Cut)", "Events",
	      -0.5, 3.0, 1, true);

  plotCreator(inFile, "L1TMuonCaloInsp/Energy_Ho_RecowSiPM_EnergySelection_LooseNoAssocProp",
	      "Energy LoosNoAssoc (Energy Cut)", "Events",
	      -0.5, 3.0, 1, true);

  */

  /*

  //Delta Eta RPC Generator
  plotCreator(inFile,"L1TMuonCaloInsp/deta_truth-rpc",
	      "#Delta#eta truth-RPC","Muons",
	      -0.2,0.2);
  //Delta Phi RPC Generator
  plotCreator(inFile,"L1TMuonCaloInsp/dphi_truth-rpc",
	      "#Delta#phi truth-RPC","Muons",
	      -0.2,0.2);
  //Eta Generator
  plotCreator(inFile,"L1TMuonCaloInsp/eta_truth",
	      "#eta truth","Muons",
	      -1.3,1.3);
  //Phi Generator
  plotCreator(inFile,"L1TMuonCaloInsp/phi_truth",
	      "#phi truth","Muons",
	      -3.14,3.14);
  //Pt Generator
  plotCreator(inFile,"L1TMuonCaloInsp/pt_truth",
	      "Pt truth","Muons",
	      16.0,200.0);
  //Energy HO_Rec
  plotCreator(inFile, "L1TMuonCaloInsp/Energy_Ho_Reco", 
	      "Energy HO", "Counts",
	      0.0, 50.0);

  //Delta Phi v Pt RPC Generator
  plotCreator2D(inFile, "L1TMuonCaloInsp/dphipt_truth-rpc",
	      "P_{t}", "#Delta #phi Truth-RPC",
	      0.0, 200.0,
	      -0.25, 0.25);
  //Delta Phi v Pt RPC Generator Layer 1
  plotCreator2D(inFile, "L1TMuonCaloInsp/dphipt_truth-rpc_Layer1",
		"P_{t}", "#Delta #phi Truth-RPC",
		0.0, 200.0,
		-0.25, 0.25);
  //Delta Phi RPC Propagated Generator
  plotCreator(inFile,"L1TMuonCaloInsp/dphi_prop-truth-rpc",
	      "#Delta#phi Propagated Truth-RPC","Muons",
	      -0.02,0.02,1);
  //Delta Phi RPC Propagated Generator  plotCreator(inFile,"L1TMuonCaloInsp/deta_prop-truth-rpc",
	      "#Delta#eta Propagated Truth-RPC","Muons",
	      -0.2,0.2);  
  */
  
  //Issue with binning for these, 
  //look like 2 phis have been grouped together??
  //Phi Eta Map for HO Reco with SiPM

  /*
  plotCreator2D(inFile,"L1TMuonCaloInsp/etaphi_HORecoWithSiPM",
	      "#eta","#phi",
		-1.4, 1.4, 
		-3.14, 3.14
		3,5);
  plotCreator2D(inFile, "L1TMuonCaloInsp/ietaiphi_HORecoWithSiPM",
		"ieta", "iphi",
		-17, 17,
		0, 72
		3,5);
  */
  /*
  //Energy Deposited in HO SiPM
    plotCreator(inFile,"L1TMuonCaloInsp/Energy_Ho_RecowSiPM",
	      "Energy Deposited in HO","Events",
	      -1.0,4.0,1,true);
  //Energy Deposited in HO SiPM afer Selection Cut
  plotCreator(inFile,"L1TMuonCaloInsp/Energy_Ho_RecowSiPM_EnergySelection",
	      "Energy Deposited in SiPM HO","Events",
	      -1.0,15.0,1);
  
  */

  //Delta Eta HO_SiPM Generator
  /*
  plotCreator(inFile,"L1TMuonCaloInsp/deta_proptruth-HORecowSiPM",
	      "#Delta#eta Prop Truth - HO_SiPM","Events",
	      -0.2,0.2,3);
  //Delta Phi HO_SiPM Generator
  plotCreator(inFile,"L1TMuonCaloInsp/dphi_proptruth-HORecowSiPM",
	      "#Delta#phi Prop Truth- HO_SiPM","Events",
	      -0.2,0.2,4);
  //Delta Eta HO_SiPM w Energy Cut Generator
  plotCreator(inFile,"L1TMuonCaloInsp/deta_proptruth-HORecowSiPM_EnergySelection",
	      "#Delta#eta Prop Truth - HO_SiPM_EnergyCut","Events",
	      -0.2,0.2,3);
  //Delta Phi HO_SiPM w Energy Cut Generator
  plotCreator(inFile,"L1TMuonCaloInsp/dphi_proptruth-HORecowSiPM_EnergySelection",
	      "#Delta#phi Prop Truth - HO_SiPM_EnergyCut","Events",
	      -0.2,0.2,4);
  plotCreator2D(inFile,"L1TMuonCaloInsp/detaphi_proptruth-HORecowSiPM_EnergySelection",
	      "#Delta#eta","#Delta#phi",
		-0.2, 0.2, 
		-0.2, 0.2
		3,4);
  
  */

  /*
  //Associated Truth Paritlces (No Energy Selection Cut)
  plotCreator(inFile, "L1TMuonCaloInsp/Energy_HO_RecowSiPM_AssociatedTruth",
	      "Energy Associated SiPM HO", "Events",
	      -0.5, 5.0, 1, false);

  
  // No Associated Truth Particles (No Energy Selection Cut)
   plotCreator(inFile, "L1TMuonCaloInsp/Energy_HO_RecowSiPM_NoAssociatedTruth",
	      "Energy No Associated SiPM HO", "Events",
	       -0.5, 5.0, 1, true);
  

         
  vector<char*> names;
  names.push_back("L1TMuonCaloInsp/Energy_HO_RecowSiPM_NoAssociatedTruth");
  names.push_back("L1TMuonCaloInsp/Energy_HO_RecowSiPM_AssociatedTruth");
  plotCreatorOverlap(inFile, names,
		     "Energy HO GeV", "Counts",
		     0.4, 2.0, 
		     1,false);
  */
  
  /*
  // Delta Eta Delta Phi plots for associated and unassociated SiPM events after the
  // energy selction cut has been applied.

  
  
  plotCreator2D(inFile,"L1TMuonCaloInsp/detaphi_proptruth-HORecowSiPM_EnergySelection_AssociatedTruth",
	      "#Delta#eta","#Delta#phi",
		-0.2, 0.2, 
		-0.2, 0.2,
		1,1);
  */
  plotCreator2D(inFile,"L1TMuonCaloInsp/detaphi_PropwSiPM-HORecowSiPM_EnergySelect_LooseNoAssoc",
	      "#Delta#eta","#Delta#phi",
		-1.3, 1.3, 
		-3.14, 3.14,
		2,2);
  
  

  /*
  plotCreator2D(inFile,"L1TMuonCaloInsp/ietaiphi_HORecoEnergySelection",
	      "ieta","iphi",
		-15, 15, 
		0, 72,
		1,1);

  plotCreator2D(inFile,"L1TMuonCaloInsp/etaphi_HORecoEnergySelection",
	      "eta","phi",
		-1.3, 1.3, 
		-3.14, 3.14,
		1,1);
  
  */

  // Eta distribution, for just propoated muons going through SiPM sectors

}


void plotCreator(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		 double xMin, double xMax, int num_binmerge, bool isLogy) {

  std::cout << name << std::endl;


  TH1F* hist = (TH1F*)file->Get(name);

  std::cout << hist << std::endl;

  hist->Sumw2(); // make sure errors are correct before rebinning
  hist->SetTitle(""); // empty the title
  hist->Rebin(num_binmerge);
  hist->GetXaxis()->SetRangeUser(xMin,xMax);

  hist->GetXaxis()->SetTitle(xAxis);
  hist->GetXaxis()->SetTitleFont(42);
  hist->GetXaxis()->SetTitleSize(0.05);
  hist->GetXaxis()->SetTitleOffset(0.9);

  hist->GetYaxis()->SetTitle(yAxis);
  hist->GetYaxis()->SetTitleFont(42);
  hist->GetYaxis()->SetTitleSize(0.05);
  hist->GetYaxis()->SetTitleOffset(1.0);

  hist->SetLineWidth(2);
  hist->SetLineColor(kBlue);
  
  TCanvas *c = new TCanvas(Form("c_%s",name),Form("c_%s",name),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  //if(isLogy) c->Setlogy;
  hist->Draw("e0,hist");
  //c->Print(Form("p_%s.png",name));
  //c->Print(Form("p_%s.eps",name));
  //c->Print(Form("p_%s.pdf",name));
  return;

}

void plotCreatorOverlap(TFile* file, vector<char*> & names,
			const char* xAxis, const char* yAxis,
			double xMin, double xMax, int num_binmerge,
			bool isLogy){

  // All the histograms named in the vector names, are plotted on the same canvas.
  TCanvas *c = new TCanvas(Form("c_overlap%s",names[0]),Form("c_overlap%s",names[0]),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  
  for(vector<char*>::iterator it = names.begin(); it != names.end(); ++it){
    TH1F* hist_overlap = (TH1F*)file->Get(*it);
    cout << *it << endl;
    std::cout << hist_overlap << std::endl;
    
    if(it == names.begin()){
      hist_overlap->Sumw2(); // make sure errors are correct before rebinning
      hist_overlap->SetTitle(""); // empty the title
      hist_overlap->Rebin(num_binmerge);
      hist_overlap->GetXaxis()->SetRangeUser(xMin,xMax);

      hist_overlap->GetXaxis()->SetTitle(xAxis);
      hist_overlap->GetXaxis()->SetTitleFont(42);
      hist_overlap->GetXaxis()->SetTitleSize(0.05);
      hist_overlap->GetXaxis()->SetTitleOffset(0.9);
      
      hist_overlap->GetYaxis()->SetTitle(yAxis);
      hist_overlap->GetYaxis()->SetTitleFont(42);
      hist_overlap->GetYaxis()->SetTitleSize(0.05);
      hist_overlap->GetYaxis()->SetTitleOffset(1.0);
      
      hist_overlap->SetLineWidth(2);
      hist_overlap->SetLineColor(kBlue);

      hist_overlap->Draw("e0,hist");
    }
    else {
      hist_overlap->SetLineColor(kRed);
      hist_overlap->Draw("eo,hist,same");
    }
    //if(isLogy) c->Setlogy;
    //hist_overlap->Draw("e0,hist");
    //c->Print(Form("p_%s.png",name));
    //c->Print(Form("p_%s.eps",name));
    //c->Print(Form("p_%s.pdf",name));
    
  }
  return;
}


void plotCreator2D(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		   double xMin, double xMax,
		   double yMin, double yMax, 
		   int num_xbinmerge, int num_ybinmerge) {

  std::cout << name << std::endl;


  TH2F* hist = (TH2F*)file->Get(name);
  //gr = new TGraph();

  hist->RebinX(num_xbinmerge);
  hist->RebinY(num_ybinmerge);
  
  std::cout << hist << std::endl;

  hist->Sumw2(); // make sure errors are correct before rebinning
  hist->SetTitle(""); // empty the title
  
  hist->GetXaxis()->SetRangeUser(xMin,xMax);
  hist->GetYaxis()->SetRangeUser(yMin,yMax);

  hist->GetXaxis()->SetTitle(xAxis);
  hist->GetXaxis()->SetTitleFont(42);
  hist->GetXaxis()->SetTitleSize(0.05);
  hist->GetXaxis()->SetTitleOffset(0.9);

  hist->GetYaxis()->SetTitle(yAxis);
  hist->GetYaxis()->SetTitleFont(42);
  hist->GetYaxis()->SetTitleSize(0.05);
  hist->GetYaxis()->SetTitleOffset(1.0);

  //hist->SetLineWidth(2);
  hist->SetMarkerColor(kRed);
  hist->SetMarkerSize(4);
  //hist->SetMarkerStyle(21);

  //Remove Stat Box
  gStyle->SetOptStat(0);
  
  TCanvas *c = new TCanvas(Form("c_%s",name),Form("c_%s",name),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  hist->Draw("CONT0");
  //c->Print(Form("p_%s.png",name));
  //c->Print(Form("p_%s.eps",name));
  //c->Print(Form("p_%s.pdf",name));
  return;

}
