#include <stdio>
#include <stdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "TGraphAsymmErrors.h"
#include "TMultiGraph.h"
#include "TLegend.h"

using namespace std;

Double_t findIntersection(UInt_t nxs, Double_t *xs, Double_t *ys) {
  UInt_t pos = 0;
  ys[0] -= 1;
  for(UInt_t i=1; i<nxs; ++i) {
    ys[i] -= 1;
    if( ys[i-1]*ys[i]<0. ) {
      pos = i;
      break;
    }
  }

  if(pos>0) {
    Double_t tga = (ys[pos] - ys[pos-1]) / (xs[pos] - xs[pos-1]); // can be negative
    Double_t deltax = ys[pos]/tga;                                // must be positive
    return (xs[pos] - deltax);
  }

  return 999.;
}

void makeBetterLimitPlots_senka_noUnc_f5g_8TeV() {

  string folder = "limits_f5g_8TeV_EWK";
  //string dbpars[] = {"-0.02", "-0.01", "-0.005", "-0.002", "0", "0.002", "0.005", "0.01", "0.02"}; 
  string dbpars[] = {"-0.007", "-0.006", "-0.005", "-0.004", "-0.003", "-0.002", "0.002", "0.003", "0.004", "0.005", "0.006", "0.007"}; 
  string parName = "f_{5}^{#gamma}";
  bool is7TGeV = false; 
  bool is8TGeV = true; 
  bool savePlots = false; 
  bool normalizePlot = false;

  savePlots = true; 
  normalizePlot = true;

  if(is7TGeV && is8TGeV) normalizePlot = true; // doesn't make sense to use xs in combination 7+8 TeV

  UInt_t nPts = sizeof(dbpars)/sizeof(string);
  const UInt_t npts(nPts);

  ///
  /// Cross sections pp -> ZZ -> 2l2n (Z pt > 12 GeV/c): MCFM, NLO (aTGC component rescaled as SM part - ???)
  /// 
  Double_t *xsecs;

  // 
  // Will be rescaled to inclusive cross sections pp -> ZZ (Z pt > 40 GeV/c) later, using the following SF
  Double_t brchRtSF = ( is7TGeV ? 0.038647521 : 0.038701987 ); // 3 lepton flavours
  brchRtSF *= (2.0/3.0);                                       // 2 lepton flavours
  Double_t zptCutSF = ( is7TGeV ? 1.183200727 : 1.170412833 ); // pt(Z) > 12 GeV/c -> 40 GeV/c

  // 
  // 7 TeV - (7 points: no +/-0.002)
  //  f4z, f5z, f4g, f5g
  Double_t xsecs_7TeV_f4z[7] = {0.222596, 0.208482, 0.208411, 0.208196, 0.207086, 0.210722, 0.267042};
  Double_t xsecs_7TeV_f5z[7] = {0.221243, 0.210692, 0.208614, 0.208196, 0.208139, 0.209837, 0.268086};
  Double_t xsecs_7TeV_f4g[7] = {0.216067, 0.207607, 0.20686,  0.208196, 0.207122, 0.210825, 0.260432};
  Double_t xsecs_7TeV_f5g[7] = {0.217617, 0.20807,  0.207253, 0.208196, 0.205941, 0.211026, 0.258057};

  //
  // 8 TeV - (9 points, including +/-0.002)
  //  f4z, f5z, f4g, f5g
  Double_t xsecs_8TeV_f4z[9] = {0.299504, 0.26492,  0.256532, 0.254238, 0.253172, 0.254127, 0.255632, 0.265111, 0.297230};
  Double_t xsecs_8TeV_f5z[9] = {0.298783, 0.265134, 0.25754,  0.254921, 0.253172, 0.254454, 0.255576, 0.263578, 0.298392};
  Double_t xsecs_8TeV_f4g[9] = {0.286924, 0.264407, 0.2526,   0.254859, 0.253172, 0.252949, 0.256586, 0.261706, 0.289872};
  Double_t xsecs_8TeV_f5g[9] = {0.286234, 0.262752, 0.255762, 0.253992, 0.253172, 0.253869, 0.257247, 0.261983, 0.287229};

  if(is7TGeV) {
    if     ( parName.compare("f_{4}^{Z}")      == 0 ) xsecs = xsecs_7TeV_f4z; 
    else if( parName.compare("f_{5}^{Z}")      == 0 ) xsecs = xsecs_7TeV_f5z; 
    else if( parName.compare("f_{4}^{#gamma}") == 0 ) xsecs = xsecs_7TeV_f4g; 
    else if( parName.compare("f_{5}^{#gamma}") == 0 ) xsecs = xsecs_7TeV_f5g; 
    else {
      std::cout << "ERROR! Unknown aTGC parameter: " 
		<< parName.c_str() << std::endl;
      return;
    }
  }
  else {
    if     ( parName.compare("f_{4}^{Z}")      == 0 ) xsecs = xsecs_8TeV_f4z; 
    else if( parName.compare("f_{5}^{Z}")      == 0 ) xsecs = xsecs_8TeV_f5z; 
    else if( parName.compare("f_{4}^{#gamma}") == 0 ) xsecs = xsecs_8TeV_f4g; 
    else if( parName.compare("f_{5}^{#gamma}") == 0 ) xsecs = xsecs_8TeV_f5g; 
    else {
      std::cout << "ERROR! Unknown aTGC parameter: " 
		<< parName.c_str() << std::endl;
      return;
    }
  }


  Double_t xPts[npts]; 
  Double_t obs[npts]; 
  Double_t obserr[npts]; 
  Double_t m2s[npts]; 
  Double_t m1s[npts]; 
  Double_t exp[npts]; 
  Double_t p1s[npts]; 
  Double_t p2s[npts]; 

  Double_t xPts_l[npts]; 
  Double_t obs_l[npts]; 
  Double_t obserr_l[npts]; 
  Double_t obsm_l[npts]; 
  Double_t obsp_l[npts]; 
  Double_t m2s_l[npts]; 
  Double_t m1s_l[npts]; 
  Double_t exp_l[npts]; 
  Double_t p1s_l[npts]; 
  Double_t p2s_l[npts]; 

  Double_t xPts_r[npts]; 
  Double_t obs_r[npts]; 
  Double_t obserr_r[npts]; 
  Double_t obsm_r[npts]; 
  Double_t obsp_r[npts]; 
  Double_t m2s_r[npts]; 
  Double_t m1s_r[npts]; 
  Double_t exp_r[npts]; 
  Double_t p1s_r[npts]; 
  Double_t p2s_r[npts]; 

  Double_t miny = 0.9;
  Double_t maxy = 1.1;

  for(UInt_t i=0; i<npts; ++i) {

    // Rescaling cross sections
    //  - from exclusive to inclusive
    //  - from pt(Z)>12 to pt(Z)>40
    //xsecs[i] /= brchRtSF;
    //xsecs[i] /= zptCutSF;

    if(dbpars[i].compare("0") == 0) {
      xPts[i] = 0.;
      obs[i] = 999999.;
      m2s[i] = 999999.;
      m1s[i] = 999999.;
      exp[i] = 999999.;
      p1s[i] = 999999.;
      p2s[i] = 999999.;
      continue;
    }
    xPts[i] = atof(dbpars[i].c_str());

    TFile myfile( (folder+"/"+dbpars[i]+"/higgsCombine_senkanoUnc.Asymptotic.mH120.root").c_str() ); 
    if ( myfile.IsOpen() && !myfile.IsZombie() ) {

      Double_t lim, limerr; 
      TTree *t = (TTree*)myfile.Get("limit"); 
      t->SetBranchAddress("limit",    &lim);
      t->SetBranchAddress("limitErr", &limerr);

      // Expected  2.5%
      t->GetEntry(0); 
      m2s[i] = lim;
      if(!normalizePlot) m2s[i] *= xsecs[i]; 
      if( m2s[i]<miny ) miny = m2s[i];

      // Expected  16.0%
      t->GetEntry(1); 
      m1s[i] = lim;
      if(!normalizePlot) m1s[i] *= xsecs[i]; 

      // Expected 50.0%
      t->GetEntry(2); 
      exp[i] = lim;
      if(!normalizePlot) exp[i] *= xsecs[i]; 

      // Expected 84.0%
      t->GetEntry(3); 
      p1s[i] = lim;
      if(!normalizePlot) p1s[i] *= xsecs[i]; 

      // Expected 97.5%
      t->GetEntry(4); 
      p2s[i] = lim;
      if(!normalizePlot) p2s[i] *= xsecs[i]; 
      if( p2s[i]>maxy ) maxy = p2s[i];

      // Observed limit
      t->GetEntry(5); 
      obs[i] = lim;
      obserr[i] = limerr;
      if(!normalizePlot) {obs[i] *= xsecs[i]; obserr[i] *= xsecs[i];}
      if( obs[i]-obserr[i]<miny ) miny = obs[i]-obserr[i];
      if( obs[i]+obserr[i]>maxy ) maxy = obs[i]+obserr[i];
      if(!normalizePlot) {
	if( xsecs[i]<miny ) miny = xsecs[i];
	if( xsecs[i]>maxy ) maxy = xsecs[i]; 
      }
    }
    myfile.Close();
  }

  UInt_t negpts(0), pospts(0); 

  for(UInt_t i=0; i<npts; ++i) {
    if(xPts[i]<0) {
      xPts_l[negpts] = xPts[i];
      m2s_l[negpts] = exp[i] - m2s[i];
      m1s_l[negpts] = exp[i] - m1s[i];
      exp_l[negpts] = exp[i];
      p1s_l[negpts] = p1s[i] - exp[i];
      p2s_l[negpts] = p2s[i] - exp[i];
      obs_l[negpts] = obs[i];
      obserr_l[negpts] = obserr[i];
      obsm_l[negpts] = obs[i] - obserr[i];
      obsp_l[negpts] = obs[i] + obserr[i];
      ++negpts;
    }
    else if(xPts[i]>0) {
      xPts_r[pospts] = xPts[i];
      m2s_r[pospts] = exp[i] - m2s[i];
      m1s_r[pospts] = exp[i] - m1s[i];
      exp_r[pospts] = exp[i];
      p1s_r[pospts] = p1s[i] - exp[i];
      p2s_r[pospts] = p2s[i] - exp[i];
      obs_r[pospts] = obs[i];
      obserr_r[pospts] = obserr[i];
      obsm_r[pospts] = obs[i] - obserr[i];
      obsp_r[pospts] = obs[i] + obserr[i];
      ++pospts;
    }
    else {}
  }

  TGraph *grObs_l = new TGraph(negpts, xPts_l, obs_l);
  grObs_l->SetLineWidth(2);
  grObs_l->SetLineStyle(1);
  //grObs_l->SetMarkerStyle(20);
  grObs_l->SetMarkerSize(0.);

  TGraph *grObs_r = new TGraph(pospts, xPts_r, obs_r);
  grObs_r->SetLineWidth(2);
  grObs_r->SetLineStyle(1);
  //grObs_r->SetMarkerStyle(20);
  grObs_r->SetMarkerSize(0.);

  TGraphErrors *grObsErr_l = new TGraphErrors(negpts, xPts_l, obs_l, 0, obserr_l);
  grObs_l->SetFillColor(kGray);
  grObs_l->SetFillStyle(3002);

  TGraphErrors *grObsErr_r = new TGraphErrors(pospts, xPts_r, obs_r, 0, obserr_r);
  grObs_r->SetFillColor(kGray);
  grObs_r->SetFillStyle(3002);

  TGraph *grExp_l = new TGraph(negpts, xPts_l, exp_l);
  grExp_l->SetLineWidth(2);
  grExp_l->SetLineStyle(2);

  TGraph *grExp_r = new TGraph(pospts, xPts_r, exp_r);
  grExp_r->SetLineWidth(2);
  grExp_r->SetLineStyle(2);

  TGraphAsymmErrors *gr1s_l = new TGraphAsymmErrors(negpts, xPts_l, exp_l, 0, 0, m1s_l, p1s_l);
  gr1s_l->SetFillColor(kGreen);

  TGraphAsymmErrors *gr1s_r = new TGraphAsymmErrors(pospts, xPts_r, exp_r, 0, 0, m1s_r, p1s_r);
  gr1s_r->SetFillColor(kGreen);

  TGraphAsymmErrors *gr2s_l = new TGraphAsymmErrors(negpts, xPts_l, exp_l, 0, 0, m2s_l, p2s_l);
  gr2s_l->SetFillColor(kYellow);

  TGraphAsymmErrors *gr2s_r = new TGraphAsymmErrors(pospts, xPts_r, exp_r, 0, 0, m2s_r, p2s_r);
  gr2s_r->SetFillColor(kYellow);

  TMultiGraph *mg = new TMultiGraph();
  mg->Add(gr2s_l);
  mg->Add(gr2s_r);
  mg->Add(gr1s_l);
  mg->Add(gr1s_r);
  mg->Add(grObsErr_l);
  mg->Add(grObsErr_r);
  mg->Add(grExp_l, "PL");
  mg->Add(grExp_r, "PL");
  mg->Add(grObs_l, "PL");
  mg->Add(grObs_r, "PL");

  TCanvas *canv = new TCanvas("canv", "limits canvas", 600., 600.);
  canv->cd();
  canv->SetGridx();
  canv->SetGridy();
  canv->SetLogy();
  mg->Draw("pa3");
  Double_t deltaZ = maxy-miny;
  //miny -= 0.1*deltaZ;
  //maxy += 0.1*deltaZ;
  miny /= 1.5;
  maxy *= 2.0;
  mg->SetMinimum(miny);
  mg->SetMaximum(maxy);

  //mg->SetMinimum(-1.);
  mg->GetXaxis()->SetTitle(parName.c_str());
  mg->GetXaxis()->SetTitleSize(0.06);
  if(normalizePlot) mg->GetYaxis()->SetTitle("95% CL limit on #sigma/#sigma_{SM+aTGC}");
  else              mg->GetYaxis()->SetTitle("95% CL limit on #sigma#timesBR [fb]");
  //else              mg->GetYaxis()->SetTitle("95% CL limit on #sigma [fb]");
  mg->GetYaxis()->SetTitleSize(0.06);

  TGraph *grXS; 
  TLine *ll; 
  if(!normalizePlot) {
    grXS = new TGraph(npts, xPts, xsecs);
    grXS->SetLineWidth(2);
    grXS->SetLineColor(kRed);
    grXS->Draw("Lsame"); 
  }
  else {
    ll = new TLine(xPts[0], 1., xPts[npts-1], 1.);
    ll->SetLineWidth(2);
    ll->SetLineColor(kRed);
    ll->Draw();
  }

  float posx1 = 0.17;
  float posx2 = 0.45;
  float posy1 = 0.77; 
  float posy2 = 0.92;
  if(!normalizePlot) posy1 -= 0.25*(posy2-posy1);
  TLegend *leg = new TLegend(posx1, posy1, posx2, posy2);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->SetBorderSize(0);
  leg->SetLineColor(0);

  if(!normalizePlot) leg->AddEntry(grXS, "Theory: SM + aTGC", "L");
  leg->AddEntry(grObs_l, "Observed limit", "PL");
  leg->AddEntry(grExp_l, "Expected limit", "PL");
  leg->AddEntry(gr1s_l, "Expected #pm 1#sigma", "F");
  leg->AddEntry(gr2s_l, "Expected #pm 2#sigma", "F");
  //leg->AddEntry(gr1s_l, "1#sigma uncertainty", "F");
  //leg->AddEntry(gr2s_l, "2#sigma uncertainty", "F");

  leg->Draw();

  TPaveText* T = ( is7TGeV && is8TGeV ? 
		   new TPaveText(0.17,0.995,0.98,0.935, "NDC") : 
		   new TPaveText(0.45,0.995,0.98,0.935, "NDC") ); 
  T->SetFillColor(0);
  T->SetFillStyle(0);  
  T->SetLineColor(0);
  T->SetTextAlign(32);

  // For 2012 A,B,C (no D)
  //if      (  is7TGeV &&  is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=7 TeV, #scale[0.5]{#int} L=5.1 fb^{-1}; #sqrt{s}=8 TeV, #scale[0.5]{#int} L=12.2 fb^{-1}");
  //else if (  is7TGeV && !is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=7 TeV, #scale[0.5]{#int} L=5.1 fb^{-1}");
  //else if ( !is7TGeV &&  is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=8 TeV, #scale[0.5]{#int} L=12.2 fb^{-1}");
  // For full 2012 (A,B,C,D)
  if      (  is7TGeV &&  is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=7 TeV, #scale[0.5]{#int} L=5.1 fb^{-1}; #sqrt{s}=8 TeV, #scale[0.5]{#int} L=19.6 fb^{-1}");
  else if (  is7TGeV && !is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=7 TeV, #scale[0.5]{#int} L=5.1 fb^{-1}");
  else if ( !is7TGeV &&  is8TGeV ) T->AddText("CMS preliminary, #sqrt{s}=8 TeV, #scale[0.5]{#int} L=19.6 fb^{-1}");
  else { std::cout << "What energy is this???" << std::endl; return; }

  T->Draw("same");

  Double_t inters1 = findIntersection(negpts, xPts_l, obs_l); 
  Double_t errMin1 = findIntersection(negpts, xPts_l, obsp_l); errMin1 -= inters1; 
  Double_t errPlu1 = findIntersection(negpts, xPts_l, obsm_l); errPlu1 -= inters1; 

  Double_t inters2 = findIntersection(pospts, xPts_r, obs_r); 
  Double_t errMin2 = findIntersection(pospts, xPts_r, obsm_r); errMin2 -= inters2; 
  Double_t errPlu2 = findIntersection(pospts, xPts_r, obsp_r); errPlu2 -= inters2; 

  Double_t inters1_exp = findIntersection(negpts, xPts_l, exp_l); 
  //  Double_t errMin1_exp = findIntersection(negpts, xPts_l, obsp_l); errMin1_exp -= inters1_exp; 
  //  Double_t errPlu1_exp = findIntersection(negpts, xPts_l, obsm_l); errPlu1_exp -= inters1_exp; 

  Double_t inters2_exp = findIntersection(pospts, xPts_r, exp_r); 
  //  Double_t errMin2_exp = findIntersection(pospts, xPts_r, obsm_r); errMin2_exp -= inters2_exp; 
  //  Double_t errPlu2_exp = findIntersection(pospts, xPts_r, obsp_r); errPlu2_exp -= inters2_exp; 

  if(normalizePlot) {
    std::cout << "Excluded: "; 
    std::cout << parName;
    std::cout.precision(8);
    std::cout << " < " << inters1 << " -" << fabs(errMin1) << " +" << errPlu1 << std::endl; 
    std::cout << "          "; 
    std::cout << parName;
    std::cout << " > " << inters2 << " -" << fabs(errMin2) << " +" << errPlu2 << std::endl; 
    std::cout << "Expected: "; 
    std::cout << parName;
    std::cout.precision(8);
    std::cout << " < " << inters1_exp  << std::endl; 
    std::cout << "          "; 
    std::cout << parName;
    std::cout << " > " << inters2_exp  << std::endl; 

    //T = new TPaveText(0.47,0.92,0.97,0.82, "NDC");
    T = new TPaveText(0.32,0.22,0.82,0.12, "NDC");
    T->SetFillColor(0);
    T->SetFillStyle(0);
    T->SetLineColor(0);
    T->SetLineWidth(0);
    T->SetBorderSize(0);
    T->SetTextColor(kRed);
    T->SetTextAlign(32);
    char buff[199];
    //sprintf(buff, "%.6f^{+%.1E}_{-%.1E} < %s < %.6f^{+%.1E}_{-%.1E}", inters1, errPlu1, fabs(errMin1), parName.c_str(), inters2, errPlu2, fabs(errMin2));
    sprintf(buff, "%.1E < %s < %.1E", inters1, parName.c_str(), inters2);
    TPRegexp re="E-*0*[1-9]*";
    TString buffstr(buff);
    //std::cout << buffstr.Data() << std::endl;
    while( buffstr.Index(re)>=0 ) {
      TString tochange = buffstr(re); 
      TString changed  = tochange;
      changed.ReplaceAll("0", ""); 
      changed.ReplaceAll("E", " #upoint 10^{"); 
      changed += "}";
      buffstr.ReplaceAll(tochange, changed); 
    }
    //std::cout << buffstr.Data() << std::endl;
    T->AddText(buffstr.Data());
    T->Draw("same");
  }

  if( savePlots ) {
    string plotName = parName; 
    string toReplace[] = {"_", "{", "}", "#", "^"};
    UInt_t nvars = sizeof(toReplace)/sizeof(string);
    for(UInt_t k=0; k<nvars; ++k) {
      int poschar = plotName.find(toReplace[k].c_str());
      while( poschar>-1 ) {
	plotName.replace(poschar, 1, "");
	poschar = plotName.find(toReplace[k].c_str());
      }
    }
    plotName += "_limits";
    if(normalizePlot) plotName += "_norm";
    else              plotName += "_xsec";
    if(is7TGeV) plotName += "_senka_noUnc_7TeV";
    if(is8TGeV) plotName += "_senka_noUnc_8TeV";
    canv->SaveAs( (plotName+".png").c_str() );
    canv->SaveAs( (plotName+".pdf").c_str() );
    canv->SaveAs( (plotName+".root").c_str() );
    canv->SaveAs( (plotName+".C").c_str() );

    mg->SetMaximum(10.); 
    canv->SaveAs( (plotName+"_zoom.png").c_str() );
    canv->SaveAs( (plotName+"_zoom.pdf").c_str() );
    canv->SaveAs( (plotName+"_zoom.root").c_str() );
    canv->SaveAs( (plotName+"_zoom.C").c_str() );    
  }

  return;
}

