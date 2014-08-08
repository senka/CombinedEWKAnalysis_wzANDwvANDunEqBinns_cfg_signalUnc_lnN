{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 18:33:36 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.345344,0.0275,1.260594);
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
   grae->SetPoint(0,-0.007,1.960938);
   grae->SetPointError(0,0,0,1.216011,3.145727);
   grae->SetPoint(1,-0.008,2.867188);
   grae->SetPointError(1,0,0,2.102791,5.828475);
   grae->SetPoint(2,-0.009,2.367188);
   grae->SetPointError(2,0,0,1.749962,4.812065);
   grae->SetPoint(3,-0.01,1.976562);
   grae->SetPointError(3,0,0,1.46891,4.017995);
   grae->SetPoint(4,-0.012,1.417969);
   grae->SetPointError(4,0,0,1.060707,2.882474);
   grae->SetPoint(5,-0.014,1.058594);
   grae->SetPointError(5,0,0,0.7939453,2.15193);
   grae->SetPoint(6,-0.016,0.8164062);
   grae->SetPointError(6,0,0,0.613102,1.659607);
   grae->SetPoint(7,-0.018,0.6503906);
   grae->SetPointError(7,0,0,0.4896984,1.322127);
   grae->SetPoint(8,-0.02,0.5292969);
   grae->SetPointError(8,0,0,0.3985233,1.075965);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph15->SetMinimum(0.1176962);
   Graph_Graph_Graph15->SetMaximum(9.552151);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,3.476562);
   grae->SetPointError(0,0,0,2.637978,7.067225);
   grae->SetPoint(1,0.008,2.851562);
   grae->SetPointError(1,0,0,2.180443,5.796712);
   grae->SetPoint(2,0.009,2.367188);
   grae->SetPointError(2,0,0,1.819313,4.812065);
   grae->SetPoint(3,0.01,1.976562);
   grae->SetPointError(3,0,0,1.522957,4.017995);
   grae->SetPoint(4,0.012,1.417969);
   grae->SetPointError(4,0,0,1.092556,2.882474);
   grae->SetPoint(5,0.014,1.066406);
   grae->SetPointError(5,0,0,0.8216743,2.167811);
   grae->SetPoint(6,0.016,0.8242188);
   grae->SetPointError(6,0,0,0.635067,1.675488);
   grae->SetPoint(7,0.018,0.6542969);
   grae->SetPointError(7,0,0,0.5028629,1.330068);
   grae->SetPoint(8,0.02,0.5332031);
   grae->SetPointError(8,0,0,0.4097958,1.083906);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph26->SetMinimum(0.1110666);
   Graph_Graph_Graph26->SetMaximum(11.58582);
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
   grae->SetPoint(0,-0.007,1.960938);
   grae->SetPointError(0,0,0,0.7932572,1.328785);
   grae->SetPoint(1,-0.008,2.867188);
   grae->SetPointError(1,0,0,1.466204,2.902898);
   grae->SetPoint(2,-0.009,2.367188);
   grae->SetPointError(2,0,0,1.227024,2.39667);
   grae->SetPoint(3,-0.01,1.976562);
   grae->SetPointError(3,0,0,1.038565,2.00118);
   grae->SetPoint(4,-0.012,1.417969);
   grae->SetPointError(4,0,0,0.7520248,1.435629);
   grae->SetPoint(5,-0.014,1.058594);
   grae->SetPointError(5,0,0,0.5644455,1.071778);
   grae->SetPoint(6,-0.016,0.8164062);
   grae->SetPointError(6,0,0,0.4358772,0.8265744);
   grae->SetPoint(7,-0.018,0.6503906);
   grae->SetPointError(7,0,0,0.3491014,0.6584911);
   grae->SetPoint(8,-0.02,0.5292969);
   grae->SetPointError(8,0,0,0.2841035,0.5358891);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph37->SetMinimum(0.220674);
   Graph_Graph_Graph37->SetMaximum(6.322575);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,3.476562);
   grae->SetPointError(0,0,0,1.880589,3.519863);
   grae->SetPoint(1,0.008,2.851562);
   grae->SetPointError(1,0,0,1.562935,2.887078);
   grae->SetPoint(2,0.009,2.367188);
   grae->SetPointError(2,0,0,1.311185,2.39667);
   grae->SetPoint(3,0.01,1.976562);
   grae->SetPointError(3,0,0,1.100574,2.00118);
   grae->SetPoint(4,0.012,1.417969);
   grae->SetPointError(4,0,0,0.7916763,1.435629);
   grae->SetPoint(5,0.014,1.066406);
   grae->SetPointError(5,0,0,0.5953929,1.079688);
   grae->SetPoint(6,0.016,0.8242188);
   grae->SetPointError(6,0,0,0.4601755,0.8344843);
   grae->SetPoint(7,0.018,0.6542969);
   grae->SetPointError(7,0,0,0.3643792,0.662446);
   grae->SetPoint(8,0.02,0.5332031);
   grae->SetPointError(8,0,0,0.2969418,0.5398442);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph48->SetMinimum(0.2126352);
   Graph_Graph_Graph48->SetMaximum(7.672442);
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
   gre->SetPoint(0,-0.007,1.216116);
   gre->SetPointError(0,0,0.003105639);
   gre->SetPoint(1,-0.008,1.705083);
   gre->SetPointError(1,0,0.006935093);
   gre->SetPoint(2,-0.009,1.407351);
   gre->SetPointError(2,0,0.004922951);
   gre->SetPoint(3,-0.01,1.177073);
   gre->SetPointError(3,0,0.004648236);
   gre->SetPoint(4,-0.012,0.8530853);
   gre->SetPointError(4,0,0.002679115);
   gre->SetPoint(5,-0.014,0.6435612);
   gre->SetPointError(5,0,0.001986994);
   gre->SetPoint(6,-0.016,0.5009685);
   gre->SetPointError(6,0,0.001071264);
   gre->SetPoint(7,-0.018,0.401578);
   gre->SetPointError(7,0,0.001339024);
   gre->SetPoint(8,-0.02,0.3281165);
   gre->SetPointError(8,0,0.001050458);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph13->SetMinimum(0.1885708);
   Graph_Graph_Graph13->SetMaximum(1.850514);
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
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.007,2.461193);
   gre->SetPointError(0,0,0.007947281);
   gre->SetPoint(1,0.008,1.993776);
   gre->SetPointError(1,0,0.006383138);
   gre->SetPoint(2,0.009,1.635857);
   gre->SetPointError(2,0,0.004998288);
   gre->SetPoint(3,0.01,1.355202);
   gre->SetPointError(3,0,0.004520033);
   gre->SetPoint(4,0.012,0.9674879);
   gre->SetPointError(4,0,0.002093943);
   gre->SetPoint(5,0.014,0.7198364);
   gre->SetPointError(5,0,0.002556388);
   gre->SetPoint(6,0.016,0.5559157);
   gre->SetPointError(6,0,0.001791993);
   gre->SetPoint(7,0.018,0.4407977);
   gre->SetPointError(7,0,0.001073941);
   gre->SetPoint(8,0.02,0.3570742);
   gre->SetPointError(8,0,0.001226221);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph24->SetMinimum(0.1445187);
   Graph_Graph_Graph24->SetMaximum(2.68047);
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
   graph->SetPoint(0,-0.007,1.9609375);
   graph->SetPoint(1,-0.008,2.8671875);
   graph->SetPoint(2,-0.009,2.3671875);
   graph->SetPoint(3,-0.01,1.9765625);
   graph->SetPoint(4,-0.012,1.41796875);
   graph->SetPoint(5,-0.014,1.05859375);
   graph->SetPoint(6,-0.016,0.81640625);
   graph->SetPoint(7,-0.018,0.650390625);
   graph->SetPoint(8,-0.02,0.529296875);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph15->SetMinimum(0.2955078);
   Graph_Graph_Graph15->SetMaximum(3.100977);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.007,3.4765625);
   graph->SetPoint(1,0.008,2.8515625);
   graph->SetPoint(2,0.009,2.3671875);
   graph->SetPoint(3,0.01,1.9765625);
   graph->SetPoint(4,0.012,1.41796875);
   graph->SetPoint(5,0.014,1.06640625);
   graph->SetPoint(6,0.016,0.82421875);
   graph->SetPoint(7,0.018,0.654296875);
   graph->SetPoint(8,0.02,0.533203125);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph26->SetMinimum(0.2388672);
   Graph_Graph_Graph26->SetMaximum(3.770898);
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
   graph->SetPoint(0,-0.007,1.216116228);
   graph->SetPoint(1,-0.008,1.705083197);
   graph->SetPoint(2,-0.009,1.407351045);
   graph->SetPoint(3,-0.01,1.177073441);
   graph->SetPoint(4,-0.012,0.8530853093);
   graph->SetPoint(5,-0.014,0.643561213);
   graph->SetPoint(6,-0.016,0.500968471);
   graph->SetPoint(7,-0.018,0.401577981);
   graph->SetPoint(8,-0.02,0.3281165282);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0213,-0.0057);
   Graph_Graph_Graph37->SetMinimum(0.1904199);
   Graph_Graph_Graph37->SetMaximum(1.84278);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.007,2.461193023);
   graph->SetPoint(1,0.008,1.993776432);
   graph->SetPoint(2,0.009,1.635856693);
   graph->SetPoint(3,0.01,1.35520206);
   graph->SetPoint(4,0.012,0.967487886);
   graph->SetPoint(5,0.014,0.7198364013);
   graph->SetPoint(6,0.016,0.555915691);
   graph->SetPoint(7,0.018,0.440797736);
   graph->SetPoint(8,0.02,0.3570741929);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0057,0.0213);
   Graph_Graph_Graph48->SetMinimum(0.1466623);
   Graph_Graph_Graph48->SetMaximum(2.671605);
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
   text = pt->AddText("-1.1 #upoint 10^{-2} < f_{4}^{#gamma} < 1.2 #upoint 10^{-2}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
