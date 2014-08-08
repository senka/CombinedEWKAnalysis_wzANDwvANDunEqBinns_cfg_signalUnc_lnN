{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:20:12 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.560807,0.0275,1.236987);
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
   grae->SetPoint(0,-0.007,1.671875);
   grae->SetPointError(0,0,0,1.051453,2.838205);
   grae->SetPoint(1,-0.008,1.308594);
   grae->SetPointError(1,0,0,0.8293724,2.280663);
   grae->SetPoint(2,-0.009,1.050781);
   grae->SetPointError(2,0,0,0.6700783,1.852935);
   grae->SetPoint(3,-0.01,0.8554688);
   grae->SetPointError(3,0,0,0.5455284,1.52877);
   grae->SetPoint(4,-0.012,0.5996094);
   grae->SetPointError(4,0,0,0.3829536,1.095884);
   grae->SetPoint(5,-0.014,0.4433594);
   grae->SetPointError(5,0,0,0.2835941,0.815917);
   grae->SetPoint(6,-0.016,0.3427734);
   grae->SetPointError(6,0,0,0.2202587,0.6264743);
   grae->SetPoint(7,-0.018,0.2705078);
   grae->SetPointError(7,0,0,0.1735582,0.5005297);
   grae->SetPoint(8,-0.02,0.2197266);
   grae->SetPointError(8,0,0,0.1411915,0.4065675);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.07068157);
   Graph_Graph1->SetMaximum(4.953235);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,1.757812);
   grae->SetPointError(0,0,0,1.086617,2.773017);
   grae->SetPoint(1,0.008,1.371094);
   grae->SetPointError(1,0,0,0.8555946,2.264231);
   grae->SetPoint(2,0.009,1.097656);
   grae->SetPointError(2,0,0,0.6903229,1.863401);
   grae->SetPoint(3,0.01,0.8945312);
   grae->SetPointError(3,0,0,0.565197,1.538908);
   grae->SetPoint(4,0.012,0.6269531);
   grae->SetPointError(4,0,0,0.3985806,1.105562);
   grae->SetPoint(5,0.014,0.4628906);
   grae->SetPointError(5,0,0,0.2960873,0.8257695);
   grae->SetPoint(6,0.016,0.3544922);
   grae->SetPointError(6,0,0,0.2267504,0.6406947);
   grae->SetPoint(7,0.018,0.2802734);
   grae->SetPointError(7,0,0,0.1798239,0.5065547);
   grae->SetPoint(8,0.02,0.2255859);
   grae->SetPointError(8,0,0,0.1440754,0.4128851);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.07335949);
   Graph_Graph2->SetMaximum(4.975762);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,1.671875);
   grae->SetPointError(0,0,0,0.6859086,1.186221);
   grae->SetPoint(1,-0.008,1.308594);
   grae->SetPointError(1,0,0,0.5475154,0.9493322);
   grae->SetPoint(2,-0.009,1.050781);
   grae->SetPointError(2,0,0,0.4423563,0.7622995);
   grae->SetPoint(3,-0.01,0.8554688);
   grae->SetPointError(3,0,0,0.360134,0.6342479);
   grae->SetPoint(4,-0.012,0.5996094);
   grae->SetPointError(4,0,0,0.2528092,0.4445528);
   grae->SetPoint(5,-0.014,0.4433594);
   grae->SetPointError(5,0,0,0.1872164,0.3357774);
   grae->SetPoint(6,-0.016,0.3427734);
   grae->SetPointError(6,0,0,0.1454052,0.2541336);
   grae->SetPoint(7,-0.018,0.2705078);
   grae->SetPointError(7,0,0,0.1145755,0.2048686);
   grae->SetPoint(8,-0.02,0.2197266);
   grae->SetPointError(8,0,0,0.09320843,0.1664095);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0213,-0.0057);
   Graph_Graph3->SetMinimum(0.1138663);
   Graph_Graph3->SetMaximum(3.131254);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,1.757812);
   grae->SetPointError(0,0,0,0.7088475,1.163115);
   grae->SetPoint(1,0.008,1.371094);
   grae->SetPointError(1,0,0,0.5581418,0.9509516);
   grae->SetPoint(2,0.009,1.097656);
   grae->SetPointError(2,0,0,0.4503278,0.7788043);
   grae->SetPoint(3,0.01,0.8945312);
   grae->SetPointError(3,0,0,0.3687027,0.6418152);
   grae->SetPoint(4,0.012,0.6269531);
   grae->SetPointError(4,0,0,0.2631254,0.4548293);
   grae->SetPoint(5,0.014,0.4628906);
   grae->SetPointError(5,0,0,0.1954639,0.3358085);
   grae->SetPoint(6,0.016,0.3544922);
   grae->SetPointError(6,0,0,0.1496907,0.2628219);
   grae->SetPoint(7,0.018,0.2802734);
   grae->SetPointError(7,0,0,0.1187119,0.2077958);
   grae->SetPoint(8,0.02,0.2255859);
   grae->SetPointError(8,0,0,0.09511226,0.1708471);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0057,0.0213);
   Graph_Graph4->SetMinimum(0.1174263);
   Graph_Graph4->SetMaximum(3.199973);
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
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,1.109484);
   gre->SetPointError(0,0,0.002880252);
   gre->SetPoint(1,-0.008,0.8774735);
   gre->SetPointError(1,0,0.002438976);
   gre->SetPoint(2,-0.009,0.7070393);
   gre->SetPointError(2,0,0.002924489);
   gre->SetPoint(3,-0.01,0.5829603);
   gre->SetPointError(3,0,0.002301302);
   gre->SetPoint(4,-0.012,0.4128361);
   gre->SetPointError(4,0,0.001224154);
   gre->SetPoint(5,-0.014,0.306533);
   gre->SetPointError(5,0,0.001254824);
   gre->SetPoint(6,-0.016,0.2366663);
   gre->SetPointError(6,0,0.0005850237);
   gre->SetPoint(7,-0.018,0.1878617);
   gre->SetPointError(7,0,0.0008855355);
   gre->SetPoint(8,-0.02,0.1529138);
   gre->SetPointError(8,0,0.0005920986);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.05631744);
   Graph_Graph1->SetMaximum(1.208368);
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
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.007,1.139765);
   gre->SetPointError(0,0,0.002993661);
   gre->SetPoint(1,0.008,0.9013848);
   gre->SetPointError(1,0,0.002381746);
   gre->SetPoint(2,0.009,0.7257277);
   gre->SetPointError(2,0,0.003226121);
   gre->SetPoint(3,0.01,0.5977047);
   gre->SetPointError(3,0,0.002022281);
   gre->SetPoint(4,0.012,0.4223779);
   gre->SetPointError(4,0,0.001220862);
   gre->SetPoint(5,0.014,0.3134401);
   gre->SetPointError(5,0,0.0008163017);
   gre->SetPoint(6,0.016,0.2411415);
   gre->SetPointError(6,0,0.0005865203);
   gre->SetPoint(7,0.018,0.1916614);
   gre->SetPointError(7,0,0.0008369857);
   gre->SetPoint(8,0.02,0.1555875);
   gre->SetPointError(8,0,0.0003898604);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.05644159);
   Graph_Graph2->SetMaximum(1.241515);
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
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,1.671875);
   graph->SetPoint(1,-0.008,1.30859375);
   graph->SetPoint(2,-0.009,1.05078125);
   graph->SetPoint(3,-0.01,0.85546875);
   graph->SetPoint(4,-0.012,0.599609375);
   graph->SetPoint(5,-0.014,0.443359375);
   graph->SetPoint(6,-0.016,0.3427734375);
   graph->SetPoint(7,-0.018,0.2705078125);
   graph->SetPoint(8,-0.02,0.2197265625);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.07451172);
   Graph_Graph1->SetMaximum(1.81709);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.007,1.7578125);
   graph->SetPoint(1,0.008,1.37109375);
   graph->SetPoint(2,0.009,1.09765625);
   graph->SetPoint(3,0.01,0.89453125);
   graph->SetPoint(4,0.012,0.626953125);
   graph->SetPoint(5,0.014,0.462890625);
   graph->SetPoint(6,0.016,0.3544921875);
   graph->SetPoint(7,0.018,0.2802734375);
   graph->SetPoint(8,0.02,0.2255859375);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.07236328);
   Graph_Graph2->SetMaximum(1.911035);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,1.10948363);
   graph->SetPoint(1,-0.008,0.8774735151);
   graph->SetPoint(2,-0.009,0.7070392666);
   graph->SetPoint(3,-0.01,0.5829603069);
   graph->SetPoint(4,-0.012,0.4128360728);
   graph->SetPoint(5,-0.014,0.3065329631);
   graph->SetPoint(6,-0.016,0.2366662938);
   graph->SetPoint(7,-0.018,0.1878616695);
   graph->SetPoint(8,-0.02,0.1529137643);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0213,-0.0057);
   Graph_Graph3->SetMinimum(0.05725678);
   Graph_Graph3->SetMaximum(1.205141);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.007,1.139764901);
   graph->SetPoint(1,0.008,0.9013847535);
   graph->SetPoint(2,0.009,0.7257276857);
   graph->SetPoint(3,0.01,0.5977047493);
   graph->SetPoint(4,0.012,0.4223779262);
   graph->SetPoint(5,0.014,0.313440145);
   graph->SetPoint(6,0.016,0.2411415245);
   graph->SetPoint(7,0.018,0.1916614024);
   graph->SetPoint(8,0.02,0.1555875356);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0057,0.0213);
   Graph_Graph4->SetMinimum(0.0571698);
   Graph_Graph4->SetMaximum(1.238183);
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
   multigraph->GetXaxis()->SetTitle("f_{5}^{Z}");
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
   text = pt->AddText("-7.5 #upoint 10^{-3} < f_{5}^{Z} < 7.6 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
