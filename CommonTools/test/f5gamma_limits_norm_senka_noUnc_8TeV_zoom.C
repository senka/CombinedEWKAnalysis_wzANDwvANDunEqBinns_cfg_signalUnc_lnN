{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 22:42:14 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.009625,-1.131058,0.009625,1.236784);
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
   grae->SetPoint(0,-0.007,0.4082031);
   grae->SetPointError(0,0,0,0.2168579,0.5351493);
   grae->SetPoint(1,-0.006,0.5566406);
   grae->SetPointError(1,0,0,0.2946281,0.729749);
   grae->SetPoint(2,-0.005,0.8007812);
   grae->SetPointError(2,0,0,0.423851,1.066884);
   grae->SetPoint(3,-0.004,1.269531);
   grae->SetPointError(3,0,0,0.6719589,1.669282);
   grae->SetPoint(4,-0.003,2.320312);
   grae->SetPointError(4,0,0,1.228134,2.978387);
   grae->SetPoint(5,-0.002,5.265625);
   grae->SetPointError(5,0,0,2.684235,6.01868);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.1722107);
   Graph_Graph_Graph15->SetMaximum(12.3936);
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
   grae->SetPoint(0,0.002,7.96875);
   grae->SetPointError(0,0,0,3.906555,8.233891);
   grae->SetPoint(1,0.003,3.101562);
   grae->SetPointError(1,0,0,1.629532,3.89554);
   grae->SetPoint(2,0.004,1.5625);
   grae->SetPointError(2,0,0,0.8270264,2.011925);
   grae->SetPoint(3,0.005,0.9414062);
   grae->SetPointError(3,0,0,0.4982834,1.223178);
   grae->SetPoint(4,0.006,0.6308594);
   grae->SetPointError(4,0,0,0.3339119,0.8233653);
   grae->SetPoint(5,0.007,0.453125);
   grae->SetPointError(5,0,0,0.2398376,0.5940413);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.1919586);
   Graph_Graph_Graph26->SetMaximum(17.80158);
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
   grae->SetPoint(0,-0.007,0.4082031);
   grae->SetPointError(0,0,0,0.1380775,0.2229148);
   grae->SetPoint(1,-0.006,0.5566406);
   grae->SetPointError(1,0,0,0.1875952,0.3039747);
   grae->SetPoint(2,-0.005,0.8007812);
   grae->SetPointError(2,0,0,0.2665626,0.4436809);
   grae->SetPoint(3,-0.004,1.269531);
   grae->SetPointError(3,0,0,0.4278488,0.7033964);
   grae->SetPoint(4,-0.003,2.320312);
   grae->SetPointError(4,0,0,0.781976,1.248597);
   grae->SetPoint(5,-0.002,5.265625);
   grae->SetPointError(5,0,0,1.677647,2.623626);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.2431131);
   Graph_Graph_Graph37->SetMaximum(8.651163);
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
   grae->SetPoint(0,0.002,7.96875);
   grae->SetPointError(0,0,0,2.426337,3.652835);
   grae->SetPoint(1,0.003,3.101562);
   grae->SetPointError(1,0,0,1.037554,1.644274);
   grae->SetPoint(2,0.004,1.5625);
   grae->SetPointError(2,0,0,0.5265832,0.8532622);
   grae->SetPoint(3,0.005,0.9414062);
   grae->SetPointError(3,0,0,0.3172663,0.5140905);
   grae->SetPoint(4,0.006,0.6308594);
   grae->SetPointError(4,0,0,0.212608,0.3445047);
   grae->SetPoint(5,0.007,0.453125);
   grae->SetPointError(5,0,0,0.1527091,0.2474461);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.2703743);
   Graph_Graph_Graph48->SetMaximum(12.7537);
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
   gre->SetPoint(0,-0.007,0.2149195);
   gre->SetPointError(0,0,0.0006071881);
   gre->SetPoint(1,-0.006,0.2925725);
   gre->SetPointError(1,0,0.001042099);
   gre->SetPoint(2,-0.005,0.4217977);
   gre->SetPointError(2,0,0.001054539);
   gre->SetPoint(3,-0.004,0.6625782);
   gre->SetPointError(3,0,0.00220877);
   gre->SetPoint(4,-0.003,1.201406);
   gre->SetPointError(4,0,0.003874935);
   gre->SetPoint(5,-0.002,2.817149);
   gre->SetPointError(5,0,0.007877093);
   
   TH1F *Graph_Graph_Graph13 = new TH1F("Graph_Graph_Graph13","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph13->SetMinimum(0.192881);
   Graph_Graph_Graph13->SetMaximum(3.086097);
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
   gre->SetPoint(0,0.002,4.689015);
   gre->SetPointError(0,0,0.01285005);
   gre->SetPoint(1,0.003,1.643026);
   gre->SetPointError(1,0,0.00513196);
   gre->SetPoint(2,0.004,0.82701);
   gre->SetPointError(2,0,0.002376499);
   gre->SetPoint(3,0.005,0.4995347);
   gre->SetPointError(3,0,0.001398824);
   gre->SetPoint(4,0.006,0.335692);
   gre->SetPointError(4,0,0.001175392);
   gre->SetPoint(5,0.007,0.241573);
   gre->SetPointError(5,0,0.0005672474);
   
   TH1F *Graph_Graph_Graph24 = new TH1F("Graph_Graph_Graph24","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph24->SetMinimum(0.2169051);
   Graph_Graph_Graph24->SetMaximum(5.147951);
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
   graph->SetPoint(0,-0.007,0.408203125);
   graph->SetPoint(1,-0.006,0.556640625);
   graph->SetPoint(2,-0.005,0.80078125);
   graph->SetPoint(3,-0.004,1.26953125);
   graph->SetPoint(4,-0.003,2.3203125);
   graph->SetPoint(5,-0.002,5.265625);
   
   TH1F *Graph_Graph_Graph15 = new TH1F("Graph_Graph_Graph15","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph15->SetMinimum(0.3673828);
   Graph_Graph_Graph15->SetMaximum(5.751367);
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
   graph->SetPoint(0,0.002,7.96875);
   graph->SetPoint(1,0.003,3.1015625);
   graph->SetPoint(2,0.004,1.5625);
   graph->SetPoint(3,0.005,0.94140625);
   graph->SetPoint(4,0.006,0.630859375);
   graph->SetPoint(5,0.007,0.453125);
   
   TH1F *Graph_Graph_Graph26 = new TH1F("Graph_Graph_Graph26","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph26->SetMinimum(0.4078125);
   Graph_Graph_Graph26->SetMaximum(8.720313);
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
   graph->SetPoint(0,-0.007,0.2149194638);
   graph->SetPoint(1,-0.006,0.2925724627);
   graph->SetPoint(2,-0.005,0.4217976678);
   graph->SetPoint(3,-0.004,0.6625781874);
   graph->SetPoint(4,-0.003,1.201405826);
   graph->SetPoint(5,-0.002,2.817149019);
   
   TH1F *Graph_Graph_Graph37 = new TH1F("Graph_Graph_Graph37","Graph",100,-0.0075,-0.0015);
   Graph_Graph_Graph37->SetMinimum(0.1934275);
   Graph_Graph_Graph37->SetMaximum(3.077372);
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
   graph->SetPoint(0,0.002,4.689014875);
   graph->SetPoint(1,0.003,1.643025724);
   graph->SetPoint(2,0.004,0.8270100077);
   graph->SetPoint(3,0.005,0.4995346863);
   graph->SetPoint(4,0.006,0.3356919603);
   graph->SetPoint(5,0.007,0.2415729599);
   
   TH1F *Graph_Graph_Graph48 = new TH1F("Graph_Graph_Graph48","Graph",100,0.0015,0.0075);
   Graph_Graph_Graph48->SetMinimum(0.2174157);
   Graph_Graph_Graph48->SetMaximum(5.133759);
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
   text = pt->AddText("-3.4 #upoint 10^{-3} < f_{5}^{#gamma} < 3.8 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
