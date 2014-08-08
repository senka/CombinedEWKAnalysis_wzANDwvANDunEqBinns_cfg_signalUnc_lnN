{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 13:57:13 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",20,42,600,600);
   canv->Range(-0.009625,-1.146379,0.009625,1.238487);
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
   
   TH1F *Graph_Graph_Graph913 = new TH1F("Graph_Graph_Graph913","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph913->SetMinimum(0.2042633);
   Graph_Graph_Graph913->SetMaximum(21.69125);
   Graph_Graph_Graph913->SetDirectory(0);
   Graph_Graph_Graph913->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph913->SetLineColor(ci);
   Graph_Graph_Graph913->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph913->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph913->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph913);
   
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
   
   TH1F *Graph_Graph_Graph1014 = new TH1F("Graph_Graph_Graph1014","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph1014->SetMinimum(0.1668943);
   Graph_Graph_Graph1014->SetMaximum(17.83499);
   Graph_Graph_Graph1014->SetDirectory(0);
   Graph_Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1014->SetLineColor(ci);
   Graph_Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph1014);
   
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
   
   TH1F *Graph_Graph_Graph1115 = new TH1F("Graph_Graph_Graph1115","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph1115->SetMinimum(0.3435945);
   Graph_Graph_Graph1115->SetMaximum(15.7904);
   Graph_Graph_Graph1115->SetDirectory(0);
   Graph_Graph_Graph1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1115->SetLineColor(ci);
   Graph_Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph1115);
   
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
   
   TH1F *Graph_Graph_Graph1216 = new TH1F("Graph_Graph_Graph1216","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph1216->SetMinimum(0.2788586);
   Graph_Graph_Graph1216->SetMaximum(12.17376);
   Graph_Graph_Graph1216->SetDirectory(0);
   Graph_Graph_Graph1216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1216->SetLineColor(ci);
   Graph_Graph_Graph1216->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1216->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1216->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph1216);
   
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
   
   TH1F *Graph_Graph_Graph57 = new TH1F("Graph_Graph_Graph57","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph57->SetMinimum(0.3814017);
   Graph_Graph_Graph57->SetMaximum(6.670965);
   Graph_Graph_Graph57->SetDirectory(0);
   Graph_Graph_Graph57->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph57->SetLineColor(ci);
   Graph_Graph_Graph57->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph57->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph57->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph57->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph57->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph57->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph57->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph57->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph57->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph57->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph57);
   
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
   
   TH1F *Graph_Graph_Graph68 = new TH1F("Graph_Graph_Graph68","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph68->SetMinimum(0.02550156);
   Graph_Graph_Graph68->SetMaximum(3.942874);
   Graph_Graph_Graph68->SetDirectory(0);
   Graph_Graph_Graph68->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph68->SetLineColor(ci);
   Graph_Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph68->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph68->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph68->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph68->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph68->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph68);
   
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
   
   TH1F *Graph_Graph_Graph913 = new TH1F("Graph_Graph_Graph913","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph913->SetMinimum(0.7066406);
   Graph_Graph_Graph913->SetMaximum(10.95586);
   Graph_Graph_Graph913->SetDirectory(0);
   Graph_Graph_Graph913->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph913->SetLineColor(ci);
   Graph_Graph_Graph913->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph913->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph913->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph913->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph913->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph913->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph913);
   
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
   
   TH1F *Graph_Graph_Graph1014 = new TH1F("Graph_Graph_Graph1014","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph1014->SetMinimum(0.006445312);
   Graph_Graph_Graph1014->SetMaximum(7.499414);
   Graph_Graph_Graph1014->SetDirectory(0);
   Graph_Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1014->SetLineColor(ci);
   Graph_Graph_Graph1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1014->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1014);
   
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
   
   TH1F *Graph_Graph_Graph1115 = new TH1F("Graph_Graph_Graph1115","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph1115->SetMinimum(0.3826743);
   Graph_Graph_Graph1115->SetMaximum(6.649161);
   Graph_Graph_Graph1115->SetDirectory(0);
   Graph_Graph_Graph1115->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1115->SetLineColor(ci);
   Graph_Graph_Graph1115->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1115->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1115->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1115->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1115->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1115->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1115);
   
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
   
   TH1F *Graph_Graph_Graph1216 = new TH1F("Graph_Graph_Graph1216","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph1216->SetMinimum(0.02836738);
   Graph_Graph_Graph1216->SetMaximum(3.924697);
   Graph_Graph_Graph1216->SetDirectory(0);
   Graph_Graph_Graph1216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph1216->SetLineColor(ci);
   Graph_Graph_Graph1216->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1216->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1216->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1216->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph1216->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph1216->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1216);
   
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
