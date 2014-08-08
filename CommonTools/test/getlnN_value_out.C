void getlnN_value_out(double theta, double kappaL, double kappaH){


  gROOT->ProcessLine(".L /afs/cern.ch/work/s/senka/aTGC_WV_7TeV/CMSStyle.C");
  gROOT->ProcessLine("CMSStyle()");
  gROOT->LoadMacro("/afs/cern.ch/work/s/senka/aTGC_WV_7TeV/CMSStyle.C");
  CMSStyle();

	double fja=0.;

	fja=0.5*(log(kappaH)+log(kappaL))+(12.*theta*theta*theta*theta*theta -10.*theta*theta*theta+3.75*theta)*0.5*(log(kappaH)-log(kappaL));

	double final=0.;
	final=exp(theta*fja);
	cout<< final << endl;

	double x=theta;
	double logKhi =  log(kappaH);
	double logKlo = -log(kappaL);
	double avg = 0.5*(logKhi + logKlo); 
	double halfdiff = 0.5*(logKhi - logKlo);
	double twox = x+x, twox2 = twox*twox;
	double alpha = 0.125 * twox * (twox2 * (3*twox2 - 10.) + 15.);
	double ret = avg + alpha*halfdiff;

	cout <<exp(theta*ret) << endl;


	TH1F * histo_0p9and1p1=new TH1F("histo_0p9and1p1","histo_0p9and1p1",200,-4.,4.);
	TH1F * histo_0p8and1p2=new TH1F("histo_0p8and1p2","histo_0p8and1p2",200,-4.,4.);
	TH1F * histo_0p6and1p4=new TH1F("histo_0p6and1p4","histo_0p6and1p4",200,-4.,4.);
	for (int i=1;i<30000;i++){

	  kappaH=1.2;
	  kappaL=0.8;

	  double x_histo=i*0.0002-2.;
	  theta=x_histo;
	  double y_histo=0.;
	  double x=x_histo;
	  double logKhi =  log(kappaH);
	  double logKlo = -log(kappaL);
	  double avg = 0.5*(logKhi + logKlo), halfdiff = 0.5*(logKhi - logKlo);
	  double twox = x+x, twox2 = twox*twox;
	  double alpha = 0.125 * twox * (twox2 * (3*twox2 - 10.) + 15.);
	  double ret = avg + alpha*halfdiff;
	  y_histo=exp(theta*ret);
	  histo_0p8and1p2->SetBinContent(histo_0p8and1p2->FindBin(x_histo),y_histo);
	  
	  //	  cout << x_histo<<" "<< y_histo << endl;
	  kappaH=1.4;
	  kappaL=0.6;

	  x_histo=i*0.0002-2.;
	  y_histo=0.;
	  x=x_histo;
	  logKhi =  log(kappaH);
	  logKlo = -log(kappaL);
	  avg = 0.5*(logKhi + logKlo), halfdiff = 0.5*(logKhi - logKlo);
	  twox = x+x, twox2 = twox*twox;
	  alpha = 0.125 * twox * (twox2 * (3*twox2 - 10.) + 15.);
	  ret = avg + alpha*halfdiff;
	  y_histo=exp(theta*ret);
	  histo_0p6and1p4->SetBinContent(histo_0p6and1p4->FindBin(x_histo),y_histo);
	  
	  kappaH=1.1;
	  kappaL=0.9;

	  x_histo=i*0.0002-2.;
	  y_histo=0.;
	  x=x_histo;
	  logKhi =  log(kappaH);
	  logKlo = -log(kappaL);
	  avg = 0.5*(logKhi + logKlo), halfdiff = 0.5*(logKhi - logKlo);
	  twox = x+x, twox2 = twox*twox;
	  alpha = 0.125 * twox * (twox2 * (3*twox2 - 10.) + 15.);
	  ret = avg + alpha*halfdiff;
	  y_histo=exp(theta*ret);
	  histo_0p9and1p1->SetBinContent(histo_0p9and1p1->FindBin(x_histo),y_histo);
	  

	}

	histo_0p9and1p1->SetTitle(0);
	histo_0p8and1p2->SetTitle(0);
	histo_0p6and1p4->SetTitle(0);

	histo_0p6and1p4->SetLineColor(2);
	histo_0p6and1p4->GetYaxis()->SetTitle("yield change");
	histo_0p6and1p4->GetXaxis()->SetTitle("#theta");
	histo_0p6and1p4->SetTitle(0);

	TCanvas *c1=new TCanvas("c1","c1",600,600);
	c1->cd();

	histo_0p6and1p4->Draw();
	histo_0p8and1p2->Draw("same");
	histo_0p9and1p1->SetLineColor(3);
	histo_0p9and1p1->Draw("same");

    TLegend *leg = new TLegend(0.2, 0.75, 0.4, 0.9);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->SetShadowColor(0);
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.03);
   leg->AddEntry(histo_0p9and1p1, "kappaL=0.9; kappaH=1.1","l");
   leg->AddEntry(histo_0p8and1p2, "kappaL=0.8; kappaH=1.2","l");
   leg->AddEntry(histo_0p6and1p4, "kappaL=0.6; kappaH=1.4","l");
   leg->Draw();


   TH1F * h_yield_0p9and1p1=new TH1F("h_yield_0p9and1p1","h_yield_0p9and1p1",50,-0.2,1.5);
   TH1F * h_yield_0p8and1p2=new TH1F("h_yield_0p8and1p2","h_yield_0p8and1p2",50,-0.2,1.5);
   TH1F * h_yield_0p6and1p4=new TH1F("h_yield_0p6and1p4","h_yield_0p6and1p4",50,-0.2,1.5);
	TH1F * h_gauss=new TH1F("h_gauss","h_gauss",100,-5.,5.);
	gRandom = new TRandom3();	
	for (int i=1;i<10000000;i++){
	  TRandom3 r;
	  // generate a gaussian distributed number with mu=0, sigma=1 (default values)
	  double x1 = r.Gaus();
	  //	  hist->Fill(gRandom->Gaus(65.0, 5.0));
	  //	  double theta_i = r.Gaus(0,1);    // use mu = 10, sigma = 3;
	  double theta_i = gRandom->Gaus(0., 0.5);    // use mu = 10, sigma = 3;
	  h_gauss->Fill(theta_i);
	  double yield_0p9and1p1=histo_0p9and1p1->GetBinContent(histo_0p9and1p1->FindBin(theta_i));
	  h_yield_0p9and1p1->Fill(yield_0p9and1p1);
	  double yield_0p8and1p2=histo_0p8and1p2->GetBinContent(histo_0p8and1p2->FindBin(theta_i));
	  h_yield_0p8and1p2->Fill(yield_0p8and1p2);
	  double yield_0p6and1p4=histo_0p6and1p4->GetBinContent(histo_0p6and1p4->FindBin(theta_i));
	  h_yield_0p6and1p4->Fill(yield_0p6and1p4);
	}
	TCanvas *c2=new TCanvas("c2","c2",600,600);
	c2->cd();
	h_gauss->SetTitle(0);
	h_gauss->GetXaxis()->SetTitle("#theta");
	h_gauss->GetYaxis()->SetTitle("N events");
	h_gauss->Draw();
	TCanvas *c3=new TCanvas("c3","c3",600,600);
	c3->cd();
	h_yield_0p9and1p1->SetLineColor(3);
	h_yield_0p6and1p4->SetLineColor(2);
	h_yield_0p9and1p1->SetTitle(0);
	h_yield_0p9and1p1->GetXaxis()->SetTitle("yield change");
	h_yield_0p9and1p1->GetYaxis()->SetTitle("N events");
	h_yield_0p9and1p1->Draw();
	h_yield_0p8and1p2->Draw("same");
	h_yield_0p6and1p4->Draw("same");
   leg->Draw();
	
	
}
