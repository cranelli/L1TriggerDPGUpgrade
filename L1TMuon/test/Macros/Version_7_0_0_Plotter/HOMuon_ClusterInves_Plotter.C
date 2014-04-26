#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>

//#include "SimDataFormats/Track/interface/SimTrack.h"


#define FILE "/home/cranelli/HO_Muon/CMSSW_7_0_0/src/L1TriggerDPGUpgrade/L1TMuon/test/RootFiles/SingleMu14Pt_PostLS1_Barrel_GEN_SIM_DIGI_L1_RECO.root"

#define TREE_LOC "Events"

void HOMuon_ClusterInves_Plotter() {
  
  TFile* inFile = TFile::Open(FILE);
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(TREE_LOC);
  cout<< T << endl;
  
  //T->Process("HOMuon_TreeLoop_ClusterInves_Plotter.C+");
  
  //  TObjArray ListOfBranches = T->GetListofBranches();
  // cout << ListofBranches.size() << endl;
  
  TBranch *b_SimTracks_Present = T->GetBranch("SimTracks_g4SimHits__L1.present");
  b_SimTracks_Present->Print();

  TBranch *b_SimTracks_obj = T->GetBranch("SimTracks_g4SimHits__L1.obj");

  /*
  int entry =0;

  vector<SimTrack> SelectedTrackVector= b_SimTracks_Obj->GetEntry(entry);

  int vertex_entry = 0;

  SimTrack *SelectedTrack = SelectedTrackVector->at(vertex_entry);
  
  int SelectedPID = SelectedTrack.thePID;
  */

  //cout << SelectedTrackVector[vertex_entry] << endl;
  
  //cout << SelectedTrack << endl;

  cout << b_SimTracks_obj << endl;

  //cout << b_SimTracks_obj->thePID[0] << endl;

  T->Draw("SimTracks_g4SimHits__L1.obj.thePID[0]", "", "",1,0);

  //T->Draw("SimTracks_g4SimHits__L1.obj.thePID", "", "",1,767);

  //T->Draw("SimTracks_g4SimHits__L1.obj.thePID", "", "",1,721);


  //std::stringstream variable_name;
  // variable_name << "SimTracks_g4_SimHits_L1_obj";
  
  //T->Draw(variable_name.str().c_str());
  
  cout << "working" << endl;

}

  
