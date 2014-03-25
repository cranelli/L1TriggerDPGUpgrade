/*
 * Created by Christopher Anelli 12/11/2013
 * Code to plot just the efficiency of the HO
 * in detecting muons.
 */

#include "TFile.h"
#include "iostream"
#include "HOMuon_TreeLoop_Efficiency.h"

//void HOMuon_Efficiency(const char *file, const char* tree_loc);
/*
void HOMuon_Efficiency(const char *file =
		       "../RootFiles/L1ITMuonSingleMu_14Pt_caloInspector_New.root",
		       const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree");
void CalcEff(TTree * T, float del_R, float Threshold);
*/

void HOMuon_Efficiency(const char *file =
		       "/home/cranelli/HO_Muon/CMSSW_6_2_0_pre5/src/L1TriggerDPGUpgrade/L1TMuon/test/RootFiles/L1ITMuonSingleMu_14Pt_caloInspector_New.root",
		       const char* tree_loc = "L1TMuonCaloInsp/ho_muon_tree") {
  TFile* inFile = TFile::Open(file);
  TTree* T = (TTree*)inFile->Get(tree_loc);
  T->Process("HOMuon_TreeLoop_Efficiency.C+");

  /*
  float Threshold = 0.2;

  for(int i=1; i<=15;i++){
    float del_R= 0.1*i;
    cout << del_R << endl;
    //float Efficiency=CalcEff(T,del_R, Threshold);
    //T->Process("HOMuon_TreeLoop_Efficiency.C+");
    //cout<< Efficiency << endl;
  }
  */
    cout << "working" <<endl;
}

/*
void CalcEff(TTree * T, float del_R, float Threshold){
  cout << T->GetEntries() << endl;
}
*/
