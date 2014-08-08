{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:36:46 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.578533,0.0275,1.286504);
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
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.006,1.773438);
   grae->SetPointError(0,0,0,1.103203,2.92049);
   grae->SetPoint(1,-0.007,1.410156);
   grae->SetPointError(1,0,0,0.885479,2.358425);
   grae->SetPoint(2,-0.008,1.136719);
   grae->SetPointError(2,0,0,0.7159996,1.953361);
   grae->SetPoint(3,-0.009,0.9335938);
   grae->SetPointError(3,0,0,0.5917015,1.623727);
   grae->SetPoint(4,-0.01,0.7753906);
   grae->SetPointError(4,0,0,0.4914341,1.367315);
   grae->SetPoint(5,-0.012,0.5585938);
   grae->SetPointError(5,0,0,0.3551216,0.9964983);
   grae->SetPoint(6,-0.014,0.4199219);
   grae->SetPointError(6,0,0,0.2677822,0.7504236);
   grae->SetPoint(7,-0.016,0.3271484);
   grae->SetPointError(7,0,0,0.2089405,0.5846323);
   grae->SetPoint(8,-0.018,0.2607422);
   grae->SetPointError(8,0,0,0.1665287,0.4712548);
   grae->SetPoint(9,-0.02,0.2119141);
   grae->SetPointError(9,0,0,0.1353436,0.3873075);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0214,-0.0046);
   Graph_Graph_Graph15->SetMinimum(0.06891346);
   Graph_Graph_Graph15->SetMaximum(5.155663);
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
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.006,1.867188);
   grae->SetPointError(0,0,0,1.156052,2.995334);
   grae->SetPoint(1,0.007,1.480469);
   grae->SetPointError(1,0,0,0.925293,2.444854);
   grae->SetPoint(2,0.008,1.191406);
   grae->SetPointError(2,0,0,0.7481194,2.017656);
   grae->SetPoint(3,0.009,0.9726562);
   grae->SetPointError(3,0,0,0.6126595,1.671432);
   grae->SetPoint(4,0.01,0.8085938);
   grae->SetPointError(4,0,0,0.5116882,1.407785);
   grae->SetPoint(5,0.012,0.5800781);
   grae->SetPointError(5,0,0,0.3687801,1.022903);
   grae->SetPoint(6,0.014,0.4335938);
   grae->SetPointError(6,0,0,0.2760773,0.7735057);
   grae->SetPoint(7,0.016,0.3359375);
   grae->SetPointError(7,0,0,0.2142258,0.6003388);
   grae->SetPoint(8,0.018,0.2675781);
   grae->SetPointError(8,0,0,0.1706333,0.4836097);
   grae->SetPoint(9,0.02,0.2177734);
   grae->SetPointError(9,0,0,0.1390858,0.3935948);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0046,0.0214);
   Graph_Graph_Graph26->SetMinimum(0.0708189);
   Graph_Graph_Graph26->SetMaximum(5.340905);
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
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.006,1.773438);
   grae->SetPointError(0,0,0,0.7196674,1.20173);
   grae->SetPoint(1,-0.007,1.410156);
   grae->SetPointError(1,0,0,0.5776367,0.978044);
   grae->SetPoint(2,-0.008,1.136719);
   grae->SetPointError(2,0,0,0.4726716,0.8065197);
   grae->SetPoint(3,-0.009,0.9335938);
   grae->SetPointError(3,0,0,0.3906155,0.6623994);
   grae->SetPoint(4,-0.01,0.7753906);
   grae->SetPointError(4,0,0,0.3244233,0.5625148);
   grae->SetPoint(5,-0.012,0.5585938);
   grae->SetPointError(5,0,0,0.2344357,0.4052373);
   grae->SetPoint(6,-0.014,0.4199219);
   grae->SetPointError(6,0,0,0.1767781,0.3113317);
   grae->SetPoint(7,-0.016,0.3271484);
   grae->SetPointError(7,0,0,0.1379334,0.2425491);
   grae->SetPoint(8,-0.018,0.2607422);
   grae->SetPointError(8,0,0,0.109935,0.1933153);
   grae->SetPoint(9,-0.02,0.2119141);
   grae->SetPointError(9,0,0,0.08881921,0.1571139);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0214,-0.0046);
   Graph_Graph_Graph37->SetMinimum(0.1107854);
   Graph_Graph_Graph37->SetMaximum(3.260374);
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
   
   grae = new TGraphAsymmErrors(10);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.006,1.867188);
   grae->SetPointError(0,0,0,0.754143,1.265257);
   grae->SetPoint(1,0.007,1.480469);
   grae->SetPointError(1,0,0,0.6036091,1.026811);
   grae->SetPoint(2,0.008,1.191406);
   grae->SetPointError(2,0,0,0.4909533,0.8263254);
   grae->SetPoint(3,0.009,0.9726562);
   grae->SetPointError(3,0,0,0.4020578,0.6901149);
   grae->SetPoint(4,0.01,0.8085938);
   grae->SetPointError(4,0,0,0.3377942,0.5801561);
   grae->SetPoint(5,0.012,0.5800781);
   grae->SetPointError(5,0,0,0.2434525,0.4208233);
   grae->SetPoint(6,0.014,0.4335938);
   grae->SetPointError(6,0,0,0.1822541,0.3145548);
   grae->SetPoint(7,0.016,0.3359375);
   grae->SetPointError(7,0,0,0.1414225,0.2490654);
   grae->SetPoint(8,0.018,0.2675781);
   grae->SetPointError(8,0,0,0.1126446,0.1983835);
   grae->SetPoint(9,0.02,0.2177734);
   grae->SetPointError(9,0,0,0.09181833,0.1614581);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0046,0.0214);
   Graph_Graph_Graph48->SetMinimum(0.1133596);
   Graph_Graph_Graph48->SetMaximum(3.433094);
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
   
   TGraphErrors *gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.006,1.110742);
   gre->SetPointError(0,0,0.002824425);
   gre->SetPoint(1,-0.007,0.897106);
   gre->SetPointError(1,0,0.002434697);
   gre->SetPoint(2,-0.008,0.7321134);
   gre->SetPointError(2,0,0.003329202);
   gre->SetPoint(3,-0.009,0.6074002);
   gre->SetPointError(3,0,0.001340762);
   gre->SetPoint(4,-0.01,0.5097231);
   gre->SetPointError(4,0,0.001562861);
   gre->SetPoint(5,-0.012,0.3715329);
   gre->SetPointError(5,0,0.001752897);
   gre->SetPoint(6,-0.014,0.282166);
   gre->SetPointError(6,0,0.0005873229);
   gre->SetPoint(7,-0.016,0.2206356);
   gre->SetPointError(7,0,0.0006128372);
   gre->SetPoint(8,-0.018,0.1766167);
   gre->SetPointError(8,0,0.0007288063);
   gre->SetPoint(9,-0.02,0.1450108);
   gre->SetPointError(9,0,0.0006480943);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0214,-0.0046);
   Graph_Graph_Graph13->SetMinimum(0.04744231);
   Graph_Graph_Graph13->SetMaximum(1.210487);
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
   
   gre = new TGraphErrors(10);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.006,1.183773);
   gre->SetPointError(0,0,0.003049723);
   gre->SetPoint(1,0.007,0.9522568);
   gre->SetPointError(1,0,0.002452852);
   gre->SetPoint(2,0.008,0.7774209);
   gre->SetPointError(2,0,0.003174748);
   gre->SetPoint(3,0.009,0.6417192);
   gre->SetPointError(3,0,0.001871597);
   gre->SetPoint(4,0.01,0.5370948);
   gre->SetPointError(4,0,0.001613916);
   gre->SetPoint(5,0.012,0.3894796);
   gre->SetPointError(5,0,0.001574782);
   gre->SetPoint(6,0.014,0.2936066);
   gre->SetPointError(6,0,0.0009383154);
   gre->SetPoint(7,0.016,0.2282787);
   gre->SetPointError(7,0,0.0005864256);
   gre->SetPoint(8,0.018,0.1822191);
   gre->SetPointError(8,0,0.0008191867);
   gre->SetPoint(9,0.02,0.1491745);
   gre->SetPointError(9,0,0.0006614326);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0046,0.0214);
   Graph_Graph_Graph24->SetMinimum(0.04468211);
   Graph_Graph_Graph24->SetMaximum(1.290653);
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
   
   TGraph *graph = new TGraph(10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.006,1.7734375);
   graph->SetPoint(1,-0.007,1.41015625);
   graph->SetPoint(2,-0.008,1.13671875);
   graph->SetPoint(3,-0.009,0.93359375);
   graph->SetPoint(4,-0.01,0.775390625);
   graph->SetPoint(5,-0.012,0.55859375);
   graph->SetPoint(6,-0.014,0.419921875);
   graph->SetPoint(7,-0.016,0.3271484375);
   graph->SetPoint(8,-0.018,0.2607421875);
   graph->SetPoint(9,-0.02,0.2119140625);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0214,-0.0046);
   Graph_Graph_Graph15->SetMinimum(0.05576172);
   Graph_Graph_Graph15->SetMaximum(1.92959);
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
   
   graph = new TGraph(10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.006,1.8671875);
   graph->SetPoint(1,0.007,1.48046875);
   graph->SetPoint(2,0.008,1.19140625);
   graph->SetPoint(3,0.009,0.97265625);
   graph->SetPoint(4,0.01,0.80859375);
   graph->SetPoint(5,0.012,0.580078125);
   graph->SetPoint(6,0.014,0.43359375);
   graph->SetPoint(7,0.016,0.3359375);
   graph->SetPoint(8,0.018,0.267578125);
   graph->SetPoint(9,0.02,0.2177734375);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0046,0.0214);
   Graph_Graph_Graph26->SetMinimum(0.05283203);
   Graph_Graph_Graph26->SetMaximum(2.032129);
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
   
   graph = new TGraph(10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.006,1.110742402);
   graph->SetPoint(1,-0.007,0.8971059797);
   graph->SetPoint(2,-0.008,0.7321133731);
   graph->SetPoint(3,-0.009,0.607400151);
   graph->SetPoint(4,-0.01,0.5097231215);
   graph->SetPoint(5,-0.012,0.3715328849);
   graph->SetPoint(6,-0.014,0.2821659798);
   graph->SetPoint(7,-0.016,0.2206355594);
   graph->SetPoint(8,-0.018,0.1766167328);
   graph->SetPoint(9,-0.02,0.1450108135);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0214,-0.0046);
   Graph_Graph_Graph37->SetMinimum(0.04843765);
   Graph_Graph_Graph37->SetMaximum(1.207316);
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
   
   graph = new TGraph(10);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.006,1.183772645);
   graph->SetPoint(1,0.007,0.952256761);
   graph->SetPoint(2,0.008,0.777420932);
   graph->SetPoint(3,0.009,0.6417191626);
   graph->SetPoint(4,0.01,0.5370947597);
   graph->SetPoint(5,0.012,0.3894795666);
   graph->SetPoint(6,0.014,0.2936066383);
   graph->SetPoint(7,0.016,0.228278727);
   graph->SetPoint(8,0.018,0.1822191236);
   graph->SetPoint(9,0.02,0.1491744783);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0046,0.0214);
   Graph_Graph_Graph48->SetMinimum(0.04571466);
   Graph_Graph_Graph48->SetMaximum(1.287232);
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
   TLine *line = new TLine(-0.006,1,0.02,1);

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
   text = pt->AddText("-6.5 #upoint 10^{-3} < f_{4}^{Z} < 6.8 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
