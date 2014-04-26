/*
 * Created  by Christopher Anelli 3.10.2014
 * Continue using an All SiPM Detector.
 * Back an Front Surfaces set by the caloGeometry
 * are now propagated to.
 */

#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TGraph.h"
#include "iostream"
#include <vector>
#include "plotParameters.h"


//#include "HOMuon_TreeLoop_FrontBack_Plotter.h"


//#define PREFIX="L1TMuonSingleMu_14Pt_PostLS1_caloInspector.root"

//#define TREE_LOC="L1TMuonCaloInsp/ho_muon_tree"

/*
 *Define (and easy to modify constants)
 */

_plotParameters plotParameters;


void HOMuon_Version_7_0_0_Plotter(){  
  
  std::stringstream file;
  file << plotParameters.ROOTPATH << plotParameters.PREFIX << "_caloInspector.root";


  TFile* inFile = TFile::Open(file.str().c_str());
  //std::cout << inFile << std::endl;
  TTree* T = (TTree*)inFile->Get(plotParameters.TREELOC);
  cout<<T << endl;
  //gRoot->ProcessLine(".L HOMuon_TreeLoop_FrontBack_Plotter.C+");
  T->Process("HOMuon_TreeLoop_Version_7_0_0_Plotter.C+");
  cout << "working" << endl;
};
  
