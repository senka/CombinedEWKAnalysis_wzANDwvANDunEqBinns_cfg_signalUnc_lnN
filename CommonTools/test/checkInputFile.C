void checkInputFile(){


  TFile * file=new TFile("/afs/cern.ch/user/l/lpernie/public/4Senka/EWKSys_2013-08-01_ptDependentErrors_7TeVAll/limits/f5z/cardsShape/0.01/hzz2l2v_f5z_P0p01_7TeV.root","read");
  file->cd();
  ll->cd();

  double zll_ch7=zlldata->GetBinContent(3);
  double zll_ch8=zlldata->GetBinContent(4);
  double zll_ch9=zlldata->GetBinContent(5);
  double zll_ch10=zlldata->GetBinContent(6);
  double zll_ch11=zlldata->GetBinContent(7);
  double zll_ch12=zlldata->GetBinContent(8);

  double top_ch7=topwwwjetsdata->GetBinContent(3);
  double top_ch8=topwwwjetsdata->GetBinContent(4);
  double top_ch9=topwwwjetsdata->GetBinContent(5);
  double top_ch10=topwwwjetsdata->GetBinContent(6);
  double top_ch11=topwwwjetsdata->GetBinContent(7);
  double top_ch12=topwwwjetsdata->GetBinContent(8);

  double wz_ch7=wz3lnu->GetBinContent(3);
  double wz_ch8=wz3lnu->GetBinContent(4);
  double wz_ch9=wz3lnu->GetBinContent(5);
  double wz_ch10=wz3lnu->GetBinContent(6);
  double wz_ch11=wz3lnu->GetBinContent(7);
  double wz_ch12=wz3lnu->GetBinContent(8);

  double zz_ch7=zz2l2nu->GetBinContent(3);
  double zz_ch8=zz2l2nu->GetBinContent(4);
  double zz_ch9=zz2l2nu->GetBinContent(5);
  double zz_ch10=zz2l2nu->GetBinContent(6);
  double zz_ch11=zz2l2nu->GetBinContent(7);
  double zz_ch12=zz2l2nu->GetBinContent(8);

    cout << endl;
  cout << "ch7 bkg1: "<<zlldata->GetBinContent(3) << endl;
  cout << "ch7 bkg2: "<<topwwwjetsdata->GetBinContent(3) << endl;
  cout << "ch7 bkg3: "<<wz3lnu->GetBinContent(3) << endl;
  cout << "ch7 signal: " << zz2l2nu->GetBinContent(3) << endl;
  cout << "ch7 signal+atgc: " << zz2l2nu->GetBinContent(3)+ zz2l2nu_f5z_p0p01->GetBinContent(3)<< endl;
    cout << endl;
  cout << "ch11 bkg1: "<<zlldata->GetBinContent(7) << endl;
  cout << "ch11 bkg2: "<<topwwwjetsdata->GetBinContent(7) << endl;
  cout << "ch11 bkg3: "<<wz3lnu->GetBinContent(7) << endl;
  cout << "ch11 signal: " << zz2l2nu->GetBinContent(7) << endl;
  cout << "ch11 signal+atgc: " << zz2l2nu->GetBinContent(7)+ zz2l2nu_f5z_p0p01->GetBinContent(7)<< endl;
    cout << endl;
  cout << "ch12 bkg1: "<<zlldata->GetBinContent(8) << endl;
  cout << "ch12 bkg2: "<<topwwwjetsdata->GetBinContent(8) << endl;
  cout << "ch12 bkg3: "<<wz3lnu->GetBinContent(8) << endl;
  cout << "ch12 signal: " << zz2l2nu->GetBinContent(8) << endl;
  cout << "ch12 signal+atgc: " << zz2l2nu->GetBinContent(8)+ zz2l2nu_f5z_p0p01->GetBinContent(8)<< endl;
  cout << endl;

  cout <<"\n\t bkg:" << endl;
  cout << "ch7 DY : " << zll_ch7<<"\ttop: "<<top_ch7 <<"\twz: "<<wz_ch7 <<"\tsignal SM: "<< zz_ch7 << endl;
  cout << "ch8 DY : " << zll_ch8<<"\ttop: "<<top_ch8 <<"\twz: "<<wz_ch8 <<"\tsignal SM: "<< zz_ch8 << endl;
  cout << "ch9 DY : " << zll_ch9<<"\ttop: "<<top_ch9 <<"\twz: "<<wz_ch9 <<"\tsignal SM: "<< zz_ch9 << endl;
  cout << "ch10 DY : " << zll_ch10<<"\ttop: "<<top_ch10 <<"\twz: "<<wz_ch10 <<"\tsignal SM: "<< zz_ch10 << endl;
  cout << "ch11 DY : " << zll_ch11<<"\ttop: "<<top_ch11 <<"\t\twz: "<<wz_ch11 <<"\tsignal SM: "<< zz_ch11 << endl;
  cout << "ch12 DY : " << zll_ch12<<"\t\ttop: "<<top_ch12 <<"\t\twz: "<<wz_ch12 <<"\tsignal SM: "<< zz_ch12 << endl;
  cout << "  SUM: \t  "<<zll_ch7+zll_ch8+zll_ch9+zll_ch10+zll_ch11+zll_ch12 <<"\t    "<<top_ch7+top_ch8+top_ch9+top_ch10+top_ch11+top_ch12<<"\t     "<<wz_ch7+wz_ch8+wz_ch9+wz_ch10+wz_ch11+wz_ch12 <<"\t\t  "<<zz_ch7+zz_ch8+zz_ch9+zz_ch10+zz_ch11+zz_ch12<< endl;
  
  cout <<"\nsignal: QCD " << endl;
  cout << "ch7 signal: " << zz2l2nu->GetBinContent(3)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(3) <<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(3)  << endl;
  cout << "ch8 signal: " << zz2l2nu->GetBinContent(4)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(4)<<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(4)  << endl;
  cout << "ch9 signal: " << zz2l2nu->GetBinContent(5)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(5)<<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(5)  << endl;
  cout << "ch10 signal: " << zz2l2nu->GetBinContent(6)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(6)<<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(6)  << endl;
  cout << "ch11 signal: " << zz2l2nu->GetBinContent(7)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(7)<<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(7)  << endl;
  cout << "ch12 signal: " << zz2l2nu->GetBinContent(8)<<"\t+"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(8)<<"\t-"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(8)  << endl;
  cout << endl;
  
  cout <<"signal: QCD " << endl;
  cout << "ch7 signal: " << zz2l2nu->GetBinContent(3)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(3)/zz2l2nu->GetBinContent(3) <<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(3)/zz2l2nu->GetBinContent(3)  << endl;
  cout << "ch8 signal: " << zz2l2nu->GetBinContent(4)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(4)/zz2l2nu->GetBinContent(4)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(4)/zz2l2nu->GetBinContent(4)  << endl;
  cout << "ch9 signal: " << zz2l2nu->GetBinContent(5)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(5)/zz2l2nu->GetBinContent(5)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(5)/zz2l2nu->GetBinContent(5)  << endl;
  cout << "ch10 signal: " << zz2l2nu->GetBinContent(6)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(6)/zz2l2nu->GetBinContent(6)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(6)/zz2l2nu->GetBinContent(6)  << endl;
  cout << "ch11 signal: " << zz2l2nu->GetBinContent(7)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(7)/zz2l2nu->GetBinContent(7)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(7)/zz2l2nu->GetBinContent(7)  << endl;
  cout << "ch12 signal: " << zz2l2nu->GetBinContent(8)<<"\t"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(8)/zz2l2nu->GetBinContent(8)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(8)/zz2l2nu->GetBinContent(8)  << endl;
  cout << endl;
  
  cout <<"signal: sherpa " << endl;
  cout << "ch7 signal: " << zz2l2nu->GetBinContent(3)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(3)/zz2l2nu->GetBinContent(3) <<"\t/"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(3)/zz2l2nu->GetBinContent(3)  << endl;
  cout << "ch8 signal: " << zz2l2nu->GetBinContent(4)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(4)/zz2l2nu->GetBinContent(4)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(4)/zz2l2nu->GetBinContent(4)  << endl;
  cout << "ch9 signal: " << zz2l2nu->GetBinContent(5)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(5)/zz2l2nu->GetBinContent(5)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(5)/zz2l2nu->GetBinContent(5)  << endl;
  cout << "ch10 signal: " << zz2l2nu->GetBinContent(6)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(6)/zz2l2nu->GetBinContent(6)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(6)/zz2l2nu->GetBinContent(6)  << endl;
  cout << "ch11 signal: " << zz2l2nu->GetBinContent(7)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(7)/zz2l2nu->GetBinContent(7)<<"\t"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(7)/zz2l2nu->GetBinContent(7)  << endl;
  cout << "ch12 signal: " << zz2l2nu->GetBinContent(8)<<"\t\t"<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(8)/zz2l2nu->GetBinContent(8)<<"\t/"<<zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(8)/zz2l2nu->GetBinContent(8)  << endl;
  cout << endl;
  cout <<"ch12 QCD: "<< zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoDown->GetBinContent(8)/zz2l2nu->GetBinContent(8)<<" / "<<zz2l2nu_CMS_hzz2l2v_QCD_ACC_JVetoUp->GetBinContent(8)/zz2l2nu->GetBinContent(8) << endl;
  cout <<"ch12 sherpa: "<< zz2l2nu_CMS_hzz2l2v_sherpaDown->GetBinContent(8)/zz2l2nu->GetBinContent(8)<<" / "<<zz2l2nu_CMS_hzz2l2v_sherpaUp->GetBinContent(8)/zz2l2nu->GetBinContent(8) << endl;

}
