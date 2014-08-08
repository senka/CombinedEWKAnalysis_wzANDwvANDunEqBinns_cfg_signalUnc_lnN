{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 15:00:32 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.009625,-1.341343,0.009625,1.839779);
   canv->SetFillColor(0);
   canv->SetBorderMode(0);
   canv->SetBorderSize(2);
   canv->SetLogy();
   canv->SetGridx();
   canv->SetGridy();
   canv->SetFrameBorderMode(0);
   canv->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,0.4902344);
   grae->SetPointError(0,0,0,0.3480473,0.9965581);
   grae->SetPoint(1,-0.006,0.6738281);
   grae->SetPointError(1,0,0,0.4797077,1.369771);
   grae->SetPoint(2,-0.005,0.9804688);
   grae->SetPointError(2,0,0,0.698967,1.993116);
   grae->SetPoint(3,-0.004,1.5625);
   grae->SetPointError(3,0,0,1.115417,3.17628);
   grae->SetPoint(4,-0.003,2.726562);
   grae->SetPointError(4,0,0,1.901138,5.542609);
   grae->SetPoint(5,-0.002,5.421875);
   grae->SetPointError(5,0,0,3.367493,7.658353);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0075,-0.0015);
   Graph_Graph1->SetMinimum(0.1279684);
   Graph_Graph1->SetMaximum(14.37403);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph1);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,7.84375);
   grae->SetPointError(0,0,0,4.33551,8.776453);
   grae->SetPoint(1,0.003,3.765625);
   grae->SetPointError(1,0,0,2.592545,7.652491);
   grae->SetPoint(2,0.004,1.914062);
   grae->SetPointError(2,0,0,1.347694,3.890944);
   grae->SetPoint(3,0.005,1.132812);
   grae->SetPointError(3,0,0,0.7976151,2.302804);
   grae->SetPoint(4,0.006,0.7519531);
   grae->SetPointError(4,0,0,0.5294514,1.528585);
   grae->SetPoint(5,0.007,0.5351562);
   grae->SetPointError(5,0,0,0.3757591,1.087876);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0015,0.0075);
   Graph_Graph2->SetMinimum(0.1434574);
   Graph_Graph2->SetMaximum(18.26628);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph2);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,0.4902344);
   grae->SetPointError(0,0,0,0.2515185,0.4963402);
   grae->SetPoint(1,-0.006,0.6738281);
   grae->SetPointError(1,0,0,0.3476007,0.6822206);
   grae->SetPoint(2,-0.005,0.9804688);
   grae->SetPointError(2,0,0,0.5037477,0.9926804);
   grae->SetPoint(3,-0.004,1.5625);
   grae->SetPointError(3,0,0,0.8038849,1.581961);
   grae->SetPoint(4,-0.003,2.726562);
   grae->SetPointError(4,0,0,1.347877,2.760521);
   grae->SetPoint(5,-0.002,5.421875);
   grae->SetPointError(5,0,0,2.196763,3.414668);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0075,-0.0015);
   Graph_Graph3->SetMinimum(0.2148443);
   Graph_Graph3->SetMaximum(9.696326);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,7.84375);
   grae->SetPointError(0,0,0,2.726629,3.908191);
   grae->SetPoint(1,0.003,3.765625);
   grae->SetPointError(1,0,0,1.812756,3.512327);
   grae->SetPoint(2,0.004,1.914062);
   grae->SetPointError(2,0,0,0.9660231,1.937902);
   grae->SetPoint(3,0.005,1.132812);
   grae->SetPointError(3,0,0,0.571728,1.146922);
   grae->SetPoint(4,0.006,0.7519531);
   grae->SetPointError(4,0,0,0.3795091,0.7613186);
   grae->SetPoint(5,0.007,0.5351562);
   grae->SetPointError(5,0,0,0.269343,0.5418216);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0015,0.0075);
   Graph_Graph4->SetMinimum(0.239232);
   Graph_Graph4->SetMaximum(12.90055);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph4);
   
   multigraph->Add(grae,"");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,0.2653945);
   gre->SetPointError(0,0,0.00113845);
   gre->SetPoint(1,-0.006,0.3574356);
   gre->SetPointError(1,0,0.001189323);
   gre->SetPoint(2,-0.005,0.5086186);
   gre->SetPointError(2,0,0.001028148);
   gre->SetPoint(3,-0.004,0.779013);
   gre->SetPointError(3,0,0.002736224);
   gre->SetPoint(4,-0.003,1.318026);
   gre->SetPointError(4,0,0.004285951);
   gre->SetPoint(5,-0.002,2.675667);
   gre->SetPointError(5,0,0.01083327);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0075,-0.0015);
   Graph_Graph1->SetMinimum(0.02203165);
   Graph_Graph1->SetMaximum(2.928724);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.002,4.13525);
   gre->SetPointError(0,0,0.01743145);
   gre->SetPoint(1,0.003,1.819382);
   gre->SetPointError(1,0,0.006129311);
   gre->SetPoint(2,0.004,0.9796442);
   gre->SetPointError(2,0,0.002053065);
   gre->SetPoint(3,0.005,0.6089494);
   gre->SetPointError(3,0,0.002057182);
   gre->SetPoint(4,0.006,0.4143857);
   gre->SetPointError(4,0,0.00140004);
   gre->SetPoint(5,0.007,0.2995949);
   gre->SetPointError(5,0,0.0006812735);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0015,0.0075);
   Graph_Graph2->SetMinimum(0.2690222);
   Graph_Graph2->SetMaximum(4.538059);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   multigraph->Add(gre,"");
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,0.490234375);
   graph->SetPoint(1,-0.006,0.673828125);
   graph->SetPoint(2,-0.005,0.98046875);
   graph->SetPoint(3,-0.004,1.5625);
   graph->SetPoint(4,-0.003,2.7265625);
   graph->SetPoint(5,-0.002,5.421875);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0075,-0.0015);
   Graph_Graph1->SetMinimum(0.4412109);
   Graph_Graph1->SetMaximum(5.915039);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.002,7.84375);
   graph->SetPoint(1,0.003,3.765625);
   graph->SetPoint(2,0.004,1.9140625);
   graph->SetPoint(3,0.005,1.1328125);
   graph->SetPoint(4,0.006,0.751953125);
   graph->SetPoint(5,0.007,0.53515625);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0015,0.0075);
   Graph_Graph2->SetMinimum(0.4816406);
   Graph_Graph2->SetMaximum(8.574609);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,0.2653944949);
   graph->SetPoint(1,-0.006,0.3574355781);
   graph->SetPoint(2,-0.005,0.508618603);
   graph->SetPoint(3,-0.004,0.7790130188);
   graph->SetPoint(4,-0.003,1.318025855);
   graph->SetPoint(5,-0.002,2.675666737);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0075,-0.0015);
   Graph_Graph3->SetMinimum(0.02436727);
   Graph_Graph3->SetMaximum(2.916694);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.002,4.135250454);
   graph->SetPoint(1,0.003,1.819381774);
   graph->SetPoint(2,0.004,0.9796442219);
   graph->SetPoint(3,0.005,0.6089494442);
   graph->SetPoint(4,0.006,0.4143857288);
   graph->SetPoint(5,0.007,0.2995948539);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0015,0.0075);
   Graph_Graph4->SetMinimum(0.2696354);
   Graph_Graph4->SetMaximum(4.518816);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"PL");
   multigraph->Draw("pa3");
   multigraph->GetXaxis()->SetTitle("f_{4}^{Z}");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.06);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("95% CL limit on #sigma/#sigma_{SM+aTGC}");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.06);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLine *line = new TLine(-0.007,1,0.007,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineWidth(2);
   line->Draw();
   
   TLegend *leg = new TLegend(0.17,0.77,0.45,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Observed limit","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry=leg->AddEntry("Graph","Expected limit","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","Expected #pm 1#sigma","F");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","Expected #pm 2#sigma","F");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.45,0.935,0.98,0.995,"brNDC");
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(32);
   TText *text = pt->AddText("CMS preliminary, #sqrt{s}=8 TeV, #scale[0.5]{#int} L=19.6 fb^{-1}");
   pt->Draw();
   
   pt = new TPaveText(0.32,0.12,0.82,0.22,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineColor(0);
   pt->SetLineWidth(0);
   pt->SetTextAlign(32);

   ci = TColor::GetColor("#ff0000");
   pt->SetTextColor(ci);
   text = pt->AddText("-3.6 #upoint 10^{-3} < f_{4}^{Z} < 4.0 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
