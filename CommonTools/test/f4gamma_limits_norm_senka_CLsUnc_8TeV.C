{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 13:57:13 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",20,42,600,600);
   canv->Range(-0.009625,-1.220926,0.009625,1.90941);
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
   grae->SetPoint(0,-0.007,0.7851562);
   grae->SetPointError(0,0,0,0.558197,1.596081);
   grae->SetPoint(1,-0.006,1.113281);
   grae->SetPointError(1,0,0,0.7925606,2.2631);
   grae->SetPoint(2,-0.005,1.710938);
   grae->SetPointError(2,0,0,1.219711,3.478027);
   grae->SetPoint(3,-0.004,2.898438);
   grae->SetPointError(3,0,0,2.046455,5.892);
   grae->SetPoint(4,-0.003,5.28125);
   grae->SetPointError(4,0,0,3.460663,8.92476);
   grae->SetPoint(5,-0.002,10.03125);
   grae->SetPointError(5,0,0,4.996033,9.7087);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,-0.0075,-0.0015);
   Graph_Graph9->SetMinimum(0.2042633);
   Graph_Graph9->SetMaximum(21.69125);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph9);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,6.875);
   grae->SetPointError(0,0,0,4.263306,9.355484);
   grae->SetPoint(1,0.003,3.578125);
   grae->SetPointError(1,0,0,2.501892,7.273237);
   grae->SetPoint(2,0.004,1.994141);
   grae->SetPointError(2,0,0,1.411867,4.053728);
   grae->SetPoint(3,0.005,1.253906);
   grae->SetPointError(3,0,0,0.8877754,2.548965);
   grae->SetPoint(4,0.006,0.8632812);
   grae->SetPointError(4,0,0,0.6112099,1.754895);
   grae->SetPoint(5,0.007,0.6308594);
   grae->SetPointError(5,0,0,0.4454212,1.282423);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.0015,0.0075);
   Graph_Graph10->SetMinimum(0.1668943);
   Graph_Graph10->SetMaximum(17.83499);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph10);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,0.7851562);
   grae->SetPointError(0,0,0,0.4033846,0.7949352);
   grae->SetPoint(1,-0.006,1.113281);
   grae->SetPointError(1,0,0,0.5712009,1.127147);
   grae->SetPoint(2,-0.005,1.710938);
   grae->SetPointError(2,0,0,0.881432,1.732247);
   grae->SetPoint(3,-0.004,2.898438);
   grae->SetPointError(3,0,0,1.466893,2.934537);
   grae->SetPoint(4,-0.003,5.28125);
   grae->SetPointError(4,0,0,2.338651,3.999744);
   grae->SetPoint(5,-0.002,10.03125);
   grae->SetPointError(5,0,0,3.063973,4.358364);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,-0.0075,-0.0015);
   Graph_Graph11->SetMinimum(0.3435945);
   Graph_Graph11->SetMaximum(15.7904);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph11);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,6.875);
   grae->SetPointError(0,0,0,2.781141,4.220222);
   grae->SetPoint(1,0.003,3.578125);
   grae->SetPointError(1,0,0,1.778689,3.56564);
   grae->SetPoint(2,0.004,1.994141);
   grae->SetPointError(2,0,0,1.017537,2.018978);
   grae->SetPoint(3,0.005,1.253906);
   grae->SetPointError(3,0,0,0.6398225,1.269524);
   grae->SetPoint(4,0.006,0.8632812);
   grae->SetPointError(4,0,0,0.4405009,0.8740333);
   grae->SetPoint(5,0.007,0.6308594);
   grae->SetPointError(5,0,0,0.3210165,0.6387167);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.0015,0.0075);
   Graph_Graph12->SetMinimum(0.2788586);
   Graph_Graph12->SetMaximum(12.17376);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph12);
   
   multigraph->Add(grae,"");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,0.4251937);
   gre->SetPointError(0,0,0.001414037);
   gre->SetPoint(1,-0.006,0.5910527);
   gre->SetPointError(1,0,0.001962932);
   gre->SetPoint(2,-0.005,0.8794304);
   gre->SetPointError(2,0,0.002072928);
   gre->SetPoint(3,-0.004,1.430697);
   gre->SetPointError(3,0,0.004903106);
   gre->SetPoint(4,-0.003,2.646445);
   gre->SetPointError(4,0,0.01181308);
   gre->SetPoint(5,-0.002,6.083346);
   gre->SetPointError(5,0,0.01969326);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,-0.0075,-0.0015);
   Graph_Graph5->SetMinimum(0.3814017);
   Graph_Graph5->SetMaximum(6.670965);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph5);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.002,3.600003);
   gre->SetPointError(0,0,0.01642368);
   gre->SetPoint(1,0.003,1.795493);
   gre->SetPointError(1,0,0.006115266);
   gre->SetPoint(2,0.004,1.045279);
   gre->SetPointError(2,0,0.004812847);
   gre->SetPoint(3,0.005,0.6788368);
   gre->SetPointError(3,0,0.002044753);
   gre->SetPoint(4,0.006,0.4772985);
   gre->SetPointError(4,0,0.001046811);
   gre->SetPoint(5,0.007,0.3530615);
   gre->SetPointError(5,0,0.001112236);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.0015,0.0075);
   Graph_Graph6->SetMinimum(0.02550156);
   Graph_Graph6->SetMaximum(3.942874);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph6);
   
   multigraph->Add(gre,"");
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,0.78515625);
   graph->SetPoint(1,-0.006,1.11328125);
   graph->SetPoint(2,-0.005,1.7109375);
   graph->SetPoint(3,-0.004,2.8984375);
   graph->SetPoint(4,-0.003,5.28125);
   graph->SetPoint(5,-0.002,10.03125);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,-0.0075,-0.0015);
   Graph_Graph9->SetMinimum(0.7066406);
   Graph_Graph9->SetMaximum(10.95586);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.002,6.875);
   graph->SetPoint(1,0.003,3.578125);
   graph->SetPoint(2,0.004,1.994140625);
   graph->SetPoint(3,0.005,1.25390625);
   graph->SetPoint(4,0.006,0.86328125);
   graph->SetPoint(5,0.007,0.630859375);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.0015,0.0075);
   Graph_Graph10->SetMinimum(0.006445312);
   Graph_Graph10->SetMaximum(7.499414);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,0.4251937178);
   graph->SetPoint(1,-0.006,0.5910526601);
   graph->SetPoint(2,-0.005,0.8794304104);
   graph->SetPoint(3,-0.004,1.430697291);
   graph->SetPoint(4,-0.003,2.646444559);
   graph->SetPoint(5,-0.002,6.083346154);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,-0.0075,-0.0015);
   Graph_Graph11->SetMinimum(0.3826743);
   Graph_Graph11->SetMaximum(6.649161);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.002,3.600002963);
   graph->SetPoint(1,0.003,1.795492518);
   graph->SetPoint(2,0.004,1.045278803);
   graph->SetPoint(3,0.005,0.6788368259);
   graph->SetPoint(4,0.006,0.4772985266);
   graph->SetPoint(5,0.007,0.3530615268);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.0015,0.0075);
   Graph_Graph12->SetMinimum(0.02836738);
   Graph_Graph12->SetMaximum(3.924697);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   multigraph->Add(graph,"PL");
   multigraph->Draw("pa3");
   multigraph->GetXaxis()->SetTitle("f_{4}^{#gamma}");
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
   text = pt->AddText("-4.8 #upoint 10^{-3} < f_{4}^{#gamma} < 4.1 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
