{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 12:05:25 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",20,42,600,600);
   canv->Range(-0.009625,-1.101287,0.009625,1.233476);
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
   grae->SetPoint(0,-0.007,0.7011719);
   grae->SetPointError(0,0,0,0.4978046,1.425356);
   grae->SetPoint(1,-0.006,0.9648438);
   grae->SetPointError(1,0,0,0.6868858,1.961353);
   grae->SetPoint(2,-0.005,1.414062);
   grae->SetPointError(2,0,0,1.009453,2.874534);
   grae->SetPoint(3,-0.004,2.273438);
   grae->SetPointError(3,0,0,1.631813,4.621488);
   grae->SetPoint(4,-0.003,4.226562);
   grae->SetPointError(4,0,0,3.029587,8.591839);
   grae->SetPoint(5,-0.002,9.09375);
   grae->SetPointError(5,0,0,6.012177,14.87021);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.1830305);
   Graph_Graph_Graph15->SetMaximum(26.34002);
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
   grae->SetPoint(0,0.002,13.0625);
   grae->SetPointError(0,0,0,7.832397,17.5521);
   grae->SetPoint(1,0.003,5.609375);
   grae->SetPointError(1,0,0,3.993393,11.40285);
   grae->SetPoint(2,0.004,2.773438);
   grae->SetPointError(2,0,0,1.982574,5.637898);
   grae->SetPoint(3,0.005,1.632812);
   grae->SetPointError(3,0,0,1.159233,3.319213);
   grae->SetPoint(4,0.006,1.082031);
   grae->SetPointError(4,0,0,0.7660866,2.199574);
   grae->SetPoint(5,0.007,0.7714844);
   grae->SetPointError(5,0,0,0.5447102,1.568289);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.2040968);
   Graph_Graph_Graph26->SetMaximum(33.65338);
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
   grae->SetPoint(0,-0.007,0.7011719);
   grae->SetPointError(0,0,0,0.3587694,0.7099049);
   grae->SetPoint(1,-0.006,0.9648438);
   grae->SetPointError(1,0,0,0.4977239,0.9768608);
   grae->SetPoint(2,-0.005,1.414062);
   grae->SetPointError(2,0,0,0.731459,1.431674);
   grae->SetPoint(3,-0.004,2.273438);
   grae->SetPointError(3,0,0,1.182427,2.301753);
   grae->SetPoint(4,-0.003,4.226562);
   grae->SetPointError(4,0,0,2.18935,4.279203);
   grae->SetPoint(5,-0.002,9.09375);
   grae->SetPointError(5,0,0,4.015946,6.452158);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.3081623);
   Graph_Graph_Graph37->SetMaximum(17.06626);
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
   grae->SetPoint(0,0.002,13.0625);
   grae->SetPointError(0,0,0,4.987034,7.549814);
   grae->SetPoint(1,0.003,5.609375);
   grae->SetPointError(1,0,0,2.862452,5.679239);
   grae->SetPoint(2,0.004,2.773438);
   grae->SetPointError(2,0,0,1.440464,2.807981);
   grae->SetPoint(3,0.005,1.632812);
   grae->SetPointError(3,0,0,0.8377271,1.653149);
   grae->SetPoint(4,0.006,1.082031);
   grae->SetPointError(4,0,0,0.552121,1.095508);
   grae->SetPoint(5,0.007,0.7714844);
   grae->SetPointError(5,0,0,0.3925743,0.7810931);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.3410191);
   Graph_Graph_Graph48->SetMaximum(22.63565);
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
   gre->SetPoint(0,-0.007,0.3900691);
   gre->SetPointError(0,0,0.001397092);
   gre->SetPoint(1,-0.006,0.532572);
   gre->SetPointError(1,0,0.002248323);
   gre->SetPoint(2,-0.005,0.772414);
   gre->SetPointError(2,0,0.002784549);
   gre->SetPoint(3,-0.004,1.223894);
   gre->SetPointError(3,0,0.004841694);
   gre->SetPoint(4,-0.003,2.257971);
   gre->SetPointError(4,0,0.007197389);
   gre->SetPoint(5,-0.002,5.442267);
   gre->SetPointError(5,0,0.01629053);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph13->SetMinimum(0.3498048);
   Graph_Graph_Graph13->SetMaximum(5.965546);
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
   gre->SetPoint(0,0.002,9.382073);
   gre->SetPointError(0,0,0.0412766);
   gre->SetPoint(1,0.003,3.238483);
   gre->SetPointError(1,0,0.007544829);
   gre->SetPoint(2,0.004,1.572858);
   gre->SetPointError(2,0,0.005623458);
   gre->SetPoint(3,0.005,0.9333336);
   gre->SetPointError(3,0,0.002054507);
   gre->SetPoint(4,0.006,0.6208137);
   gre->SetPointError(4,0,0.001605748);
   gre->SetPoint(5,0.007,0.4437151);
   gre->SetPointError(5,0,0.0010162);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph24->SetMinimum(0.398429);
   Graph_Graph_Graph24->SetMaximum(10.32141);
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
   graph->SetPoint(0,-0.007,0.701171875);
   graph->SetPoint(1,-0.006,0.96484375);
   graph->SetPoint(2,-0.005,1.4140625);
   graph->SetPoint(3,-0.004,2.2734375);
   graph->SetPoint(4,-0.003,4.2265625);
   graph->SetPoint(5,-0.002,9.09375);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.6310547);
   Graph_Graph_Graph15->SetMaximum(9.933008);
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
   graph->SetPoint(0,0.002,13.0625);
   graph->SetPoint(1,0.003,5.609375);
   graph->SetPoint(2,0.004,2.7734375);
   graph->SetPoint(3,0.005,1.6328125);
   graph->SetPoint(4,0.006,1.08203125);
   graph->SetPoint(5,0.007,0.771484375);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.6943359);
   Graph_Graph_Graph26->SetMaximum(14.2916);
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
   graph->SetPoint(0,-0.007,0.3900690885);
   graph->SetPoint(1,-0.006,0.5325720323);
   graph->SetPoint(2,-0.005,0.7724139855);
   graph->SetPoint(3,-0.004,1.223893983);
   graph->SetPoint(4,-0.003,2.257971216);
   graph->SetPoint(5,-0.002,5.442267228);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.3510622);
   Graph_Graph_Graph37->SetMaximum(5.947487);
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
   graph->SetPoint(0,0.002,9.382073276);
   graph->SetPoint(1,0.003,3.238483192);
   graph->SetPoint(2,0.004,1.572857883);
   graph->SetPoint(3,0.005,0.933333598);
   graph->SetPoint(4,0.006,0.6208136915);
   graph->SetPoint(5,0.007,0.4437150815);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.3993436);
   Graph_Graph_Graph48->SetMaximum(10.27591);
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
   multigraph->GetXaxis()->SetTitle("f_{5}^{#gamma}");
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
   text = pt->AddText("-4.5 #upoint 10^{-3} < f_{5}^{#gamma} < 4.9 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
