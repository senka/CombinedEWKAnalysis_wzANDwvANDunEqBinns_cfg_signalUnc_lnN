void splitSignal_SMaTGC(TString file_name){

  TFile * file_in=new TFile(file_name,"read");
  file_in->cd();
  file_in.ls();

  //  TList * input_p=file_in->GetList();
  TList * list_histos=file_in->GetListOfKeys();
  TString file_out=file_name.Remove(file_name.Length() - 5, 5);
  file_out+="_splittedSignal_SMaTGC.root";
  cout <<" ----> output: "<< file_out<<"\n" << endl;
  TFile *outFile=new TFile(file_out,"recreate");
  outFile->cd();

  for (int i=0;i<list_histos->GetEntries();i++){
    // read histos one by one
    TString histo_name= list_histos->At(i)->GetName();

    cout <<"\treading histo \""<< histo_name <<"\""<< endl;
    // from "diboson" make: "dibosonSM"="diboson" and "diboson"=histo with all bin contents equal to 1!
    if (histo_name=="diboson"){
 
      // save "diboson" as "dibosonSM"
      TH1D * plot_diboson=file_in->Get(histo_name);
      plot_diboson->SetName("dibosonSM");
      cout <<"  -> set name: "<<plot_diboson->GetName()  << endl;
      plot_diboson->Write();

      // create "diboson" histo with all bin contents equal to 1!
      TH1D * plot_aTGC=file_in->Get(histo_name);
      plot_aTGC->SetName("diboson");
      cout <<"  -> set name: "<<plot_aTGC->GetName()  << endl;
      int N_bins=plot_aTGC->GetNbinsX();
      for (int j=1;j<=N_bins;j++)
	plot_aTGC->SetBinContent(j,1.);
      plot_aTGC->Write();
     
    }
    else{
      TH1D * plot=file_in->Get(histo_name);
      //    cout << " plot \""<<histo_name<<"\""<< endl;
      cout <<"\treading histo \""<< histo_name<< "\" and rebinning.." << endl;
      int N_bins=plot->GetNbinsX();
      TH1D * plot_rebin=new TH1D("plot_rebin","plot_rebin",N_bins,0,N_bins);
      // rebin to equal size bins -> only change the x axis, yields in y axis are unchanged!
      for (int j=1;j<=N_bins;j++)
	plot_rebin->SetBinContent(j,plot->GetBinContent(j));
      cout <<"\t\tbin yield starting: "<< plot->Integral()<<" after rebinning: "<<plot_rebin->Integral()  << endl;
      plot_rebin->Write(histo_name);
      delete plot_rebin;
    }
  }

  outFile->Close();
  file_in->Close();


}
