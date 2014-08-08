void plotLL(TString file_Less0, TString file_Less1){

  TFile * file_less0=new TFile(file_Less0,"read");

  //  TH2F * histo_less0=new TH2F("histo_less0");
  //  limit->Draw("L:lZ>>histo_less0","L<0");

  TCanvas * c1=new TCanvas("c1","c1",600,600);
  c1->cd();
  limit->Draw("L:lZ>>histo_less0","L<0");
  //  histo_less0->Draw();

  TFile * file_less1=new TFile(file_Less1,"read");
  limit->Draw("L:lZ","L<0","same");
  
  c1->Draw();

  TLegend *leg = new TLegend(0.4, 0.7, 0.7, 0.85);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->SetShadowColor(0);
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.04);
   TLine * line_r=new TLine();
   line_r->SetLineColor(2);
   TLine * line_b=new TLine();
   line_b->SetLineColor(1);
   leg->AddEntry(line_r, "if <0 set to 0","l");
   leg->AddEntry(line_b, "if <SM set to SM","l");
   leg->Draw();

   gPad->

}
