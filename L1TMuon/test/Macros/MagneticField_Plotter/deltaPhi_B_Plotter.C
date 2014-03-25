#include "TFile.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "TH2F.h"
#include "iostream"
#include "iomanip"

void plotCreator(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		   double xMin, double xMax,
		   double yMin, double yMax);

void plotfitDeltaPhi(const char * file = 
			  "../RootFiles/L1ITMuPM_caloInspector_New.root") {

  TFile * inFile = TFile::Open(file);

  //std::cout << inFile << std::endl;

  //Delta Phi v Pt RPC Generator Layer 1
  //Look at only muons or electrons
  plotCreator(inFile, "L1TMuonCaloInsp/dphipt_truth-rpc_Layer1",
	      "P_{t}", "#Delta #phi Truth-RPC",
	      0.0, 200.0,
	      -0.0, 0.25);

}

void plotCreator(TFile* file, const char* name,
		 const char* xAxis, const char* yAxis,
		   double xMin, double xMax,
		   double yMin, double yMax) {

  //std::cout << file << std::endl;
  std::cout << name << std::endl;


  TH2F* hist = (TH2F*)file->Get(name);

  //std::cout << hist << std::endl;

  hist->Sumw2(); // make sure errors are correct before rebinning
  hist->SetTitle(""); // empty the title
  hist->RebinX(5);
  hist->RebinY(5);
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
  //hist->SetLineColor(kBlue);
  
  TCanvas *c = new TCanvas(Form("c_%s",name),Form("c_%s",name),600,500);
  c->SetFillColor(0);
  c->SetBorderSize(0);
  hist->Draw();

  TF1 *hfit = new TF1("hfit", "(3.8*[0])/(2*x*(1.0e9/3.0e8))",15, 200);
  hfit->SetParameter(0,4);
  hfit->SetRange(15, 0, 200, 0.2);
  
  hist->Fit("hfit");

  cout << "The parameter is: " << hfit->GetParameter(0) << endl;
  cout << "With an error of: " << hfit->GetParError(0) << endl;

  hfit->SetLineWidth(2);
  hfit->SetLineColor(kRed);

  hfit->Draw("same");

  TPaveText* pave = new TPaveText(0.5, 0.4, 0.75, 0.5,"NDC");
  pave->SetTextFont(42);
  std::stringstream radius_strstream;
  radius_strstream <<std::fixed<<std::setprecision(2) <<"Radius = " << hfit->GetParameter(0) << "#pm " << hfit->GetParError(0);
  // pave->AddText("Hello");
  pave->AddText(radius_strstream.str().c_str());
  pave->Draw("same");

  //  c->Print(Form("p_%s.png",name));
  //c->Print(Form("p_%s.eps",name));
  //c->Print(Form("p_%s.pdf",name));
  return;

}
