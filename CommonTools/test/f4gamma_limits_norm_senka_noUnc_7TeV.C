{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:37:29 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.470278,0.0275,1.284661);
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
   grae->SetPoint(1,-0.008,1.570312);
   grae->SetPointError(1,0,0,0.9783783,2.626279);
   grae->SetPoint(2,-0.009,1.285156);
   grae->SetPointError(2,0,0,0.8069878,2.181705);
   grae->SetPoint(3,-0.01,1.066406);
   grae->SetPointError(3,0,0,0.6727524,1.832534);
   grae->SetPoint(4,-0.012,0.7617188);
   grae->SetPointError(4,0,0,0.482769,1.343206);
   grae->SetPoint(5,-0.014,0.5683594);
   grae->SetPointError(5,0,0,0.3618851,1.01392);
   grae->SetPoint(6,-0.016,0.4394531);
   grae->SetPointError(6,0,0,0.2806664,0.7942495);
   grae->SetPoint(7,-0.018,0.3486328);
   grae->SetPointError(7,0,0,0.2230024,0.6301047);
   grae->SetPoint(8,-0.02,0.2841797);
   grae->SetPointError(8,0,0,0.1820526,0.5136147);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.09191437);
   Graph_Graph1->SetMaximum(5.607118);
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
   grae->SetPoint(0,0.007,1.773438);
   grae->SetPointError(0,0,0,1.136108,3.090809);
   grae->SetPoint(1,0.008,1.433594);
   grae->SetPointError(1,0,0,0.921196,2.591019);
   grae->SetPoint(2,0.009,1.183594);
   grae->SetPointError(2,0,0,0.764019,2.16321);
   grae->SetPoint(3,0.01,0.9882812);
   grae->SetPointError(3,0,0,0.6398735,1.82865);
   grae->SetPoint(4,0.012,0.7128906);
   grae->SetPointError(4,0,0,0.4615688,1.333382);
   grae->SetPoint(5,0.014,0.5371094);
   grae->SetPointError(5,0,0,0.3488064,1.015375);
   grae->SetPoint(6,0.016,0.4160156);
   grae->SetPointError(6,0,0,0.2693539,0.7872312);
   grae->SetPoint(7,0.018,0.3330078);
   grae->SetPointError(7,0,0,0.2156096,0.6301546);
   grae->SetPoint(8,0.02,0.2724609);
   grae->SetPointError(8,0,0,0.1766739,0.515581);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.08620834);
   Graph_Graph2->SetMaximum(5.341092);
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
   grae->SetPoint(0,-0.007,1.960938);
   grae->SetPointError(0,0,0,0.7932572,1.328785);
   grae->SetPoint(1,-0.008,1.570312);
   grae->SetPointError(1,0,0,0.638239,1.089124);
   grae->SetPoint(2,-0.009,1.285156);
   grae->SetPointError(2,0,0,0.5264334,0.9118385);
   grae->SetPoint(3,-0.01,1.066406);
   grae->SetPointError(3,0,0,0.4388658,0.7566319);
   grae->SetPoint(4,-0.012,0.7617188);
   grae->SetPointError(4,0,0,0.318703,0.5525963);
   grae->SetPoint(5,-0.014,0.5683594);
   grae->SetPointError(5,0,0,0.2389007,0.4123219);
   grae->SetPoint(6,-0.016,0.4394531);
   grae->SetPointError(6,0,0,0.1852837,0.3258123);
   grae->SetPoint(7,-0.018,0.3486328);
   grae->SetPointError(7,0,0,0.1472165,0.2584777);
   grae->SetPoint(8,-0.02,0.2841797);
   grae->SetPointError(8,0,0,0.1201832,0.210692);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0213,-0.0057);
   Graph_Graph3->SetMinimum(0.1475969);
   Graph_Graph3->SetMaximum(3.602295);
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
   grae->SetPoint(0,0.007,1.773438);
   grae->SetPointError(0,0,0,0.7500091,1.286558);
   grae->SetPoint(1,0.008,1.433594);
   grae->SetPointError(1,0,0,0.6081333,1.062872);
   grae->SetPoint(2,0.009,1.183594);
   grae->SetPointError(2,0,0,0.5043719,0.877521);
   grae->SetPoint(3,0.01,0.9882812);
   grae->SetPointError(3,0,0,0.424916,0.7484729);
   grae->SetPoint(4,0.012,0.7128906);
   grae->SetPointError(4,0,0,0.3083135,0.5399064);
   grae->SetPoint(5,0.014,0.5371094);
   grae->SetPointError(5,0,0,0.2329918,0.4067788);
   grae->SetPoint(6,0.016,0.4160156);
   grae->SetPointError(6,0,0,0.1778156,0.3217017);
   grae->SetPoint(7,0.018,0.3330078);
   grae->SetPointError(7,0,0,0.1440204,0.2575124);
   grae->SetPoint(8,0.02,0.2724609);
   grae->SetPointError(8,0,0,0.1180126,0.210692);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0057,0.0213);
   Graph_Graph4->SetMinimum(0.1390035);
   Graph_Graph4->SetMaximum(3.35055);
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
   gre->SetPoint(0,-0.007,1.216116);
   gre->SetPointError(0,0,0.003105639);
   gre->SetPoint(1,-0.008,0.9932361);
   gre->SetPointError(1,0,0.002532766);
   gre->SetPoint(2,-0.009,0.822844);
   gre->SetPointError(2,0,0.002442318);
   gre->SetPoint(3,-0.01,0.6882135);
   gre->SetPointError(3,0,0.002621007);
   gre->SetPoint(4,-0.012,0.5002448);
   gre->SetPointError(4,0,0.001177126);
   gre->SetPoint(5,-0.014,0.3787554);
   gre->SetPointError(5,0,0.001747751);
   gre->SetPoint(6,-0.016,0.2951352);
   gre->SetPointError(6,0,0.0007856333);
   gre->SetPoint(7,-0.018,0.2359342);
   gre->SetPointError(7,0,0.0005857931);
   gre->SetPoint(8,-0.02,0.1933249);
   gre->SetPointError(8,0,0.0008101494);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.08984404);
   Graph_Graph1->SetMaximum(1.321893);
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
   gre->SetPoint(0,0.007,1.260013);
   gre->SetPointError(0,0,0.003477031);
   gre->SetPoint(1,0.008,1.028037);
   gre->SetPointError(1,0,0.002841346);
   gre->SetPoint(2,0.009,0.8495254);
   gre->SetPointError(2,0,0.002440725);
   gre->SetPoint(3,0.01,0.7094394);
   gre->SetPointError(3,0,0.002962851);
   gre->SetPoint(4,0.012,0.5153826);
   gre->SetPointError(4,0,0.002556892);
   gre->SetPoint(5,0.014,0.3883928);
   gre->SetPointError(5,0,0.001592013);
   gre->SetPoint(6,0.016,0.3014969);
   gre->SetPointError(6,0,0.001228784);
   gre->SetPoint(7,0.018,0.241027);
   gre->SetPointError(7,0,0.00058407);
   gre->SetPoint(8,0.02,0.1970972);
   gre->SetPointError(8,0,0.0007492082);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.08963383);
   Graph_Graph2->SetMaximum(1.370204);
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
   graph->SetPoint(0,-0.007,1.9609375);
   graph->SetPoint(1,-0.008,1.5703125);
   graph->SetPoint(2,-0.009,1.28515625);
   graph->SetPoint(3,-0.01,1.06640625);
   graph->SetPoint(4,-0.012,0.76171875);
   graph->SetPoint(5,-0.014,0.568359375);
   graph->SetPoint(6,-0.016,0.439453125);
   graph->SetPoint(7,-0.018,0.3486328125);
   graph->SetPoint(8,-0.02,0.2841796875);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,-0.0213,-0.0057);
   Graph_Graph1->SetMinimum(0.1165039);
   Graph_Graph1->SetMaximum(2.128613);
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
   graph->SetPoint(0,0.007,1.7734375);
   graph->SetPoint(1,0.008,1.43359375);
   graph->SetPoint(2,0.009,1.18359375);
   graph->SetPoint(3,0.01,0.98828125);
   graph->SetPoint(4,0.012,0.712890625);
   graph->SetPoint(5,0.014,0.537109375);
   graph->SetPoint(6,0.016,0.416015625);
   graph->SetPoint(7,0.018,0.3330078125);
   graph->SetPoint(8,0.02,0.2724609375);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.0057,0.0213);
   Graph_Graph2->SetMinimum(0.1223633);
   Graph_Graph2->SetMaximum(1.923535);
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
   graph->SetPoint(0,-0.007,1.216116228);
   graph->SetPoint(1,-0.008,0.9932360939);
   graph->SetPoint(2,-0.009,0.8228440008);
   graph->SetPoint(3,-0.01,0.688213536);
   graph->SetPoint(4,-0.012,0.5002448258);
   graph->SetPoint(5,-0.014,0.3787554193);
   graph->SetPoint(6,-0.016,0.2951352175);
   graph->SetPoint(7,-0.018,0.2359341836);
   graph->SetPoint(8,-0.02,0.1933248977);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,-0.0213,-0.0057);
   Graph_Graph3->SetMinimum(0.09104576);
   Graph_Graph3->SetMaximum(1.318395);
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
   graph->SetPoint(0,0.007,1.260012851);
   graph->SetPoint(1,0.008,1.028037446);
   graph->SetPoint(2,0.009,0.8495254347);
   graph->SetPoint(3,0.01,0.7094393815);
   graph->SetPoint(4,0.012,0.5153826001);
   graph->SetPoint(5,0.014,0.3883927527);
   graph->SetPoint(6,0.016,0.3014969043);
   graph->SetPoint(7,0.018,0.2410269531);
   graph->SetPoint(8,0.02,0.1970972242);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.0057,0.0213);
   Graph_Graph4->SetMinimum(0.09080566);
   Graph_Graph4->SetMaximum(1.366304);
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
   text = pt->AddText("-8.0 #upoint 10^{-3} < f_{4}^{#gamma} < 8.2 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
