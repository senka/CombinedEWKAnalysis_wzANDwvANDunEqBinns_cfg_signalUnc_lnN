{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:17:00 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.397912,0.0275,1.266435);
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
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,1.898438);
   grae->SetPointError(0,0,0,1.21804,3.392612);
   grae->SetPoint(1,-0.008,1.570312);
   grae->SetPointError(1,0,0,1.013649,2.838119);
   grae->SetPoint(2,-0.009,1.300781);
   grae->SetPointError(2,0,0,0.8383942,2.406879);
   grae->SetPoint(3,-0.01,1.097656);
   grae->SetPointError(3,0,0,0.7085457,2.053043);
   grae->SetPoint(4,-0.012,0.8007812);
   grae->SetPointError(4,0,0,0.5169106,1.515328);
   grae->SetPoint(5,-0.014,0.6074219);
   grae->SetPointError(5,0,0,0.3920956,1.149431);
   grae->SetPoint(6,-0.016,0.4746094);
   grae->SetPointError(6,0,0,0.3063641,0.8981088);
   grae->SetPoint(7,-0.018,0.3818359);
   grae->SetPointError(7,0,0,0.2464781,0.7225525);
   grae->SetPoint(8,-0.02,0.3134766);
   grae->SetPointError(8,0,0,0.2026577,0.5863229);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph15->SetMinimum(0.09973698);
   Graph_Graph_Graph15->SetMaximum(5.809073);
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
   
   grae = new TGraphAsymmErrors(8);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,2.015625);
   grae->SetPointError(0,0,0,1.24205,3.136291);
   grae->SetPoint(1,0.009,1.378906);
   grae->SetPointError(1,0,0,0.8604698,2.277133);
   grae->SetPoint(2,0.01,1.160156);
   grae->SetPointError(2,0,0,0.7262306,1.940311);
   grae->SetPoint(3,0.012,0.8476562);
   grae->SetPointError(3,0,0,0.5355797,1.438997);
   grae->SetPoint(4,0.014,0.6386719);
   grae->SetPointError(4,0,0,0.4041595,1.111946);
   grae->SetPoint(5,0.016,0.4980469);
   grae->SetPointError(5,0,0,0.316143,0.8680135);
   grae->SetPoint(6,0.018,0.3964844);
   grae->SetPointError(6,0,0,0.2512875,0.7073047);
   grae->SetPoint(7,0.02,0.3251953);
   grae->SetPointError(7,0,0,0.207058,0.5734455);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph26->SetMinimum(0.1063236);
   Graph_Graph_Graph26->SetMaximum(5.655293);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,1.898438);
   grae->SetPointError(0,0,0,0.8040971,1.407509);
   grae->SetPoint(1,-0.008,1.570312);
   grae->SetPointError(1,0,0,0.6691667,1.164236);
   grae->SetPoint(2,-0.009,1.300781);
   grae->SetPointError(2,0,0,0.5534711,0.9851444);
   grae->SetPoint(3,-0.01,1.097656);
   grae->SetPointError(3,0,0,0.4705186,0.8313079);
   grae->SetPoint(4,-0.012,0.8007812);
   grae->SetPointError(4,0,0,0.3412417,0.619238);
   grae->SetPoint(5,-0.014,0.6074219);
   grae->SetPointError(5,0,0,0.2588443,0.4697146);
   grae->SetPoint(6,-0.016,0.4746094);
   grae->SetPointError(6,0,0,0.2022482,0.3670118);
   grae->SetPoint(7,-0.018,0.3818359);
   grae->SetPointError(7,0,0,0.162714,0.2952708);
   grae->SetPoint(8,-0.02,0.3134766);
   grae->SetPointError(8,0,0,0.1337858,0.2374109);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph37->SetMinimum(0.1617217);
   Graph_Graph_Graph37->SetMaximum(3.618572);
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
   
   grae = new TGraphAsymmErrors(8);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,2.015625);
   grae->SetPointError(0,0,0,0.8053919,1.333705);
   grae->SetPoint(1,0.009,1.378906);
   grae->SetPointError(1,0,0,0.5613221,0.9563701);
   grae->SetPoint(2,0.01,1.160156);
   grae->SetPointError(2,0,0,0.473752,0.8046513);
   grae->SetPoint(3,0.012,0.8476562);
   grae->SetPointError(3,0,0,0.3535663,0.6014254);
   grae->SetPoint(4,0.014,0.6386719);
   grae->SetPointError(4,0,0,0.2668085,0.4582392);
   grae->SetPoint(5,0.016,0.4980469);
   grae->SetPointError(5,0,0,0.2087038,0.361313);
   grae->SetPoint(6,0.018,0.3964844);
   grae->SetPointError(6,0,0,0.165889,0.2876335);
   grae->SetPoint(7,0.02,0.3251953);
   grae->SetPointError(7,0,0,0.1366906,0.2359161);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph48->SetMinimum(0.1696542);
   Graph_Graph_Graph48->SetMaximum(3.665412);
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
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,1.346217);
   gre->SetPointError(0,0,0.003696671);
   gre->SetPoint(1,-0.008,1.109037);
   gre->SetPointError(1,0,0.00304446);
   gre->SetPoint(2,-0.009,0.9233416);
   gre->SetPointError(2,0,0.002534807);
   gre->SetPoint(3,-0.01,0.7777347);
   gre->SetPointError(3,0,0.003168876);
   gre->SetPoint(4,-0.012,0.5679704);
   gre->SetPointError(4,0,0.001115922);
   gre->SetPoint(5,-0.014,0.4306354);
   gre->SetPointError(5,0,0.001228569);
   gre->SetPoint(6,-0.016,0.3359923);
   gre->SetPointError(6,0,0.00117949);
   gre->SetPoint(7,-0.018,0.2696907);
   gre->SetPointError(7,0,0.0007884181);
   gre->SetPoint(8,-0.02,0.2205739);
   gre->SetPointError(8,0,0.0006148907);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph13->SetMinimum(0.1069636);
   Graph_Graph_Graph13->SetMaximum(1.462909);
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
   
   gre = new TGraphErrors(8);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.007,1.295084);
   gre->SetPointError(0,0,0.003399499);
   gre->SetPoint(1,0.009,0.894748);
   gre->SetPointError(1,0,0.00242302);
   gre->SetPoint(2,0.01,0.7558665);
   gre->SetPointError(2,0,0.003522591);
   gre->SetPoint(3,0.012,0.5543667);
   gre->SetPointError(3,0,0.001335391);
   gre->SetPoint(4,0.014,0.4216501);
   gre->SetPointError(4,0,0.00121919);
   gre->SetPoint(5,0.016,0.3298611);
   gre->SetPointError(5,0,0.00108081);
   gre->SetPoint(6,0.018,0.2653137);
   gre->SetPointError(6,0,0.0008591017);
   gre->SetPoint(7,0.02,0.2173571);
   gre->SetPointError(7,0,0.0006116755);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph24->SetMinimum(0.1085716);
   Graph_Graph_Graph24->SetMaximum(1.406658);
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
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,1.8984375);
   graph->SetPoint(1,-0.008,1.5703125);
   graph->SetPoint(2,-0.009,1.30078125);
   graph->SetPoint(3,-0.01,1.09765625);
   graph->SetPoint(4,-0.012,0.80078125);
   graph->SetPoint(5,-0.014,0.607421875);
   graph->SetPoint(6,-0.016,0.474609375);
   graph->SetPoint(7,-0.018,0.3818359375);
   graph->SetPoint(8,-0.02,0.3134765625);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph15->SetMinimum(0.1549805);
   Graph_Graph_Graph15->SetMaximum(2.056934);
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
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.007,2.015625);
   graph->SetPoint(1,0.009,1.37890625);
   graph->SetPoint(2,0.01,1.16015625);
   graph->SetPoint(3,0.012,0.84765625);
   graph->SetPoint(4,0.014,0.638671875);
   graph->SetPoint(5,0.016,0.498046875);
   graph->SetPoint(6,0.018,0.396484375);
   graph->SetPoint(7,0.02,0.3251953125);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph26->SetMinimum(0.1561523);
   Graph_Graph_Graph26->SetMaximum(2.184668);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,1.346217033);
   graph->SetPoint(1,-0.008,1.109037141);
   graph->SetPoint(2,-0.009,0.9233416355);
   graph->SetPoint(3,-0.01,0.7777347027);
   graph->SetPoint(4,-0.012,0.5679703948);
   graph->SetPoint(5,-0.014,0.4306353848);
   graph->SetPoint(6,-0.016,0.3359922503);
   graph->SetPoint(7,-0.018,0.2696907203);
   graph->SetPoint(8,-0.02,0.2205739461);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph37->SetMinimum(0.1080096);
   Graph_Graph_Graph37->SetMaximum(1.458781);
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
   
   graph = new TGraph(8);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.007,1.295084426);
   graph->SetPoint(1,0.009,0.8947479804);
   graph->SetPoint(2,0.01,0.7558665356);
   graph->SetPoint(3,0.012,0.5543666675);
   graph->SetPoint(4,0.014,0.4216500794);
   graph->SetPoint(5,0.016,0.3298611172);
   graph->SetPoint(6,0.018,0.2653136833);
   graph->SetPoint(7,0.02,0.2173570875);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph48->SetMinimum(0.1095844);
   Graph_Graph_Graph48->SetMaximum(1.402857);
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
   TLine *line = new TLine(-0.007,1,0.02,1);

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
   TText *text = pt->AddText("CMS preliminary, #sqrt{s}=7 TeV, #scale[0.5]{#int} L=5.1 fb^{-1}");
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
   text = pt->AddText("-8.6 #upoint 10^{-3} < f_{5}^{#gamma} < 8.5 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
