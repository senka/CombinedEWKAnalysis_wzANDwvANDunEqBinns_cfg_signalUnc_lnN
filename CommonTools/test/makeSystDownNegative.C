void makeSystDownNegative(){


  TFile * file_in=new TFile("../data/WV_semileptonic/ch6_boosted.root","read");
  file_in->cd();
  
  TH1D * data_obs_tmp=new TH1D();
  TH1D * zll_tmp=new TH1D();
  TH1D * zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp_tmp=new TH1D();
  TH1D * zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown_tmp=new TH1D();
  TH1D * topwwwjetsdata_tmp=new TH1D();
  TH1D * topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp_tmp=new TH1D();
  TH1D * topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown_tmp=new TH1D();
  TH1D * wz3lnu_tmp=new TH1D();
  TH1D * wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp_tmp=new TH1D();
  TH1D * wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown_tmp=new TH1D();
  TH1D * zz2l2nu_tmp=new TH1D();
  TH1D * zz2l2nu_CMS_hzz2l2v_sherpaUp_tmp=new TH1D();
  TH1D * zz2l2nu_CMS_hzz2l2v_sherpaDown_tmp=new TH1D();
 
  data_obs_tmp=(TH1D*)(data_obs->Clone("data_obs"));
  zll_tmp=(TH1D*)(zll->Clone("zll"));
  zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp_tmp=(TH1D*)(zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp->Clone("zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp"));
  zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown_tmp=(TH1D*)(zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown->Clone("zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown"));
  topwwwjetsdata_tmp=(TH1D*)(topwwwjetsdata->Clone("topwwwjetsdata"));
  topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp_tmp=(TH1D*)(topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp->Clone("topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp"));
  topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown_tmp=(TH1D*)(topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown->Clone("topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown"));
  wz3lnu_tmp=(TH1D*)(wz3lnu->Clone("wz3lnu"));
  wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp_tmp=(TH1D*)(wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp->Clone("wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp"));
  wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown_tmp=(TH1D*)(wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown->Clone("wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown"));
  zz2l2nu_tmp=(TH1D*)(zz2l2nu->Clone("zz2l2nu"));
  zz2l2nu_CMS_hzz2l2v_sherpaUp_tmp=(TH1D*)(zz2l2nu_CMS_hzz2l2v_sherpaUp->Clone("zz2l2nu_CMS_hzz2l2v_sherpaUp"));
  zz2l2nu_CMS_hzz2l2v_sherpaDown_tmp=(TH1D*)(zz2l2nu_CMS_hzz2l2v_sherpaDown->Clone("zz2l2nu_CMS_hzz2l2v_sherpaDown"));

  TFile * file_out=new TFile("../data/WV_semileptonic/ch6_boosted_SIGNALnegativeSystDown.root","recreate");
  //  TFile * file_out=new TFile("../data/WV_semileptonic/ch6_boosted_BKGzllzeroSystDown.root","recreate");
  file_out->cd();
  data_obs_tmp->Write();
  zll_tmp->Write();
  zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp_tmp->Write();

  //  zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown_tmp->SetBinContent(1,0.);
  zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown_tmp->Write();
  topwwwjetsdata_tmp->Write();
  topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp_tmp->Write();
  topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown_tmp->Write();
  wz3lnu_tmp->Write();
  wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp_tmp->Write();
  wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown_tmp->Write();
  zz2l2nu_tmp->Write();
  zz2l2nu_CMS_hzz2l2v_sherpaUp_tmp->Write();

  zz2l2nu_CMS_hzz2l2v_sherpaDown_tmp->SetBinContent(1,-0.1);
  zz2l2nu_CMS_hzz2l2v_sherpaDown_tmp->Write();

  cout 
    << "zzll: "<<zll_tmp->Integral()<<"\t"<<zll_CMS_hzz2l2v_stat_ll_zll_8TeVUp_tmp-> Integral()/(zll_tmp->Integral()) <<" / "<<zll_CMS_hzz2l2v_stat_ll_zll_8TeVDown_tmp-> Integral()/(zll_tmp->Integral())
    << "\ntopwwwjetsdata: "<<topwwwjetsdata_tmp->Integral()<<"\t"<<topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVUp_tmp-> Integral()/(topwwwjetsdata_tmp->Integral()) <<" / "<<topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeVDown_tmp-> Integral()/(topwwwjetsdata_tmp->Integral())
    << "\nwz3lnu: "<<wz3lnu_tmp->Integral()<<"\t"<<wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVUp_tmp-> Integral()/(wz3lnu_tmp->Integral()) <<" / "<<wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeVDown_tmp-> Integral()/(wz3lnu_tmp->Integral())

    << "\nzz2l2nu: "<<zz2l2nu_tmp->Integral()<<"\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp_tmp-> Integral()/(zz2l2nu_tmp->Integral()) <<" / "<<zz2l2nu_CMS_hzz2l2v_sherpaDown_tmp-> Integral()/(zz2l2nu_tmp->Integral())

       <<endl;
  


/*
bkg1_name=zll
bkg1_shape_syst=zll_CMS_hzz2l2v_stat_ll_zll_8TeV
bkg2_name=topwwwjetsdata
bkg2_shape_syst=topwwwjetsdata_CMS_hzz2l2v_stat_ll_topwwwjetsdata_8TeV
bkg3_name=wz3lnu
bkg3_shape_syst=wz3lnu_CMS_hzz2l2v_stat_ll_wz3lnu_8TeV
signal_shape_syst=zz2l2nu_CMS_hzz2l2v_sherpa
*/
}
