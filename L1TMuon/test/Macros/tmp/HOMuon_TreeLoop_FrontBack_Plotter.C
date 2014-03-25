#define HOMuon_TreeLoop_FrontBack_Plotter_cxx
// The class definition in HOMuon_TreeLoop_FrontBack_Plotter.h has been generated automatically
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
// Root > T->Process("HOMuon_TreeLoop_FrontBack_Plotter.C")
// Root > T->Process("HOMuon_TreeLoop_FrontBack_Plotter.C","some options")
// Root > T->Process("HOMuon_TreeLoop_FrontBack_Plotter.C+")
//

#include "HOMuon_TreeLoop_FrontBack_Plotter.h"
#include<TH1F.h>
#include <TH2.h>
#include<TCanvas.h>
#include <TStyle.h>
#include "iostream"
#include<stdio.h>
#include <string>
#include<sstream>
#include<cmath>


void HOMuon_TreeLoop_FrontBack_Plotter::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   
   // Define the keys for the Histogram Maps
   
   string reco_energy_key="AllRecoEnergy";


}

void HOMuon_TreeLoop_FrontBack_Plotter::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t HOMuon_TreeLoop_FrontBack_Plotter::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either HOMuon_TreeLoop_FrontBack_Plotter::GetEntry() or TBranch::GetEntry()
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

  for(unsigned int i=0; i < Reco_Energies->size(); i++ ){
    FillEnergyHistograms(Reco_Energies->at(i), reco_energy_key);
  }

   return kTRUE;
}

void HOMuon_TreeLoop_FrontBack_Plotter::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void HOMuon_TreeLoop_FrontBack_Plotter::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

  PlotCreator(_h1Energy[reco_energy_key], "Reco_Energy","Energy GeV", "Counts",-0.2, 6.0, 3, true);
}


/*
 * Since all Energy Histrograms should have a common form, they are held in a single map.                                      
*/

void HOMuon_TreeLoop_FrontBack_Plotter::FillEnergyHistograms(float energy, std::string key){
  if(!_h1Energy.count(key)){
    _h1Energy[key] = new TH1F(Form("energy_%s",key.c_str()), Form("Energy %s",key.c_str()), 500,-1.0,9.9);
  }
  _h1Energy[key]->Fill(energy);
}

/*                                                                                                                                 
 * Since all Energy Histrograms should have a common form, they are held in a single map.                                          
 */

void HOMuon_TreeLoop_FrontBack_Plotter::FillEtaPhiHistograms(float eta1, float eta2, float phi1, float phi2, std::string key){

  //Delta Eta Histograms Fill                                                                                                       
  if(!_h1DeltaEta.count(key)){
    _h1DeltaEta[key] = new TH1F(Form("DeltaEta_%s",key.c_str()), Form("DeltaEta %s",key.c_str()), 400, -2.6, 2.6);
  }
  _h1DeltaEta[key]->Fill(eta1-eta2);

  //Delta Eta Histograms Fill                                                                                                       
  if(!_h1DeltaPhi.count(key)){
    _h1DeltaPhi[key] = new TH1F(Form("DeltaPhi_%s",key.c_str()), Form("DeltaPhi %s",key.c_str()), 400, -3.14, 3.14);
  }
  _h1DeltaPhi[key]->Fill(WrapCheck(phi1,phi2));

  //DeltaEta Delta Phi Histograms Fill                                                                                              
  if(!_h2DeltaEtaDeltaPhi.count(key)){
    _h2DeltaEtaDeltaPhi[key] = new TH2F(Form("DeltaEtaDeltaPhi_%s",key.c_str()), Form("DeltaEtaDeltaPhi %s",key.c_str()),
					400, -2.6, 2.6, 400, -3.14, 3.14);
  }
  _h2DeltaEtaDeltaPhi[key]->Fill(eta1-eta2, WrapCheck(phi1, phi2));
}


 /*
  *For the Plotting of Eta and Phi Maps                                                                                            
  */

void HOMuon_TreeLoop_FrontBack_Plotter::FillEtaPhiMapHistograms(float eta, float phi, std::string key){  //Eta Phi Histograms Fill   

  if(!_h2EtaPhiMap.count(key)){
    _h2EtaPhiMap[key] = new TH2F(Form("EtaPhi_%s",key.c_str()), Form("EtaPhi %s",key.c_str()),
				 400, -3.1, 3.1, 400, -3.14, 3.14);
  }
  _h2EtaPhiMap[key]->Fill(eta, phi);

}


/*                                                                                                                                 
 * Functions to facilitate the creation of historgrams, "make pretty like".                                                        
 */

void HOMuon_TreeLoop_FrontBack_Plotter::PlotCreator(TH1F * hist, const char * title, const char * xAxis,const char * yAxis,
						    double xMin, double xMax, int num_binmerge, bool isLogy){

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
  TCanvas *c = new TCanvas(canvas_name.str().c_str(),canvas_name.str().c_str(),600,500);

  c->SetFillColor(0);
  c->SetBorderSize(0);
  c->cd();
  c->SetLogy(isLogy);
  hist->Draw("e0,hist");
  //hist->Draw("e0,hist");                                                                                                           

  // std::cout << Form("../Plots/SwitchtoTree_Plots/%s.png",out_name) << std::endl;                                                  
  c->SaveAs(Form("../Plots/SwitchtoTree_Plots/%s.png",title));
}


void HOMuon_TreeLoop_FrontBack_Plotter::PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, double xMin, double xMax,double yMin, double yMax,int num_xbinmerge, int num_ybinmerge, const char * type){

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
  c->SaveAs(Form("../Plots/SwitchtoTree_Plots/%s.png",title));
  //c->Print(Form("p_%s.png",name));                                                                                                 
  //c->Print(Form("p_%s.eps",name));                                                                                                 
  //c->Print(Form("p_%s.pdf",name));                                                                                                 
  return;
}
