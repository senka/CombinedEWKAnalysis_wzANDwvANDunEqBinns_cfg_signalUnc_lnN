void doDataSmaller(TString file_name, double data_factor, bool doIntBinContent){

  TFile * file_in=new TFile(file_name,"read");
  file_in->cd();
  file_in.ls();

  //  TList * input_p=file_in->GetList();
  TList * list_histos=file_in->GetListOfKeys();
  TString file_out=file_name.Remove(file_name.Length() - 5, 5);
  file_out+="_factor";
  file_out+=data_factor;
  if (doIntBinContent) file_out+="INT";
  file_out+="data.root";
  cout <<" ----> output: "<< file_out<<"\n" << endl;
  TFile *outFile=new TFile(file_out,"recreate");
  outFile->cd();

  for (int i=0;i<list_histos->GetEntries();i++){
    TString histo_name= list_histos->At(i)->GetName();

    TH1D * plot=file_in->Get(histo_name);
    //    cout << " plot \""<<histo_name<<"\""<< endl;
    cout <<"\treading histo \""<< histo_name<< "\" and saving.." << endl;

    if (histo_name.Contains("data_obs")){
      plot->Scale(data_factor);
      
      if (doIntBinContent){
	int N_bins=plot->GetNbinsX();
	for (int j=1;j<=N_bins;j++)
	  plot->SetBinContent(j,int(plot->GetBinContent(j)));
	
      }
      
    }


    /*
    int N_bins=plot->GetNbinsX();
    TH1D * plot_rebin=new TH1D("plot_rebin","plot_rebin",N_bins,0,N_bins);
    for (int j=1;j<=N_bins;j++)
      plot_rebin->SetBinContent(j,plot->GetBinContent(j));
    cout <<"\t\tbin yield starting: "<< plot->Integral()<<" after rebinning: "<<plot_rebin->Integral()  << endl;
    */
    plot->Write(histo_name);
    delete plot;
  }

  outFile->Close();
  file_in->Close();

  /*
  list_histos->GetEntries();
  list_histos->At(4)->GetName();
  TH1D * plot=file_in->Get("data_obs");
  */

}
