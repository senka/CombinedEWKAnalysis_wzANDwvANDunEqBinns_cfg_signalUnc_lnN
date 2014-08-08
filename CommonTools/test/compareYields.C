void compareYields(){

  TFile * ch1_file=new TFile("../data/WV_semileptonic/ch1_boosted.root","read");
  ch1_file->cd();
  double yield_ch1=zz2l2nu->GetBinContent(1);
  double syst_ch1_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch1_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);

  TFile * ch2_file=new TFile("../data/WV_semileptonic/ch2_boosted.root","read");
  ch2_file->cd();
  double yield_ch2=zz2l2nu->GetBinContent(1);
  double syst_ch2_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch2_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);

  TFile * ch3_file=new TFile("../data/WV_semileptonic/ch3_boosted.root","read");
  ch3_file->cd();
  double yield_ch3=zz2l2nu->GetBinContent(1);
  double syst_ch3_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch3_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);

  TFile * ch4_file=new TFile("../data/WV_semileptonic/ch4_boosted.root","read");
  ch4_file->cd();
  double yield_ch4=zz2l2nu->GetBinContent(1);
  double syst_ch4_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch4_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);
  

  TFile * ch5_file=new TFile("../data/WV_semileptonic/ch5_boosted.root","read");
  ch5_file->cd();
  double yield_ch5=zz2l2nu->GetBinContent(1);
  double syst_ch5_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch5_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);

  TFile * ch6_file=new TFile("../data/WV_semileptonic/ch6_boosted.root","read");
  ch6_file->cd();
  double yield_ch6=zz2l2nu->GetBinContent(1);
  double syst_ch6_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_ch6_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);

  TFile * all_file=new TFile("../data/WV_semileptonic/ch1_boosted_allBins.root","read");
  all_file->cd();
  double yield_all=zz2l2nu->Integral();
  double yield_all_ch1=zz2l2nu->GetBinContent(1);
  double yield_all_ch2=zz2l2nu->GetBinContent(2);
  double yield_all_ch3=zz2l2nu->GetBinContent(3);
  double yield_all_ch4=zz2l2nu->GetBinContent(4);
  double yield_all_ch5=zz2l2nu->GetBinContent(5);
  double yield_all_ch6=zz2l2nu->GetBinContent(6);
  double syst_all_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->Integral();
  double syst_all_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->Integral();
  double syst_all_ch1_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(1);
  double syst_all_ch1_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(1);
  double syst_all_ch2_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(2);
  double syst_all_ch2_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(2);
  double syst_all_ch3_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(3);
  double syst_all_ch3_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(3);
  double syst_all_ch4_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(4);
  double syst_all_ch4_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(4);
  double syst_all_ch5_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(5);
  double syst_all_ch5_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(5);
  double syst_all_ch6_up=zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(6);
  double syst_all_ch6_down=zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(6);

  cout <<"\n"<<yield_ch1+yield_ch2+yield_ch3+yield_ch4+yield_ch5+yield_ch6 <<" =? "<<yield_all << endl;
  cout << "\n\t"<< yield_ch1<< " =? "<<yield_all_ch1 << endl;
  cout << "\t"<< yield_ch2<< " =? "<<yield_all_ch2 << endl;
  cout << "\t"<< yield_ch3<< " =? "<<yield_all_ch3 << endl;
  cout << "\t"<< yield_ch4<< " =? "<<yield_all_ch4 << endl;
  cout << "\t"<< yield_ch5<< " =? "<<yield_all_ch5 << endl;
  cout << "\t"<< yield_ch6<< " =? "<<yield_all_ch6 << endl;

  cout <<"\n"<<syst_ch1_up+syst_ch2_up+syst_ch3_up+syst_ch4_up+syst_ch5_up+syst_ch6_up <<" =? "<<syst_all_up << endl;
  cout << "\t"<< syst_ch1_up<< " =? "<<syst_all_ch1_up << endl;
  cout << "\t"<< syst_ch2_up<< " =? "<<syst_all_ch2_up << endl;
  cout << "\t"<< syst_ch3_up<< " =? "<<syst_all_ch3_up << endl;
  cout << "\t"<< syst_ch4_up<< " =? "<<syst_all_ch4_up << endl;
  cout << "\t"<< syst_ch5_up<< " =? "<<syst_all_ch5_up << endl;
  cout << "\t"<< syst_ch6_up<< " =? "<<syst_all_ch6_up << endl;

  cout <<"\n"<<syst_ch1_down+syst_ch2_down+syst_ch3_down+syst_ch4_down+syst_ch5_down+syst_ch6_down <<" =? "<<syst_all_down << endl;
  cout << "\t"<< syst_ch1_down<< " =? "<<syst_all_ch1_down << endl;
  cout << "\t"<< syst_ch2_down<< " =? "<<syst_all_ch2_down << endl;
  cout << "\t"<< syst_ch3_down<< " =? "<<syst_all_ch3_down << endl;
  cout << "\t"<< syst_ch4_down<< " =? "<<syst_all_ch4_down << endl;
  cout << "\t"<< syst_ch5_down<< " =? "<<syst_all_ch5_down << endl;
  cout << "\t"<< syst_ch6_down<< " =? "<<syst_all_ch6_down << endl;

}
