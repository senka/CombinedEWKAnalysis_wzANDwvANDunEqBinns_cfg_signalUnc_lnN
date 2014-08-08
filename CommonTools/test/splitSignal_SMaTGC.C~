#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void splitSignal_SMaTGC(TString inputFile){

  ifstream  input(inputFile);
  const int linesize=1024;
  char inbuf[linesize];
  char inbufChain[linesize];
  const int max_files = 200;
  int nfiles=0;
  while (input.getline(inbuf,linesize)) {
    
    //    cout << "read line: " << inbuf << endl;
    if (inbuf[0] == '#') {
      //      cout << "comment \n";
      continue;
    }
    istrstream istline(inbuf);

    TString file_name;
    TString file_withCorrHisto_name;
    TString CorrHisto_name;
    //    vector<TString> errNames;
    TString errNames;
    TString signal_file_name;
    TString channel_name_old;
    TString channel_name_new;

    istline >> file_name
	    >> file_withCorrHisto_name
	    >> CorrHisto_name
	    >> errNames
	    >> signal_file_name
	    >> channel_name_old
	    >> channel_name_new
	    ;

    cout <<"reading file: "<<file_name<< "\t and correcting SM histo by "<< file_withCorrHisto_name<<":"<< CorrHisto_name <<"\t err anmes: "<<errNames<< endl;

    //    std::vector<std::string> x = Split(errNames, ',');
    std::vector<TString> histos_updown_v;
    TObjArray *strL = errNames.Tokenize(",");

    /*
    const TString opt1 = ((TObjString
			   *)strL->At(0))->GetString();
    const TString opt2 = ((TObjString
			   *)strL->At(1))->GetString());
			   */
  for (int k=0;k<strL->GetLast()+1;k++){
    //    if ()
    cout <<"\n "<<strL->GetLast()<<"\t"  <<k << endl;
    cout <<"\n"<<((TObjString *)strL->At(k))->GetString() << endl;
    TString histo=((TObjString *)strL->At(k))->GetString();
    cout <<"\n"<<((TObjString *)strL->At(k))->GetString()<<" = "<< histo << endl;
    histos_updown_v.push_back(histo);
  }
  delete strL;

  //  int pos = std::find(histos_updown_v.begin(), histos_updown_v.end(), "CMS_hzz2l2v_QCD_ACC_JVeto") - histos_updown_v.begin();
  

  /*
  cout << "\n\t\tread out vector: "<< endl;
  for (int j=0;j<histos_updown_v.size();j++)
    cout <<histos_updown_v[j] << endl;
  */

  
    // correcting SM histo with file_withCorrHisto:CorrHisto_name
    bool do_corr=false;
    TH1D * histo_corr=new TH1D();
    if (file_withCorrHisto_name!="0" && CorrHisto_name!="0"){
      cout <<"  -> correcting SM histo by "<< file_withCorrHisto_name<<":"<< CorrHisto_name  << endl;
      TFile * file_withCorrHisto=new TFile(file_withCorrHisto_name,"read");
      file_withCorrHisto->cd();
      //      TH1D * histo_corr=new TH1D();
      histo_corr=(TH1D*)(file_withCorrHisto->Get(CorrHisto_name)->Clone("clone_name"));
      //      file_withCorrHisto->Close();
      do_corr=true;
    }

  TH1D * plot_SM=new TH1D("plot_SM","plot_SM",10,0.,10.);

  TFile * file_in=new TFile(file_name,"read");
  file_in->cd();
  file_in->ls();


  //  TList * input_p=file_in->GetList();
  TList * list_histos=file_in->GetListOfKeys();
  TString file_out=file_name;
  //  TString file_out=file_name.Remove(file_name.Length() - 5, 5);
  //  file_out+="_splittedSignal_SMaTGC.root";
  file_out=file_out.ReplaceAll(channel_name_old,channel_name_new);
  cout <<" ----> output: "<< file_out<<"\n" << endl;
  TFile *outFile=new TFile(file_out,"recreate");
  outFile->cd();

  //  TH1D * plot_diboson;
  //  TH1D * plot_SM=new TH1D("plot_SM","plot_SM",10,0.,10.);
  
  for (int i=0;i<list_histos->GetEntries();i++){
    // read histos one by one
    TString histo_name= list_histos->At(i)->GetName();

    cout <<"\treading histo \""<< histo_name <<"\""<< endl;
    // from "diboson" make: "dibosonSM"="diboson" and "diboson"=histo with all bin contents equal to 1!

    // check if this is one of syst up/down histos affecting signal
    bool signal_syst=false;
    //    int signal_syst=false;
    for (int j=0;j<histos_updown_v.size();j++){
      TString name=histo_name;
      name.ReplaceAll("Up","");
      name.ReplaceAll("Down","");
      if (histos_updown_v[j]==name)
	signal_syst=true;
    }

    if (histo_name=="diboson"){
      cout << "\t\t -> reading diboson"<< endl;
      // save "diboson" as "dibosonSM"
      TH1D * plot_diboson=(TH1D*)(file_in->Get(histo_name)->Clone("namec"));
      plot_SM=(TH1D*)(file_in->Get(histo_name)->Clone("somename"));
      cout<<"@@@@@@@@@@@@@@@@@@@@@ SM bin content: " <<plot_SM->GetBinContent(6)<<endl;
      plot_diboson=(TH1D*)(file_in->Get(histo_name)->Clone("namej"));
      plot_diboson->SetName("dibosonSM");
      cout <<"  -> set name: "<<plot_diboson->GetName()  << endl;

      // correcting with histo file_withCorrHisto:CorrHisto_name
      if(do_corr){
	cout << "@@@@@@@@@@ correcting dibosonSM... yield: "<<plot_diboson->Integral() << endl;
	plot_diboson->Multiply(histo_corr);
	cout << "@@@@@@@@@@ correcting dibosonSM... -> yield: "<<plot_diboson->Integral() << endl;
      }

      plot_diboson->Write();
      plot_SM->Write("dibosonSM_origi");

      // create "diboson" histo with all bin contents equal to 1!
      TH1D * plot_aTGC=(TH1D*)(file_in->Get(histo_name)->Clone("name_histo_atgc"));
      plot_aTGC->SetName("diboson");
      cout <<"  -> set name: "<<plot_aTGC->GetName()  << endl;
      int N_bins=plot_aTGC->GetNbinsX();
      for (int j=1;j<=N_bins;j++)
	plot_aTGC->SetBinContent(j,1.);
      plot_aTGC->Write();

      // make corr_err histos on SM and aTGC -> relative error from correction histo
      if(do_corr){

	// SM:
	TH1D * plot_SM_up=(TH1D*)(plot_diboson->Clone("name_histo_atgcX"));
	for (int j=1;j<=N_bins;j++){
	  cout << "corr: "<<histo_corr->GetBinContent(j)<<" +- "<< histo_corr->GetBinError(j)<<" -> set yield: "<<plot_SM_up->GetBinContent(j)<<" -> "<<plot_SM_up->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)) << endl;
	  plot_SM_up->SetBinContent(j,plot_SM_up->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)));
	}
	//	plot_SM_up->Write("dibosonSM_corrUp");
	plot_SM_up->Write("CMS_hzz2l2v_ewkUp");

	TH1D * plot_SM_down=(TH1D*)(plot_diboson->Clone("name_histo_atgcX"));
	for (int j=1;j<=N_bins;j++){
	  cout << "corr: "<<histo_corr->GetBinContent(j)<<" +- "<< histo_corr->GetBinError(j)<<" -> set yield: "<<plot_SM_down->GetBinContent(j)<<" -> "<<plot_SM_down->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)) << endl;
	  plot_SM_down->SetBinContent(j,plot_SM_down->GetBinContent(j)*(1.-histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)));
	}
	//	plot_SM_down->Write("dibosonSM_corrDown");
	plot_SM_down->Write("CMS_hzz2l2v_ewkDown");

	// aTGC:
	TH1D * plot_aTGC_up=(TH1D*)(plot_aTGC->Clone("name_histo_atgcX"));
	for (int j=1;j<=N_bins;j++){
	  cout <<j << " corr: "<<histo_corr->GetBinContent(j)<<" +- "<< histo_corr->GetBinError(j)<<" -> set yield: "<<plot_aTGC_up->GetBinContent(j)<<" -> "<<plot_aTGC_up->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)) << endl;
	  plot_aTGC_up->SetBinContent(j,plot_aTGC_up->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)));
	}
	plot_aTGC_up->Write("diboson_corrUp");

	TH1D * plot_aTGC_down=(TH1D*)(plot_aTGC->Clone("name_histo_atgcX2"));
	for (int j=1;j<=N_bins;j++){
	  cout <<j << " corr: "<<histo_corr->GetBinContent(j)<<" +- "<< histo_corr->GetBinError(j)<<" -> set yield: "<<plot_aTGC_down->GetBinContent(j)<<" -> "<<plot_aTGC_down->GetBinContent(j)*(1.+histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)) << endl;
	  plot_aTGC_down->SetBinContent(j,plot_aTGC_down->GetBinContent(j)*(1.-histo_corr->GetBinError(j)/histo_corr->GetBinContent(j)));
	}
	plot_aTGC_down->Write("diboson_corrDown");

      }
     
    }
    else if (signal_syst) { // if this is signal syst then save this and create aTGC syst plot with the same relative error 
      cout << "\t\t -> reading signal unc"<< endl;
      TH1D* plot_unc=(TH1D*)(file_in->Get(histo_name)->Clone("name_histo_atgc2"));
      //    cout << " plot \""<<histo_name<<"\""<< endl;
      cout <<"\treading signal unc histo " << endl;
      int N_bins=plot_unc->GetNbinsX();
      //      cout <<"\treading signal unc histo 2 " << endl;
      
      TString name_origi_syst=histo_name;
      name_origi_syst=name_origi_syst.ReplaceAll("Up","origiUp");
      name_origi_syst=name_origi_syst.ReplaceAll("Down","origiDown");
      //      name_atgc_syst+="aTGC";
      plot_unc->Write(name_origi_syst);


      plot_unc->Multiply(histo_corr);
      TString name_SM_syst=histo_name;
      name_SM_syst=name_SM_syst.ReplaceAll("Up","SMUp");
      name_SM_syst=name_SM_syst.ReplaceAll("Down","SMDown");
      plot_unc->Write(name_SM_syst);

      //      cout <<"\treading signal unc histo 3 " << endl;
      TH1D * plotSM=(TH1D*)(file_in->Get("diboson")->Clone("name_histo_atgc3"));
      // do signal unertainty histo:
      //      cout <<"\treading signal unc histo 4 " << endl;
      for (int j=1;j<=N_bins;j++){
	/*
	cout <<"set bin content: "<<plot_unc->GetBinContent(j)<<" mean: " <<plotSM->GetBinContent(j)<<" -> " <<plot_unc->GetBinContent(j)/plotSM->GetBinContent(j)  << endl;
	plot_unc->SetBinContent(j,plot_unc->GetBinContent(j)/plotSM->GetBinContent(j));
	*/
	cout <<"set bin content: "<<plot_unc->GetBinContent(j)<<" mean: " <<plot_diboson->GetBinContent(j)<<" -> " <<plot_unc->GetBinContent(j)/plot_diboson->GetBinContent(j)  << endl;
	plot_unc->SetBinContent(j,plot_unc->GetBinContent(j)/plot_diboson->GetBinContent(j));
      }
      //      cout <<"\treading signal unc histo 5 " << endl;
      TString name_atgc_syst=histo_name;
      name_atgc_syst=name_atgc_syst.ReplaceAll("Up","aTGCUp");
      name_atgc_syst=name_atgc_syst.ReplaceAll("Down","aTGCDown");
      //      name_atgc_syst+="aTGC";
      //      plot_unc->Write(name_atgc_syst);
      plot_unc->Write(histo_name);
      cout << "!!!!!!!!!!!!!!!!!!!!!!! \t\t -> saving as: "<< name_atgc_syst<< endl;
    }     
    else{ // simply save histo
      cout << "\t\t -> reading other"<< endl;
      TH1D * plot=(TH1D*)(file_in->Get(histo_name)->Clone("name_histo_atgc4"));
      //    cout << " plot \""<<histo_name<<"\""<< endl;
      cout <<"\treading histo \""<< histo_name<< "\" and rebinning.." << endl;
      int N_bins=plot->GetNbinsX();

      
//      TH1D * plot_rebin=new TH1D("plot_rebin","plot_rebin",N_bins,0,N_bins);
//      // rebin to equal size bins -> only change the x axis, yields in y axis are unchanged!
//      for (int j=1;j<=N_bins;j++)
//	plot_rebin->SetBinContent(j,plot->GetBinContent(j));
//      cout <<"\t\tbin yield starting: "<< plot->Integral()<<" after rebinning: "<<plot_rebin->Integral()  << endl;
      
      plot->Write(histo_name);
      //      plot_rebin->Write(histo_name);
      //      delete plot_rebin;
    }

  }

  //  outFile->Close();
  //  file_in->Close();
  cout <<" ---> reading signal file: "<< signal_file_name << endl;
  
  TFile * file_in_signal=new TFile(signal_file_name,"read");
  file_in_signal->cd();
  file_in_signal->ls();

  TList * list_histos_signal=file_in_signal->GetListOfKeys();
  TString file_out_signal=signal_file_name;
  //  TString file_out_signal=signal_file_name.Remove(signal_file_name.Length() - 5, 5);
  //  file_out_signal+="_splittedSignal_SMaTGC.root";
  file_out_signal=file_out_signal.ReplaceAll(channel_name_old,channel_name_new);
  cout <<" ----> output: "<< file_out_signal<<"\n" << endl;
  TFile *outFile_signal=new TFile(file_out_signal,"recreate");
  outFile_signal->cd();


  TH2D * histo_1=new TH2D();
  //  histo_1=(TH2D*)(file_in_signal->Get(list_histos_signal->At(1)->GetName())->Clone("something"));
  histo_1=(TH2D*)(file_in_signal->Get("bin_content_lam_dk_1")->Clone("something"));
  for (int i=1;i<=histo_1->GetNbinsX();i++)
    for (int j=1;j<=histo_1->GetNbinsY();j++)
      histo_1->SetBinContent(i,j,-1.);
 
  int N_signal_histos=0;
  for (int i=0;i<list_histos_signal->GetEntries();i++){
    // read histos one by one
    TString histo_name= list_histos_signal->At(i)->GetName();
    cout <<"\treading histo \""<< histo_name <<"\""<< endl;

    //    if (histo_name.find('_lam_dk_')!=std::string::npos) {
    if (histo_name.Contains("_lam_dk_")) {
    //    if (histo_name.Search('lam_dk_')) {
      cout <<"this histo contains _lam_dk_! -> do.." << endl;
    }
    if (!histo_name.Contains("_lam_dk_"))
      continue;

    N_signal_histos++;
    TH2D * plot_signal=(TH2D*)(file_in_signal->Get(histo_name)->Clone("namec2"));
    cout<<"original: "<<plot_signal->GetBinContent(60,60)<< " N_signal_histos: "<< N_signal_histos<<endl;
    plot_signal->Add(histo_1);
    //    cout << "NbinsX: "<<plot_signal->GetNbinsX()<<" "<< histo_1->GetNbinsX()<< "NbinsY: "<<plot_signal->GetNbinsY()<<" "<< histo_1->GetNbinsY() << endl;
    cout<<"original-1: "<<plot_signal->GetBinContent(60,60)<<endl;
    plot_signal->Scale(plot_SM->GetBinContent(N_signal_histos));
    cout<<"(original-1)*signal: "<< " * "<<plot_SM->GetBinContent(N_signal_histos)<<" = " <<plot_signal->GetBinContent(60,60)<<endl;
    //    cout<<"original-1: "<<plot_SM->GetBinContent(6)<<endl;

    // check if signal<0->setTo0!
    
    for (int ii=1;ii<=histo_1->GetNbinsX();ii++){
      for (int jj=1;jj<=histo_1->GetNbinsY();jj++){
	if (plot_signal->GetBinContent(ii,jj)<0.){
	  //	  cout <<"~~~~~~~~~~~~~~~~~ found bin with signal<0 -> setTo0! "<< histo_name<<" bin: "<< i<<","<<j << endl;
	  plot_signal->SetBinContent(ii,jj,0.);
	}
      }
    }
    

    plot_signal->Write(histo_name);
    delete plot_signal;


  }




  }
  
  outFile->Close();
  outFile_signal->Close();
  file_in->Close();
  

}
