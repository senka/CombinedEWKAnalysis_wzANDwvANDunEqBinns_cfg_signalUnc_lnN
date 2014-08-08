{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:44:04 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.009625,-1.30597,0.009625,1.256219);
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
   grae->SetPoint(0,-0.007,0.2841797);
   grae->SetPointError(0,0,0,0.1504154,0.3786137);
   grae->SetPoint(1,-0.006,0.3896484);
   grae->SetPointError(1,0,0,0.2070007,0.5123411);
   grae->SetPoint(2,-0.005,0.5644531);
   grae->SetPointError(2,0,0,0.2998657,0.752023);
   grae->SetPoint(3,-0.004,0.8945312);
   grae->SetPointError(3,0,0,0.4752197,1.172719);
   grae->SetPoint(4,-0.003,1.617188);
   grae->SetPointError(4,0,0,0.8528137,2.05686);
   grae->SetPoint(5,-0.002,3.578125);
   grae->SetPointError(5,0,0,1.810028,3.908666);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.1203878);
   Graph_Graph_Graph15->SetMaximum(8.222093);
   Graph_Graph_Graph15->SetDirectory(0);
   Graph_Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph15->SetLineColor(ci);
   Graph_Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph15);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,5.296875);
   grae->SetPointError(0,0,0,2.555328,5.220908);
   grae->SetPoint(1,0.003,2.164062);
   grae->SetPointError(1,0,0,1.120071,2.632056);
   grae->SetPoint(2,0.004,1.089844);
   grae->SetPointError(2,0,0,0.5725937,1.386145);
   grae->SetPoint(3,0.005,0.6542969);
   grae->SetPointError(3,0,0,0.3437614,0.8424935);
   grae->SetPoint(4,0.006,0.4394531);
   grae->SetPointError(4,0,0,0.2317429,0.5640886);
   grae->SetPoint(5,0.007,0.3154297);
   grae->SetPointError(5,0,0,0.1663399,0.4061574);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.1341808);
   Graph_Graph_Graph26->SetMaximum(11.55465);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph26->SetLineColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph26);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,0.2841797);
   grae->SetPointError(0,0,0,0.09577233,0.1574526);
   grae->SetPoint(1,-0.006,0.3896484);
   grae->SetPointError(1,0,0,0.1318012,0.2158886);
   grae->SetPoint(2,-0.005,0.5644531);
   grae->SetPointError(2,0,0,0.1909301,0.3127409);
   grae->SetPoint(3,-0.004,0.8945312);
   grae->SetPointError(3,0,0,0.3025813,0.4884926);
   grae->SetPoint(4,-0.003,1.617188);
   grae->SetPointError(4,0,0,0.5430025,0.870234);
   grae->SetPoint(5,-0.002,3.578125);
   grae->SetPointError(5,0,0,1.138338,1.697245);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.1695666);
   Graph_Graph_Graph37->SetMaximum(5.784066);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph37->SetLineColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph37);
   
   multigraph->Add(grae,"");
   
   grae = new TGraphAsymmErrors(6);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.002,5.296875);
   grae->SetPointError(0,0,0,1.567135,2.343606);
   grae->SetPoint(1,0.003,2.164062);
   grae->SetPointError(1,0,0,0.7087952,1.130012);
   grae->SetPoint(2,0.004,1.089844);
   grae->SetPointError(2,0,0,0.3645811,0.5864621);
   grae->SetPoint(3,0.005,0.6542969);
   grae->SetPointError(3,0,0,0.2188793,0.3573036);
   grae->SetPoint(4,0.006,0.4394531);
   grae->SetPointError(4,0,0,0.147555,0.2364767);
   grae->SetPoint(5,0.007,0.3154297);
   grae->SetPointError(5,0,0,0.1059117,0.1722523);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.1885662);
   Graph_Graph_Graph48->SetMaximum(8.383578);
   Graph_Graph_Graph48->SetDirectory(0);
   Graph_Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph48->SetLineColor(ci);
   Graph_Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph48);
   
   multigraph->Add(grae,"");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,0.1493992);
   gre->SetPointError(0,0,0.0005223337);
   gre->SetPoint(1,-0.006,0.2028367);
   gre->SetPointError(1,0,0.0006572412);
   gre->SetPoint(2,-0.005,0.2915246);
   gre->SetPointError(2,0,0.001146783);
   gre->SetPoint(3,-0.004,0.4540005);
   gre->SetPointError(3,0,0.001184879);
   gre->SetPoint(4,-0.003,0.8074799);
   gre->SetPointError(4,0,0.002691546);
   gre->SetPoint(5,-0.002,1.731149);
   gre->SetPointError(5,0,0.005352567);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph13->SetMinimum(0.1339892);
   Graph_Graph_Graph13->SetMaximum(1.895264);
   Graph_Graph_Graph13->SetDirectory(0);
   Graph_Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph13->SetLineColor(ci);
   Graph_Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph13->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph13);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.002,2.737093);
   gre->SetPointError(0,0,0.005967513);
   gre->SetPoint(1,0.003,1.069025);
   gre->SetPointError(1,0,0.003465738);
   gre->SetPoint(2,0.004,0.5557377);
   gre->SetPointError(2,0,0.001313731);
   gre->SetPoint(3,0.005,0.3400438);
   gre->SetPointError(3,0,0.001245594);
   gre->SetPoint(4,0.006,0.230167);
   gre->SetPointError(4,0,0.0005946323);
   gre->SetPoint(5,0.007,0.166202);
   gre->SetPointError(5,0,0.0005611864);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph24->SetMinimum(0.1490767);
   Graph_Graph_Graph24->SetMaximum(3.000803);
   Graph_Graph_Graph24->SetDirectory(0);
   Graph_Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph24->SetLineColor(ci);
   Graph_Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph24->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph24->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph24->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph24);
   
   multigraph->Add(gre,"");
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,0.2841796875);
   graph->SetPoint(1,-0.006,0.3896484375);
   graph->SetPoint(2,-0.005,0.564453125);
   graph->SetPoint(3,-0.004,0.89453125);
   graph->SetPoint(4,-0.003,1.6171875);
   graph->SetPoint(5,-0.002,3.578125);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.2557617);
   Graph_Graph_Graph15->SetMaximum(3.90752);
   Graph_Graph_Graph15->SetDirectory(0);
   Graph_Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph15->SetLineColor(ci);
   Graph_Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph15);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.002,5.296875);
   graph->SetPoint(1,0.003,2.1640625);
   graph->SetPoint(2,0.004,1.08984375);
   graph->SetPoint(3,0.005,0.654296875);
   graph->SetPoint(4,0.006,0.439453125);
   graph->SetPoint(5,0.007,0.3154296875);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.2838867);
   Graph_Graph_Graph26->SetMaximum(5.79502);
   Graph_Graph_Graph26->SetDirectory(0);
   Graph_Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph26->SetLineColor(ci);
   Graph_Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph26);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,0.1493992035);
   graph->SetPoint(1,-0.006,0.2028367328);
   graph->SetPoint(2,-0.005,0.2915246445);
   graph->SetPoint(3,-0.004,0.45400053);
   graph->SetPoint(4,-0.003,0.807479924);
   graph->SetPoint(5,-0.002,1.731148711);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.1344593);
   Graph_Graph_Graph37->SetMaximum(1.889324);
   Graph_Graph_Graph37->SetDirectory(0);
   Graph_Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph37->SetLineColor(ci);
   Graph_Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph37->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph37);
   
   multigraph->Add(graph,"PL");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.002,2.737093187);
   graph->SetPoint(1,0.003,1.069024585);
   graph->SetPoint(2,0.004,0.5557377271);
   graph->SetPoint(3,0.005,0.3400438356);
   graph->SetPoint(4,0.006,0.2301670373);
   graph->SetPoint(5,0.007,0.1662020022);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.1495818);
   Graph_Graph_Graph48->SetMaximum(2.994182);
   Graph_Graph_Graph48->SetDirectory(0);
   Graph_Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph48->SetLineColor(ci);
   Graph_Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph48);
   
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
   text = pt->AddText("-2.8 #upoint 10^{-3} < f_{4}^{Z} < 3.1 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
