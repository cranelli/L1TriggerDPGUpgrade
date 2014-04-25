#define HOMuon_TreeLoop_Version_7_0_0_Plotter_cxx
// The class definition in HOMuon_TreeLoop_Version_7_0_0_Plotter.h has been generated automatically
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
// Root > T->Process("HOMuon_TreeLoop_Version_7_0_0_Plotter.C")
// Root > T->Process("HOMuon_TreeLoop_Version_7_0_0_Plotter.C","some options")
// Root > T->Process("HOMuon_TreeLoop_Version_7_0_0_Plotter.C+")
//

#include "HOMuon_TreeLoop_Version_7_0_0_Plotter.h"
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

//Keys (Single Key can refer to multiple histograms)

#define all_gen_key "AllGen"
#define all_reco_key "AllReco"
#define all_frontprop_key "AllFrontProp"
#define all_backprop_key "AllBackProp"
#define all_reco_frontprop_key "AllRecoFrontProp"
#define all_reco_backprop_key "AllRecoBackProp"
#define threshold_reco "ThresholdReco"
#define threshold_reco_frontprop_key "ThresholdRecoFrontProp"
#define threshold_reco_backprop_key "ThresholdRecoBackProp"
#define threshold_NotLoose_RFP_key "ThresholdNotLooseRecoFrontProp"
#define threshold_NotLoose_RBP_key "ThresholdNotLooseRecoBackProp"
#define threshold_notLoose_RP_FBtrue_key "ThresholdNotLosseReco_FBtrue"

#define THRESHOLD 0.2
#define TILELENGTH 0.088  //Rounding up 5 degrees

void HOMuon_TreeLoop_Version_7_0_0_Plotter::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void HOMuon_TreeLoop_Version_7_0_0_Plotter::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t HOMuon_TreeLoop_Version_7_0_0_Plotter::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either HOMuon_TreeLoop_Version_7_0_0_Plotter::GetEntry() or TBranch::GetEntry()
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
  //cout << entry << endl;


  /*
   * Generator Histograms
   */

  
  for(unsigned int i=0; i < Generator_Etas->size(); i++ ){
    FillEtaPhiHistograms(Generator_Etas->at(i), Generator_Phis->at(i),all_gen_key);
  }
  

  /*
   * Reco Histograms
   */

  recoAboveThresholdCount=0;  //Added to Histogram at end of Trigger Loop
  for(unsigned int i=0; i < Reco_Energies->size(); i++ ){
    FillEnergyHistograms(Reco_Energies->at(i), all_reco_key);
    FillEtaPhiHistograms(Reco_Etas->at(i), Reco_Phis->at(i),all_reco_key);
    
    /*
     * Subsection Triggers Above Threshold
     */
    if(Reco_Energies->at(i) > THRESHOLD){
      recoAboveThresholdCount++;
      FillEnergyHistograms(Reco_Energies->at(i), threshold_reco);

    }
  }
  FillCountHistograms(float(recoAboveThresholdCount),threshold_reco);
  
  /*
   *Propagator Histograms
   */

  //All Front Propagated Particles
  propagatorCount=0;
  for(unsigned int i = 0; i < Prop_HO_Front_Etas->size(); i++){
    propagatorCount++;
    FillEtaPhiHistograms(Prop_HO_Front_Etas->at(i), Prop_HO_Front_Phis->at(i),all_frontprop_key);
  }
  FillCountHistograms(float(propagatorCount),all_frontprop_key);

  propagatorCount=0;
  //All Back Propagated Particles
  for(unsigned int i = 0; i < Prop_HO_Back_Etas->size(); i++){
    propagatorCount++;
    FillEtaPhiHistograms(Prop_HO_Back_Etas->at(i), Prop_HO_Back_Phis->at(i),all_backprop_key);
  }
  FillCountHistograms(float(propagatorCount),all_backprop_key);
  
  /*
   *Compare Reco and Propagator Histograms
   */
 
  for(unsigned int i_r=0; i_r < Reco_Energies->size(); i_r++ ){

    //Front Propagator
    for(unsigned int i_p = 0; i_p < Prop_HO_Front_Etas->size(); i_p++){
      FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Front_Etas->at(i_p), 
				Reco_Phis->at(i_r), Prop_HO_Front_Phis->at(i_p),
				all_reco_frontprop_key);
    }
    
    //Back Propagator
    for(unsigned int i_p = 0; i_p < Prop_HO_Back_Etas->size(); i_p++){
      FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Back_Etas->at(i_p), 
				Reco_Phis->at(i_r), Prop_HO_Back_Phis->at(i_p),
				all_reco_backprop_key);
    }
  }


  /*
   *Compare Triggers Above Threshold with Propagator Histograms
   */
 

  for(unsigned int i_r=0; i_r < Reco_Energies->size(); i_r++ ){
    if(Reco_Energies->at(i_r) > THRESHOLD){
      //Front Propagator
      for(unsigned int i_p = 0; i_p < Prop_HO_Front_Etas->size(); i_p++){
	
	FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Front_Etas->at(i_p), 
				  Reco_Phis->at(i_r), Prop_HO_Front_Phis->at(i_p),
				  threshold_reco_frontprop_key);

	if(!(LooseCut(Reco_Etas->at(i_r), Prop_HO_Front_Etas->at(i_p), 
		      Reco_Phis->at(i_r), Prop_HO_Front_Phis->at(i_p)))){
	  
	
	  PlotEntry(entry);
	
	

	  FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Front_Etas->at(i_p), 
				    Reco_Phis->at(i_r), Prop_HO_Front_Phis->at(i_p),
				    threshold_NotLoose_RFP_key);

	  //recoAboveThresholdCount already defined.
	  FillCountHistograms(recoAboveThresholdCount, threshold_NotLoose_RFP_key);

	  FillEnergyHistograms(Reco_Energies->at(i_r), threshold_NotLoose_RFP_key);

	  //Add Condition That both Propagators are through the same tile
	  if(Prop_HO_FrontBackSame->at(i_p)){
	    FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Front_Etas->at(i_p), 
				      Reco_Phis->at(i_r), Prop_HO_Front_Phis->at(i_p),
				      threshold_notLoose_RP_FBtrue_key);
	  }
	}
      } 
      //Back Propagator
      for(unsigned int i_p = 0; i_p < Prop_HO_Back_Etas->size(); i_p++){
	FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Back_Etas->at(i_p), 
				  Reco_Phis->at(i_r), Prop_HO_Back_Phis->at(i_p),
				  threshold_reco_backprop_key);
   
	if(!(LooseCut(Reco_Etas->at(i_r), Prop_HO_Back_Etas->at(i_p), 
		      Reco_Phis->at(i_r), Prop_HO_Back_Phis->at(i_p)))){
	  
	  FillDeltaEtaPhiHistograms(Reco_Etas->at(i_r), Prop_HO_Back_Etas->at(i_p), 
				    Reco_Phis->at(i_r), Prop_HO_Back_Phis->at(i_p),
				    threshold_NotLoose_RBP_key);
	}
      }
    }
  }
  
  return kTRUE;
}

void HOMuon_TreeLoop_Version_7_0_0_Plotter::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void HOMuon_TreeLoop_Version_7_0_0_Plotter::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.


  //Selected Histograms can be specially plotted
  
  //  PlotCreator(_h1Energy[all_reco_key], "Energy_AllReco","Energy GeV", "Counts",-0.2, 6.0, 3, true);

   
  //Loop over the Maps of Histograms, Save and Plot them.
 
  TFile *outfile= TFile::Open("/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/test/Plots/Version_7_0_0_Plots/out_Version_7_0_0_14_Muon.root","RECREATE");
    
  for(it = _h1Energy.begin(); it!=_h1Energy.end(); ++it){
    //cout << it->first << endl;
    it->second->Write();
    PlotCreator(_h1Energy[it->first], Form("Energy_%s", it->first.c_str()),"Energy GeV", "Counts",-0.2, 6.0, 3, true);
  }

  for(it = _h1Eta.begin(); it!=_h1Eta.end(); ++it){
    it->second->Write();
    PlotCreator(_h1Eta[it->first], Form("Eta_%s",it->first.c_str()),"Eta", "Counts",-1.5, 1.5, 4, true);
  }
  
  for(it = _h1Phi.begin(); it!=_h1Phi.end(); ++it){
    it->second->Write();
    PlotCreator(_h1Phi[it->first], Form("Phi_%s",it->first.c_str()),"Phi", "Counts",-3.14, 3.14, 4, true);
  }
  
  for(it2D = _h2EtaPhiMap.begin(); it2D!=_h2EtaPhiMap.end(); ++it2D){
    it2D->second->Write();
    PlotCreator2D(_h2EtaPhiMap[it2D->first], Form("EtaPhi_%s",it2D->first.c_str()), "#eta", "#Phi", -1.5, 1.5, -3.14, 3.14, 1,1,"box");
  }

  for(it = _h1DeltaEta.begin(); it!=_h1DeltaEta.end(); ++it){
    it->second->Write();
    PlotCreator(_h1DeltaEta[it->first], Form("DeltaEta_%s", it->first.c_str()),"#Delta #eta", "Counts",-0.2, 0.2, 1, false);              
  }

  for(it = _h1DeltaPhi.begin(); it!=_h1DeltaPhi.end(); ++it){
    it->second->Write();
    PlotCreator(_h1DeltaPhi[it->first], Form("DeltaPhi_%s", it->first.c_str()),"#Delta #Phi", "Counts",-0.2, 0.2, 1, false);              
  }

  for(it2D = _h2DeltaEtaDeltaPhi.begin(); it2D!=_h2DeltaEtaDeltaPhi.end(); ++it2D){
    it2D->second->Write();
    PlotCreator2D(_h2DeltaEtaDeltaPhi[it2D->first], Form("DeltaEtaDeltaPhi_%s", it2D->first.c_str()), 
     "#Delta #eta", "#Delta #Phi", -0.4, 0.4, -0.4, 0.4, 1,1,"CONT0");
  }

  for(it2D = _h2EnergyMap.begin(); it2D!=_h2EnergyMap.end(); ++it2D){
    it2D->second->Write();
    PlotCreator2D(_h2EnergyMap[it2D->first], Form("EnergyMap_%s", it2D->first.c_str()), "#eta", "#Phi", -1.5, 1.5, -3.15, 3.15, 1,1,"CONT0");
  }
  
  for(it = _h1Count.begin(); it!=_h1Count.end(); ++it){
    it->second->Write();
    PlotCreator(_h1Count[it->first], Form("Count_%s", it->first.c_str()),"Counts", "Events",-1.0, 10.0, 1, true);              
  }
  
  outfile->Close();

}


/*
 * Since all Energy Histrograms should have a common form, they are held in a single map.
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::FillEnergyHistograms(float energy, std::string key){
  if(!_h1Energy.count(key)){
    _h1Energy[key] = new TH1F(Form("energy_%s",key.c_str()), Form("Energy %s",key.c_str()), 500,-1.0,9.9);
  }
  _h1Energy[key]->Fill(energy);
}

/*
 *Fills the Eta Histograms, the Phi Histograms, and Makes a Map of Eta vs Phi
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::FillEtaPhiHistograms(float eta, float phi, std::string key){  //Eta Phi Histograms Fill   

  if(!_h1Eta.count(key)){
    _h1Eta[key] = new TH1F(Form("Eta_%s",key.c_str()), Form("Eta %s",key.c_str()),
				 500, -1.5, 1.5);  //HO has 72 iphis and 30 ietas
  }
  _h1Eta[key]->Fill(eta);

  if(!_h1Phi.count(key)){
    _h1Phi[key] = new TH1F(Form("Phi_%s",key.c_str()), Form("Phi %s",key.c_str()),
				 500, -3.14, 3.14);  //HO has 72 iphis and 30 ietas
  }
  _h1Phi[key]->Fill(phi);

  if(!_h2EtaPhiMap.count(key)){
    _h2EtaPhiMap[key] = new TH2F(Form("EtaPhi_%s",key.c_str()), Form("EtaPhi %s",key.c_str()),
				 500, -1.5, 1.5, 500, -3.14, 3.14);  //HO has 72 iphis and 30 ietas
  }
  _h2EtaPhiMap[key]->Fill(eta, phi);

}


/*                                                                                                                                        
 * Fill the difference in Eta and Phi between two particles
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::FillDeltaEtaPhiHistograms(float eta1, float eta2, float phi1, float phi2, std::string key){
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
 * Fill histogram for the "count" ie number of propagators or recos per event.
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::FillEnergyMap(float eta, float phi, double energy, std::string key){
  if(!_h2EnergyMap.count(key)){
    _h2EnergyMap[key] = new TH2F(Form("DeltaEtaDeltaPhi_%s",key.c_str()), Form("DeltaEtaDeltaPhi %s",key.c_str()),
                                        60, -1.5, 1.5, 144, -3.14, 3.14);
  }
  _h2EnergyMap[key]->Fill(eta, phi, energy);
}

/*
 * Plot energy map for a single event.
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::FillCountHistograms(float counts, std::string key){
  if(!_h1Count.count(key)){
    _h1Count[key] = new TH1F(Form("count_%s",key.c_str()), Form("Count %s",key.c_str()), 21,-1.0,20);
  }
  _h1Count[key]->Fill(counts);
}



/*
 * Sets a Loose Fit, demanding that the two points lie within the same tile
 * or within neighboring tiles.
 */

bool HOMuon_TreeLoop_Version_7_0_0_Plotter::LooseCut(double eta1, double eta2, double phi1, double phi2){
  //cout << "TileLength div 2: " << TILELENGTH/2 << endl;
  //cout << "Inputs: " << eta1 << " "<<eta2 << " " << phi1 << " " << phi2 << endl;
  //cout << "Differences " << abs(eta1-eta2) << " " << abs(WrapCheck(phi1,phi2)) << endl; 
  if(abs(eta1-eta2) < 3*TILELENGTH/2 && abs(WrapCheck(phi1,phi2)) < 3*TILELENGTH/2){
    //cout <<"Passes Loose Conditions"<<endl;
    return true;
  }
  return false;
}

/*
 * Makes plots, corresponding to the Reco and Propagator information of a single entry.
 * Note the entries start at 0.
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::PlotEntry(Long64_t entry){
  
  //Checks to see if entry has already been plotted
  if(plotted_entries.count(entry)==0){
    plotted_entries.insert(entry);

    //Loop over all triggers above Threshold in the Entry

    std::stringstream entry_key;
    entry_key << entry;
    cout << entry_key.str().c_str() << endl;
    for(unsigned int i_r=0; i_r < Reco_Energies->size(); i_r++ ){
      if(Reco_Energies->at(i_r) > THRESHOLD){
	FillEnergyMap(Reco_Etas->at(i_r),Reco_Phis->at(i_r), Reco_Energies->at(i_r), entry_key.str().c_str());
      }
    }
  }
  
}


/*
 * Functions to facilitate the creation of historgrams, "make pretty like".
 */

void HOMuon_TreeLoop_Version_7_0_0_Plotter::PlotCreator(TH1F * hist, const char * title, const char * xAxis,const char * yAxis,double xMin, double xMax, int num_binmerge, bool isLogy){
  
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
  c->SaveAs(Form("/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/test/Plots/Version_7_0_0_Plots/%s.png",title));
}

void HOMuon_TreeLoop_Version_7_0_0_Plotter::PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, double xMin, double xMax,double yMin, double yMax,int num_xbinmerge, int num_ybinmerge, const char * type){

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
  c->SaveAs(Form("/home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/Plots/Version_7_0_0_Plots/%s.png",title));
  //c->Print(Form("p_%s.png",name));
  //c->Print(Form("p_%s.eps",name));
  //c->Print(Form("p_%s.pdf",name));
  return;
}

double HOMuon_TreeLoop_Version_7_0_0_Plotter::WrapCheck(double phi1, double phi2){
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

