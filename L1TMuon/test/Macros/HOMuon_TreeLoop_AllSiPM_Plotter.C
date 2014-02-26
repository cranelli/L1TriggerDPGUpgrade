#define HOMuon_TreeLoop_AllSiPM_Plotter_cxx
// The class definition in HOMuon_TreeLoop_AllSiPM_PlotterNew.h has been generated automatically
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
// Root > T->Process("HOMuon_TreeLoop_AllSiPM_Plotter.C")
// Root > T->Process("HOMuon_TreeLoop_AllSiPM_Plotter.C","some options")
// Root > T->Process("HOMuon_TreeLoop_AllSiPM_Plotter.C+") //

#include "HOMuon_TreeLoop_AllSiPM_Plotter.h"
#include<TH1F.h>
#include <TH2.h>
#include<TCanvas.h>
#include <TStyle.h>
#include "iostream"
#include<stdio.h>
#include <string>
#include<sstream>
#include<cmath>


void HOMuon_TreeLoop_AllSiPM_Plotter::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed). 
   TString option = GetOption();
   
   /*
   
   hist_SiPM_energy = new TH1F("SiPM_energy_hist", "SiPM energy hist", 500,-1.0,9.9);
   hist_HPD_energy = new TH1F("HPE_energy_hist", "HPE energy hist", 500,-1.0,9.9);
   hist_PropSiPMT_energy = new TH1F("PropSiPMT_energy_hist", "PropSiPMT energy hist", 100,-0.1,9.9);
   hist_wheelzero_energy = new TH1F("WheelZero_Energy","Wheel 0 energy hist", 100,-0.1,9.9);
   hist_PropSiPM_Map = new TH2F("PropSiPM_Map", "PropSiPM Map", 100, -1.5, 1.5, 100, -3.15, 3.15);
   hist_TriggerSiPM_Map = new TH2F("TriggerSiPM_Map", "TriggerSiPM Map", 60, -1.31, 1.31, 144, -3.15, 3.15);
   hist_TriggerSiPMT_Map = new TH2F("TriggerSiPMT_Map", "TriggerSiPM above Threshold Map", 60, -1.31, 1.31, 144, -3.15, 3.15);
   hist_PropTriggerSiPMT_Map = new TH2F("PropTriggerSiPMT_Map", "Position of Props for TriggerSiPM above Threshold Map", 60, -1.31, 1.31, 144, -3.15, 3.15);
   //hist_GeneratorTriggerSiPMT_Map = new TH2F("PropTriggerSiPMT_Map", "Position of Props for TriggerSiPM above Threshold Map", 60, -1.31, 1.31, 144, -3.15, 3.15);
   hist_SiPMPropTriggerT_deltaEta = new TH1F("DeltaEta_SiPMPropTrigger", "Delta Eta Propagator - Trigger", 100, -0.3, 0.3);
   hist_SiPMPropTriggerT_deltaPhi = new TH1F("DeltaPhi_SiPMPropTrigger", "Delta Phi Propagator - Trigger", 100, -0.3, 0.3);
   hist_SiPMPropTriggerT_deltaEtaPhi = new TH2F("DeltaEtaPhi_SiPMPropTrigger", "Delta Phi v Delta Eta SiPM Propagator -Trigger", 400, -3.0, 3.0, 400, -3.14, 3.14);
   hist_PropSiPMTriggerT_deltaEtaPhi = new TH2F("DeltaEtaPhi_PropSiPMTrigger", "Delta Phi v Delta Eta Propagator -Trigger", 400, -3.0, 3.0, 400, -3.14, 3.14);
   hist_TightFit_energy = new TH1F("Tight_energy_hist", "Tight energy hist", 500,-1.0,9.9);
   hist_NotTightFit_energy = new TH1F("NotTight_energy_hist", "Not Tight energy hist", 500,-1.0,9.9);
   hist_TightFitT_energy = new TH1F("TightT_energy_hist", "Tight with Threshold energy Distribution", 500,-1.0,9.9);
   hist_NotTightFitT_energy = new TH1F("NotTightT_energy_hist", "Not Tight with Threshold energy Distibrution", 500,-0.1,9.9);
   hist_NotTightFit_deltaEtaPhi = new TH2F("DeltaEtaPhi_NotTightFit", "Delta Phi v Delta Eta Propagator -Trigger", 400, -2.6, 2.6, 100, -3.14, 3.14);
   hist_NotTightFitT_deltaEtaPhi = new TH2F("DeltaEtaPhi_NotTightFit", "Delta Phi v Delta Eta Propagator -Trigger", 400, -3.0, 3.0, 400, -3.14, 3.14);

   hist_LooseFit_energy = new TH1F("Loose_energy_hist", "Loose energy hist", 500,-1.0,9.9);
   hist_NotLooseFit_energy = new TH1F("NotLoose_energy_hist", "Not Loose energy hist", 500,-1.0,9.9);
   hist_LooseFitT_energy = new TH1F("LooseT_energy_hist", "Loose with Threshold energy Distribution", 500,-1.0,9.9);
   hist_NotLooseFitT_energy = new TH1F("NotLooseT_energy_hist", "Not Loose with Threshold energy Distibrution", 500,-0.1,9.9);
   hist_NotLooseFit_deltaEtaPhi = new TH2F("DeltaEtaPhi_NotLooseFit", "Delta Phi v Delta Eta Propagator -Trigger", 400, -2.6, 2.6, 100, -3.14, 3.14);
   hist_NotLooseFitT_deltaEtaPhi = new TH2F("DeltaEtaPhi_NotLooseFit", "Delta Phi v Delta Eta Propagator -Trigger", 400, -3.0, 3.0, 400, -3.14, 3.14);
   
   //hist_map = new TH2F("map","map",100,-1.2,1.2,100,-3.15,3.15);
   
   */
}

void HOMuon_TreeLoop_AllSiPM_Plotter::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t HOMuon_TreeLoop_AllSiPM_Plotter::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either HOMuon_TreeLoop_AllSiPM_Plotter::GetEntry() or TBranch::GetEntry()
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
   * Have given the constraints for each histogram in it's own function,
   * so they can easily be commented out.
   */
  
  //Histogram of Energy for Triggers from SiPM Sector, Signal and Noise.
  SiPM_energy_Fill();

  //Histogram of Energy for Triggers from Wheel 0
  //WheelZero_energy_Fill();

  //Map of all Trigger located in a SiPM Sector
  //TriggerSiPM_Map_Fill();
  

  /*
   *A single event can contain multiple paritlces,
   *currently just loop over them.
   */

  //Loop Over Propagator entries (To deal with events with multiple propageted particles)
  for(unsigned int i =0; i< Propagator_Etas->size(); i++){

    Propagator_Map_Fill(i);

    //Map of all Particles Propagated to a SiPM Sector,
    //PropSiPM_Map_Fill(i);

    //Histogram of Energies for SiPM Triggers for Props.
    //PropSiPMT_energy_Fill(i);

    //deltaEta deltaPhi Plots for SiPM Triggers for Props. 
    //PropTrigger_deltaEtadeltaPhi_Fill(i);

    AllPropSiPMTriggerT_Fill(i);
    

    //double TightCutHalfWidth = 0.05/2;
    //TightFitandNot_Fill(i, TightCutHalfWidth);

    double LooseCutWidth = 0.087*3;
    LooseFitandNot_Fill(i, LooseCutWidth);
    

    //TightFit_Fill();
    //NotTightFit_Fill();
  }
   return kTRUE;
}

void HOMuon_TreeLoop_AllSiPM_Plotter::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void HOMuon_TreeLoop_AllSiPM_Plotter::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.


  /*
   * Create and Save Plots
   */

  PlotCreator2D(_h2EtaPhiMap["Propagated_Particles"], "EtaPhi_Props", "#eta", "#Phi", -3.1, 3.1, -3.14, 3.14, 1,1,"box");

  PlotCreator(_h1Energy["AllSiPM"], "All_SiPM_Energy","Energy GeV", "Counts",-0.2, 6.0, 3, true);

  //PlotCreator(_h1DeltaEta["AllPropSiPMTriggerT"], "DeltaEta_AllPropSiPMTriggerT","#Delta #eta", "Counts",-0.2, 0.2, 1, false);
  
  //PlotCreator(_h1DeltaPhi["AllPropSiPMTriggerT"], "DeltaPhi_AllPropSiPMTriggerT","#Delta #phi", "Counts",-0.2, 0.2, 1, false);

  PlotCreator2D(_h2DeltaEtaDeltaPhi["AllPropSiPMTriggerT"], "DeltaEtaPhi_AllPropSiPMTriggerT", "#Delta #eta", "#Delta #Phi", -0.4, 0.4, -0.4, 0.4, 1,1,"CONT0");

  PlotCreator(_h1Energy["AllPropSiPMTriggerT"], "Energy_AllPropSiPMTriggerT", "Energy GeV", "Counts", -0.2, 6.0, 3, false);


  PlotCreator2D(_h2DeltaEtaDeltaPhi["NotLooseFitT"], "Not Loose Fit", "#Delta #eta", "#Delta #Phi", -1.0, 1.0, -1.0, 1.0, 1,1,"CONT0");

  //PlotCreator(_h1Energy["NotLooseFitT"], "Not_Loose_Fit_Energy", "Energy GeV", "Counts", -0.2, 5.0, 3, false);

  // PlotCreator(hist_HPD_energy, "HPD_Energy","Energy GeV", "Counts",-0.2, 9.0, 3, true);

  //PlotCreator(hist_wheelzero_energy, "Wheel0_Energy","Energy GeV", "Counts",-0.2, 9.0, 3, true);

  // PlotCreator2D(hist_PropSiPM_Map,"PropSiPM_Map","#eta", "#phi", -1.3, 1.3, -3.15, 3.15,2,2,"box");

  //  PlotCreator2D(hist_TriggerSiPM_Map,"TriggerSiPM_Map","#eta", "#phi", -1.31, 1.31, -3.15, 3.15,1,1,"box");

  // PlotCreator2D(hist_TriggerSiPMT_Map,"TriggerSiPMT_Map","#eta", "#phi", -1.31, 1.31, -3.15, 3.15,1,1,"box");

  //PlotCreator2D(hist_PropTriggerSiPMT_Map,"Prop_TriggerSiPMT_Map","#eta", "#phi", -1.31, 1.31, -3.15, 3.15,1,1,"box");

  //PlotCreator2D(hist_GeneratorTriggerSiPMT_Map,"Generator_TriggerSiPMT_Map","#eta", "#phi", -1.31, 1.31, -3.15, 3.15,1,1,"box");

  //PlotCreator(hist_PropSiPMT_energy, "PropSiPMT_energy", "Energy GeV","Counts", -0.2, 5.0, 1, false);
  
  //PlotCreator(hist_SiPMPropTriggerT_deltaEta, "PropSiPMTriggerT_deltaEta", "#Delta #eta","Counts",-0.2, 0.2, 2, false);

  //PlotCreator(hist_SiPMPropTriggerT_deltaPhi, "PropSiPMTriggerT_deltaPhi", "#Delta #phi","Counts",-0.2,0.2,2,false);

  //PlotCreator2D(hist_SiPMPropTriggerT_deltaEtaPhi,"DeltaEtaPhi_SiPMPropTriggerT","#eta", "#phi", -3.0, 3.0, -3.14, 3.14,1,1,"CONT0");

  //PlotCreator2D(hist_PropSiPMTriggerT_deltaEtaPhi,"DeltaEtaPhi_PropSiPMTriggerT","#eta", "#phi", -3.0, 3.0, -3.14, 3.14,1,1,"CONT0");

  // PlotCreator(hist_TightFit_energy, "Energy Distribution for Tight Fit", "Energy GeV", "Counts", -0.2, 5.0, 3, false);

  // PlotCreator(hist_NotLooseFit_energy, "Energy Distribution for Not Loose Fit", "Energy GeV", "Counts", -0.2, 2.0, 1, true);

  //PlotCreator(hist_NotTightFit_energy, "Energy Distribution for Not Tight Fit", "Energy GeV", "Counts", -0.2, 5.0, 2, true);

  //PlotCreator(hist_TightFitT_energy, "Energy Distribution for Tight Fit with Threshold", "Energy GeV", "Counts", -0.2, 5.0, 2, true);

  //PlotCreator(hist_NotTightFitT_energy, "Energy Distribution for Not Tight Fit with Threshold", "Energy GeV", "Counts", -0.2, 5.0, 2, true);

  //PlotCreator2D(hist_NotTightFit_deltaEtaPhi,"DeltaEtaPhi_NotTightFit","#eta", "#phi", -2.0, 1.0, -3.14, 3.14,1,1,"CONT0");
  
  //PlotCreator2D(hist_NotTightFitT_deltaEtaPhi,"Zoom DeltaEtaPhi_NotTightFitT","#eta", "#phi", -0.2, 0.2, -0.2, 0.2,1,1,"CONT0");
  
  //PlotCreator2D(hist_NotTightFitT_deltaEtaPhi,"DeltaEtaPhi_NotTightFitT","#eta", "#phi", -3.0, 3.0, -3.14, 3.14,2,2,"CONT0");

  /*
   *Write Histograms to a root file.
   */
  
  /*
  TFile *outfile = TFile::Open("out_50Pt_Muon.root","RECREATE");
  hist_SiPM_energy->Write();
  hist_HPD_energy->Write();
  hist_PropSiPM_Map->Write();
  hist_PropSiPMT_energy->Write();
  hist_SiPMPropTriggerT_deltaEta->Write();
  hist_SiPMPropTriggerT_deltaPhi->Write();
  hist_SiPMPropTriggerT_deltaEtaPhi->Write();
  outfile->Close();
  */

}



void HOMuon_TreeLoop_AllSiPM_Plotter::SiPM_energy_Fill(){
  string key = "AllSiPM";
    for(unsigned int i=0; i < Trigger_Energies->size(); i++ ){
      FillEnergyHistograms(Trigger_Energies->at(i), key);
    }
  /*
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_IsaSiPMs->at(i)){
      hist_SiPM_energy->Fill(Trigger_Energies->at(i));
    } else {
      hist_HPD_energy->Fill(Trigger_Energies->at(i));
    }
  }
  */
}

void HOMuon_TreeLoop_AllSiPM_Plotter::Propagator_Map_Fill(unsigned int prop_index){
  string key = "Propagated_Particles";
  FillEtaPhiMapHistograms(Propagator_Etas->at(prop_index), Propagator_Phis->at(prop_index), key);
}

void HOMuon_TreeLoop_AllSiPM_Plotter::AllPropSiPMTriggerT_Fill(unsigned int prop_index){
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_Energies->at(i)>THRESHOLD){
      std::string key = "AllPropSiPMTriggerT";
      FillEtaPhiHistograms(Propagator_Etas->at(prop_index),Trigger_Etas->at(i),
			   Propagator_Phis->at(prop_index),Trigger_Phis->at(i),key);
      FillEnergyHistograms(Trigger_Energies->at(i), key);
    }
  }
}

void HOMuon_TreeLoop_AllSiPM_Plotter::LooseFitandNot_Fill(unsigned int prop_index, double LooseCutWidth){
  //double cut_width = 0.087/2;
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    //if(Trigger_IsaSiPMs->at(i)){ //SiPM Trigger
    //Fill Energy Histogroms for Triggers Loosely Fit with Propagated Muon
    if(abs(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i)) <= LooseCutWidth/2 && abs(WrapCheck(Propagator_Phis->at(prop_index), Trigger_Phis->at(i))) <= LooseCutWidth/2){
      //hist_LooseFit_energy->Fill(Trigger_Energies->at(i));
      if(Trigger_Energies->at(i)>THRESHOLD){ //Above Threshold
	//hist_LooseFitT_energy->Fill(Trigger_Energies->at(i));
      }
    }
    else {
      //hist_NotLooseFit_energy->Fill(Trigger_Energies->at(i));
      //hist_NotLooseFit_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i))); 
      if(Trigger_Energies->at(i)>THRESHOLD){ //Set Threshold
	std::string key = "NotLooseFitT";
	FillEtaPhiHistograms(Propagator_Etas->at(prop_index),Trigger_Etas->at(i),
			     Propagator_Phis->at(prop_index),Trigger_Phis->at(i),key);
	FillEnergyHistograms(Trigger_Energies->at(i), key);
	//hist_NotLooseFitT_energy->Fill(Trigger_Energies->at(i));
	//hist_NotLooseFitT_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
      }
    }
  }
}

void HOMuon_TreeLoop_AllSiPM_Plotter::WheelZero_energy_Fill(){
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_Etas->at(i)<0.087*4 && Trigger_Etas->at(i)> -0.087*4){
      hist_wheelzero_energy->Fill(Trigger_Energies->at(i));
    }
  }
}

/*
 *Creates a Map, with the Eta and Phi Positions of the Propagated Muons
 *through SiPM HO sectors.
 */
void HOMuon_TreeLoop_AllSiPM_Plotter::PropSiPM_Map_Fill(unsigned int prop_index){
  if(Propagator_IsaSiPMs->at(prop_index)){
    hist_PropSiPM_Map->Fill(Propagator_Etas->at(prop_index), Propagator_Phis->at(prop_index));
  }
}

/*
 *Creates a Map, with the Eta and Phi Positions of the Triggers
 *located in SiPM HO sectors.
 */
void HOMuon_TreeLoop_AllSiPM_Plotter::TriggerSiPM_Map_Fill(){
  for(unsigned int i =0; i< Trigger_IsaSiPMs->size(); i++){ //Loops over all Triggers from a sigle event.
    if(Trigger_IsaSiPMs->at(i)){ //If Trigger IsaSiPM
      hist_TriggerSiPM_Map->Fill(Trigger_Etas->at(i), Trigger_Phis->at(i));
      if(Trigger_Energies->at(i) >= 0.2){
	hist_TriggerSiPMT_Map->Fill(Trigger_Etas->at(i), Trigger_Phis->at(i));
      }
    }
  }
}


/*
 * Fills Histogram with energies of  all the SiPM Triggers above a 
 * Threshold value,  0.2 GeV.  From a subset of the muons, which 
 * are propagated to pass through the SiPM Sector.
 */

void HOMuon_TreeLoop_AllSiPM_Plotter::PropSiPMT_energy_Fill(unsigned int prop_index){
  if(Propagator_IsaSiPMs->at(prop_index)){
    for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
      if(Trigger_IsaSiPMs->at(i) && (Trigger_Energies->at(i) >= 0.2)){ //SiPM Trigger Above Threshold
	hist_PropSiPMT_energy->Fill(Trigger_Energies->at(i));
      }
    }
  }
}

/*
 * Fills Histograms with delta Eta and delta Phi for
 * the subset of muons propagated through a SiPM Sector
 * matched with a SiPM Trigger above Threshold.
 */

void HOMuon_TreeLoop_AllSiPM_Plotter::PropTrigger_deltaEtadeltaPhi_Fill(unsigned int prop_index){
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_IsaSiPMs->at(i) && (Trigger_Energies->at(i) >= 0.2)){ //SiPM Trigger Above Threshold
      hist_PropSiPMTriggerT_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
      hist_PropTriggerSiPMT_Map->Fill(Propagator_Etas->at(prop_index), Propagator_Phis->at(prop_index));
      // hist_GeneratorTriggerSiPMT_Map->Fill(Generator_Eta, Generator_Phi);
      if(Propagator_IsaSiPMs->at(prop_index)){
	hist_SiPMPropTriggerT_deltaEta->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i));
	hist_SiPMPropTriggerT_deltaPhi->Fill(WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
	hist_SiPMPropTriggerT_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
      }
    }
  }
}

/*
 *We look at all the trigger in SiPM sectors.
 *We distinguish between those associated with a propagated muon,
 *and those not.  Tight fit, within one tile 0.087x0.087.
 *At this point, no energy selection.
 */

void HOMuon_TreeLoop_AllSiPM_Plotter::TightFitandNot_Fill(unsigned int prop_index, double TightCutHalfWidth){
  //double cut_width = 0.087/2;
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_IsaSiPMs->at(i)){ //SiPM Trigger
      //Fill Energy Histogroms for Triggers Tightly Fit with Propagated Muon
      if(abs(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i)) <= TightCutHalfWidth && abs(WrapCheck(Propagator_Phis->at(prop_index), Trigger_Phis->at(i))) <= TightCutHalfWidth){
	/*
	if(!(Propagator_IsaSiPMs->at(prop_index))){
	  cout << "Not a PropSiPM" << endl;
	}
	*/
	hist_TightFit_energy->Fill(Trigger_Energies->at(i));
	   
	if(Trigger_Energies->at(i)>0.2){ //Above Threshold
	  hist_TightFitT_energy->Fill(Trigger_Energies->at(i));
	}
      }
      else {
	hist_NotTightFit_energy->Fill(Trigger_Energies->at(i));
	hist_NotTightFit_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
	if(Trigger_Energies->at(i)>0.2){ //Set Threshold
	  hist_NotTightFitT_energy->Fill(Trigger_Energies->at(i));
	  hist_NotTightFitT_deltaEtaPhi->Fill(Propagator_Etas->at(prop_index)-Trigger_Etas->at(i), WrapCheck(Propagator_Phis->at(prop_index),Trigger_Phis->at(i)));
	}
      }
    }
  }
}

/*
 *We look at all the trigger in SiPM sectors.
 *We look for the triggers outside a loose cut of the propagated muon,
 *and those not.  Loose cut, greater than  1.5 tiles (0.087x0.087). =0.131
 */


/*
void HOMuon_TreeLoop_AllSiPM_Plotter::NotTightFit_Fill(){
  double cut_width = 0.087/2;
  for(unsigned int i =0; i < Trigger_Energies->size(); i++ ){
    if(Trigger_IsaSiPMs->at(i)){
      if(abs(Propagator_Eta-Trigger_Etas->at(i)) > cut_width || abs(WrapCheck(Propagator_Phi, Trigger_Phis->at(i))) > cut_width){
	hist_NotTightFit_energy->Fill(Trigger_Energies->at(i));
	hist_NotTightFit_deltaEtaPhi->Fill(Propagator_Eta-Trigger_Etas->at(i), WrapCheck(Propagator_Phi,Trigger_Phis->at(i)));
	if(Trigger_Energies->at(i)>0.2){ //Set Threshold
	  hist_NotTightFitT_energy->Fill(Trigger_Energies->at(i));
	  hist_NotTightFitT_deltaEtaPhi->Fill(Propagator_Eta-Trigger_Etas->at(i), WrapCheck(Propagator_Phi,Trigger_Phis->at(i)));
	}
      }
    }
  }
}
*/

/*
 * Since all Energy Histrograms should have a common form, they are held in a single map.
 */

void HOMuon_TreeLoop_AllSiPM_Plotter::FillEnergyHistograms(float energy, std::string key){
  if(!_h1Energy.count(key)){
    _h1Energy[key] = new TH1F(Form("energy_%s",key.c_str()), Form("Energy %s",key.c_str()), 500,-1.0,9.9);
  }
  _h1Energy[key]->Fill(energy);
}

/*
 * Since all Energy Histrograms should have a common form, they are held in a single map.
 */

 void HOMuon_TreeLoop_AllSiPM_Plotter::FillEtaPhiHistograms(float eta1, float eta2, float phi1, float phi2, std::string key){
   
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

void HOMuon_TreeLoop_AllSiPM_Plotter::FillEtaPhiMapHistograms(float eta, float phi, std::string key){
  //Eta Phi Histograms Fill
  if(!_h2EtaPhiMap.count(key)){
    _h2EtaPhiMap[key] = new TH2F(Form("EtaPhi_%s",key.c_str()), Form("EtaPhi %s",key.c_str()), 
					400, -3.1, 3.1, 400, -3.14, 3.14);
  }
  _h2EtaPhiMap[key]->Fill(eta, phi);

}


/*
 * Functions to facilitate the creation of historgrams, "make pretty like".
 */

void HOMuon_TreeLoop_AllSiPM_Plotter::PlotCreator(TH1F * hist, const char * title, const char * xAxis,const char * yAxis,double xMin, double xMax, int num_binmerge, bool isLogy){
  
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

void HOMuon_TreeLoop_AllSiPM_Plotter::PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, double xMin, double xMax,double yMin, double yMax,int num_xbinmerge, int num_ybinmerge, const char * type){

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

double HOMuon_TreeLoop_AllSiPM_Plotter::WrapCheck(double phi1, double phi2){
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
