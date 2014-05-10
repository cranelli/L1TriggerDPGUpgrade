#define HOMuon_TreeLoop_WithMuonReco_Plotter_cxx
// The class definition in HOMuon_TreeLoop_WithMuonReco_Plotter.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("HOMuon_TreeLoop_WithMuonReco_Plotter.C")
// Root > T->Process("HOMuon_TreeLoop_WithMuonReco_Plotter.C","some options")
// Root > T->Process("HOMuon_TreeLoop_WithMuonReco_Plotter.C+")
//

#include "HOMuon_TreeLoop_WithMuonReco_Plotter.h"
#include <TH2.h>
#include <TStyle.h>
#include <TH1F.h>
#include <TCanvas.h>
#include <sstream>
#include <string>
#include <cmath>
#include "iostream"
#include <map>
#include <set>

//Keys (Single Keys can refer to multiple histograms)                                           

#define all_key "All"


void HOMuon_TreeLoop_WithMuonReco_Plotter::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void HOMuon_TreeLoop_WithMuonReco_Plotter::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t HOMuon_TreeLoop_WithMuonReco_Plotter::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either HOMuon_TreeLoop_WithMuonReco_Plotter::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.



  fChain->GetEntry(entry);

  /*                                                                                             
   * Muon Reco Histograms                                                                        
   */


  /*
   *Note there is always a Generator Object for each event with a StandAlone object, 
   * but not visa versa.
   */

  for(unsigned int i=0; i < StandAlone_Etas->size(); i++ ){
    FillDeltaPtHistograms(Generator_Pts->at(i),StandAlone_Pts->at(i),all_key);
  
    cout << entry << endl;
  }


   return kTRUE;
}

void HOMuon_TreeLoop_WithMuonReco_Plotter::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void HOMuon_TreeLoop_WithMuonReco_Plotter::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

  TFile *outfile= TFile::Open("/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/t\
est/Plots/WithMuonReco_Plots/out_WithMuonReco_14_Muon.root","RECREATE");

  for(it = _h1DeltaPt.begin(); it!=_h1DeltaPt.end(); ++it){
    //cout << it->first << endl;                                                                    
    it->second->Write();
    PlotCreator(_h1DeltaPt[it->first], Form("DeltaPt_%s", it->first.c_str()),
		"Delta Pt GeV", "Counts",-10.0, 10.0, 3, true);
  }

  for(it = _h1DeltaInvPt.begin(); it!=_h1DeltaInvPt.end(); ++it){
    //cout << it->first << endl;                                                                    
    it->second->Write();
    PlotCreator(_h1DeltaInvPt[it->first], Form("DeltaInvPt_%s", it->first.c_str()),
		"Delta Pt GeV", "Counts",-10.0, 10.0, 3, true);
  }

  outfile->Close();

}


void HOMuon_TreeLoop_WithMuonReco_Plotter::FillDeltaPtHistograms(float pt1, float pt2, 
								 std::string key){
  //Delta Pt Histograms Fill                                                                                               

  if(!_h1DeltaPt.count(key)){
    _h1DeltaPt[key] = new TH1F(Form("DeltaPt_%s",key.c_str()), 
			       Form("DeltaPt %s",key.c_str()),	
			       200, -15.0, 15.0);
  }
  _h1DeltaPt[key]->Fill(pt1-pt2);

  //Delta Inv Pt Histograms Fill   
                                                                                                
    if(!_h1DeltaInvPt.count(key)){
      _h1DeltaInvPt[key] = new TH1F(Form("DeltaInvPt_%s",key.c_str()), 
				    Form("DeltaInvPt %s",key.c_str()), 
				    200, -1.0, 1.0);
    }
    _h1DeltaInvPt[key]->Fill(1.0/pt1 - 1.0/pt2);
}


void HOMuon_TreeLoop_WithMuonReco_Plotter::PlotCreator(TH1F * hist, const char* title, 
						       const char * xAxis, const char * yAxis,
						       double xMin, double xMax, 
						       int num_binmerge, bool isLogy){

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

  //TCanvas *c = new TCanvas(Form("c_%s",title),Form("c_%s",title),600,500);    
  std::stringstream canvas_name;
  canvas_name <<"c_" << title;
  TCanvas *c = new TCanvas(canvas_name.str().c_str(),
			   canvas_name.str().c_str(),600,500);

  c->SetFillColor(0);
  c->SetBorderSize(0);
  c->cd();
  c->SetLogy(isLogy);
  hist->Draw("e0,hist");
  //hist->Draw("e0,hist");                                                      

  // std::cout << Form("../Plots/SwitchtoTree_Plots/%s.png",out_name) << std::endl;                                                                            
    c->SaveAs(Form("/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/test/Plots/WithMuonReco_Plots/%s.png",title));
}

void HOMuon_TreeLoop_WithMuonReco_Plotter::PlotCreator2D(TH2F* hist, const char* title, 
							 const char* xAxis, const char* yAxis, 
							 double xMin, double xMax,
							 double yMin, double yMax, 
							 int num_xbinmerge, int num_ybinmerge, 
							 const char * type){

  //gr = new TGraph();                                                          
  hist->RebinX(num_xbinmerge);
  hist->RebinY(num_ybinmerge);

  //std::cout << hist << std::endl;                                             

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
  //gStyle->SetOptStat(0);     

  TCanvas *c = new TCanvas(Form("c_%s",title),Form("c_%s",title),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  hist->Draw(type);
  c->SaveAs(Form("/home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/Plots/WithMuonReco_Plots/%s.png",title));
  //c->Print(Form("p_%s.png",name));                                            
  //c->Print(Form("p_%s.eps",name));                                            
  //c->Print(Form("p_%s.pdf",name));                                            
  return;
}

double HOMuon_TreeLoop_WithMuonReco_Plotter::WrapCheck(double phi1, 
						       double phi2){
  //double M_PI = (double) 3.14;                                                
  double delta_phi = phi1 - phi2;
  if(delta_phi < -M_PI){
    return (2*M_PI + delta_phi);
  }
  if(delta_phi > M_PI){
    return (delta_phi - 2*M_PI);
  }
  return delta_phi;
}
