#define HOMuon_TreeLoop_Efficiency_cxx
// Created by Christopher Anelli, last modified on 12.16.2013
// The class definition in HOMuon_TreeLoop_Efficiency.h has been generated automatically
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
// Root > T->Process("HOMuon_TreeLoop_Efficiency.C")
// Root > T->Process("HOMuon_TreeLoop_Efficiency.C","some options")
// Root > T->Process("HOMuon_TreeLoop_Efficiency.C+")
//

#include "HOMuon_TreeLoop_Efficiency.h"
#include <TH1F.h>
#include <TH2F.h>
#include <TGraph.h>
#include <TGraph2D.h>
#include <TCanvas.h>
#include <TPad.h>
#include <TStyle.h>
#include "iostream"
#include <cmath>  //Allows M_PI and more
#include <string>




#define num_rcuts 10
#define num_tcuts 10

//Global Variables
int efficiency_count[num_rcuts][num_tcuts];
int accepted_count[num_rcuts][num_tcuts];
int fake_count[num_rcuts][num_tcuts]; 
int propSiPM_count;

//using namespace::std;

void HOMuon_TreeLoop_Efficiency::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   hist_efficiency_RT = new TH2F("Efficiency_RT", "2D Efficiency Plot", num_rcuts, 0.00001, 0.30001, num_tcuts, 0.0001, 0.10);
   hist_purity_RT = new TH2F("Purity_RT", "2D Purity", num_rcuts, 0.00001, 0.30001, num_tcuts, 0.0001, 0.10);

   int propSiPM_count =0;
   for(int i_rcut=0; i_rcut <num_rcuts; i_rcut++){
     for(int i_tcut=0; i_tcut <num_tcuts; i_tcut++){
       efficiency_count[i_rcut][i_tcut]=0;
       accepted_count[i_rcut][i_tcut]=0;
       fake_count[i_rcut][i_tcut]=0;
     }
   }

}

void HOMuon_TreeLoop_Efficiency::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t HOMuon_TreeLoop_Efficiency::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either HOMuon_TreeLoop_Efficiency::GetEntry() or TBranch::GetEntry()
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

  int i_rcut, i_tcut;

  //Efficiency
  //Loop over all Generator (Propagator) particles
  for(unsigned int i_part=0; i_part < Propagator_IsaSiPMs->size(); i_part++){
    if(Propagator_IsaSiPMs->at(i_part)){  //Select those are Propagated to SiPM sectors
      propSiPM_count++;
      for(i_rcut=0; i_rcut<num_rcuts; i_rcut++){
	for(i_tcut=0; i_tcut<num_tcuts; i_tcut++){
	  if(TriggerMatch(i_part,i_rcut,i_tcut)){
	    efficiency_count[i_rcut][i_tcut]= efficiency_count[i_rcut][i_tcut]+1;
	  }
	}
      }
    }
  }

  //Fake Rate
  //Loop over all Triggers in SiPM Sectors
  for(unsigned int i_trig=0; i_trig < Trigger_IsaSiPMs->size(); i_trig++){
    for(i_rcut=0; i_rcut<num_rcuts; i_rcut++){
      for(i_tcut=0; i_tcut<num_tcuts; i_tcut++){
	if(IsAccepted(i_trig,i_tcut)){
	  accepted_count[i_rcut][i_tcut]=accepted_count[i_rcut][i_tcut]+1;
	  if(IsFake(i_trig, i_rcut)){
	    fake_count[i_rcut][i_tcut]=fake_count[i_rcut][i_tcut]+1;
	  }
	}
      }
    }
  }

  return kTRUE;
}

void HOMuon_TreeLoop_Efficiency::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void HOMuon_TreeLoop_Efficiency::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
 
  cout << "Number of particles propagated through SiPM sectors: " <<propSiPM_count <<endl;
  PrintTables();


  //Fill Histograms from global arrays.

  int i_rcut, i_tcut;
  
  //Loop over Cuts
  for(i_rcut=0; i_rcut <num_rcuts; i_rcut++){
    for(i_tcut=0; i_tcut<num_tcuts; i_tcut++){
      hist_efficiency_RT->Fill(IndexToValue(i_rcut, 'R'),IndexToValue(i_tcut, 'T'), double(efficiency_count[i_rcut][i_tcut])/propSiPM_count);
      // hist_efficiency_RT->Fill(IndexToValue(i_rcut, 'R'),IndexToValue(i_tcut, 'T'), double(efficiency_count[i_rcut][i_tcut]));
      hist_purity_RT->Fill(IndexToValue(i_rcut, 'R'),IndexToValue(i_tcut, 'T'), 1-double(fake_count[i_rcut][i_tcut])/accepted_count[i_rcut][i_tcut]); 
    }
  }
    
  //Make Pretty Plots
  
  // TGraph2D *dt = new TGraph2D(hist_efficiency_RT);
  
  PlotCreator2D(hist_efficiency_RT,"2D Efficiency Plot","R Cut", "T Cut", 0.03, 0.30, 0.01, 0.10,1,1,"colz");
  PlotCreator2D(hist_purity_RT,"2D Purity Plot","R Cut", "T Cut", 0.03, 0.3, 0.01, 0.10,1,1,"colz");
  
  //Make Rock Curve
  i_rcut=1;
  GraphRockCurve(i_rcut);

}






/*
 *Checks if there is a trigger above threshold,
 *within the R cut of the Propagated particle.
 *There is a limitation in only knowing how to handle SiPM sectors
 */

 bool HOMuon_TreeLoop_Efficiency::TriggerMatch(int i_part,int i_rcut, int i_tcut){
  
   double R_cut = IndexToValue(i_rcut, 'R');
   double T_cut = IndexToValue(i_tcut, 'T');
  //double energy_t =0.2;
  double deltaPhi, deltaEta, R;
  
  for(unsigned int i_trigger=0; i_trigger < Trigger_Energies->size(); i_trigger++){
    //Trigger must be above Threshold and in a SiPM Sector
    if(Trigger_IsaSiPMs->at(i_trigger) && Trigger_Energies->at(i_trigger) > T_cut){ 
      deltaPhi = WrapCheck(Propagator_Phis->at(i_part), Trigger_Phis->at(i_trigger));
      deltaEta = Propagator_Etas->at(i_part)-Trigger_Etas->at(i_trigger);
      R = sqrt(pow(deltaPhi,2)+pow(deltaEta,2));
      //cout << "deltaPhi " << deltaPhi << " deltaEta " << deltaEta << " R " << R << endl;
      //cout << R << endl;
      if(R < R_cut){
	return true;
      }
    }
  }
  
  return false;
 }

/*
 *A Trigger is accepted as a Muon Candidate, if it is in the SiPM sector,
 *and it has an energy above threshold.
 */
bool HOMuon_TreeLoop_Efficiency::IsAccepted(int i_trig, int i_tcut){
  if(Trigger_IsaSiPMs->at(i_trig)&& Trigger_Energies->at(i_trig)> IndexToValue(i_tcut, 'T')){
    return true;
  }else{
  return false;
  }
}

/*
 *A trigger is classified as a fake, if there is no
 *propagated muon (SiPMprop or not) within R. 
 */
bool HOMuon_TreeLoop_Efficiency::IsFake(int i_trig, int i_rcut){
  double R_cut = IndexToValue(i_rcut, 'R');
  double deltaPhi, deltaEta, R; 
  for(unsigned int i_part=0; i_part < Propagator_Phis->size(); i_part++){
    deltaPhi = WrapCheck(Propagator_Phis->at(i_part), Trigger_Phis->at(i_trig));
    deltaEta = Propagator_Etas->at(i_part)-Trigger_Etas->at(i_trig);
    R = sqrt(pow(deltaPhi,2)+pow(deltaEta,2));
    //cout << "deltaPhi " << deltaPhi << " deltaEta " << deltaEta << " R " << R << endl;
    //cout << R << endl;
    if(R < R_cut){
      return false;
    }
  }
  return true;
}

/*
 *For loops are used inside the tree looper, to test all the cuts.
 *This function returns the cut value, when given the integer index
 *of the cut, and the cut type.
 */

double HOMuon_TreeLoop_Efficiency::IndexToValue(int i, char cut_type){
  
  double value;

  switch(cut_type){
  case 'R':
    value = 0.03 + i*0.03;
    return value;
  case 'T':
    value = 0.01 + i*0.01;
    return value;
  default:
    value = 0.0;
    return value;
  }
}




void HOMuon_TreeLoop_Efficiency::PrintTables(){
  //Print out 2D table of efficiencies
  int i_tcut, i_rcut;
  
  cout << "Efficiency:" << endl;
  
  for(i_tcut=9; i_tcut >=0; i_tcut--){
    printf("     %1.2f:", IndexToValue(i_tcut,'T'));
    for(i_rcut=0; i_rcut<num_rcuts; i_rcut++){
      printf(" %1.3f", double(efficiency_count[i_rcut][i_tcut])/propSiPM_count);
      }
    printf("\n");
  }
   printf("Tcut/Rcut:");
  for(i_rcut=0; i_rcut <num_rcuts; i_rcut++){
    printf(" %1.3f", IndexToValue(i_rcut, 'R'));
  }
  printf("\n");

  cout << "1-FakeRate" << endl;

  for(i_tcut=9; i_tcut >=0; i_tcut--){
    printf("     %1.2f:", IndexToValue(i_tcut,'T'));
    for(i_rcut=0; i_rcut<num_rcuts; i_rcut++){
      printf(" %1.3f", 1-double(fake_count[i_rcut][i_tcut])/accepted_count[i_rcut][i_tcut]); 
      }
    printf("\n");
  }
   printf("Tcut/Rcut:");
  for(i_rcut=0; i_rcut <num_rcuts; i_rcut++){
    printf(" %1.3f", IndexToValue(i_rcut, 'R'));
  }
  printf("\n");

  /*
  cout <<"Accepted" << endl;


  for(i_tcut=0; i_tcut<num_tcuts;i_tcut++){
    cout << accepted_count[0][i_tcut] << "  ";  //Only need 1 row, accepted does not depend on R.
  }
  cout << endl <<endl;

  cout<<"Fakes" << endl;
  
  for(i_rcut=0; i_rcut <num_rcuts; i_rcut++){
    for(i_tcut=0; i_tcut<num_tcuts;i_tcut++){
      printf("%3i  ", fake_count[i_rcut][i_tcut]);
    }
    cout << endl;
  }
  */
}

/*
 *For a chosen R-Cut
 *Plots efficiency vs purity, paramaterized by
 *the threshold value.
 */

void HOMuon_TreeLoop_Efficiency::GraphRockCurve(int i_rcut){
  double purity[num_tcuts], efficiency[num_tcuts];
  for(int i_tcut=0; i_tcut<num_tcuts; i_tcut++){
    efficiency[i_tcut] = double(efficiency_count[i_rcut][i_tcut])/propSiPM_count;
    purity[i_tcut] =  1-double(fake_count[i_rcut][i_tcut])/accepted_count[i_rcut][i_tcut]; 
  }
  
  TCanvas *c = new TCanvas("c_RockCurve","c_RockCurve",600,500);
  
  graph_rock = new TGraph(num_tcuts,purity, efficiency);
  graph_rock->GetYaxis()->SetRangeUser(0.5,0.8);
  graph_rock->Draw("AC*");
  

}
  
/*
 * Makes 2D Histograms
 */
void HOMuon_TreeLoop_Efficiency::PlotCreator2D(TH2F* hist, const char* title, const char* xAxis, const char* yAxis, 
					    double xMin, double xMax,double yMin, double yMax,
					    int num_xbinmerge, int num_ybinmerge, const char * type){

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
  
  gStyle->SetOptStat(0); //Remove Stat Box
  
  TCanvas *c = new TCanvas(Form("c_%s",title),Form("c_%s",title),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  
  gPad->SetGrid();
  
  hist->Draw(type);
  
  c->SaveAs(Form("../Plots/SwitchtoTree_Plots/%s.png",title));
  //c->Print(Form("p_%s.png",name));                                                                                                                                        
  //c->Print(Form("p_%s.eps",name));                                                                                                                                        
  //c->Print(Form("p_%s.pdf",name));                                                                                                                                        
  return;
}

double HOMuon_TreeLoop_Efficiency::WrapCheck(double phi1, double phi2){
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
