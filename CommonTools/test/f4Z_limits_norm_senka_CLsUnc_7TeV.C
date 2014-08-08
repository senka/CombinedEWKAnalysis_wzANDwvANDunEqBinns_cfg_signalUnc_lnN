{
//=========Macro generated from canvas: canv/limits canvas
//=========  (Wed Jun 25 17:41:41 2014) by ROOT version5.34/03
   TCanvas *canv = new TCanvas("canv", "limits canvas",40,62,600,600);
   canv->Range(-0.0275,-1.48246,0.0275,1.513035);
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
   grae->SetPoint(0,-0.007,2.585938);
   grae->SetPointError(0,0,0,1.909149,5.256744);
   grae->SetPoint(1,-0.008,2.101562);
   grae->SetPointError(1,0,0,1.561806,4.272098);
   grae->SetPoint(2,-0.009,1.726562);
   grae->SetPointError(2,0,0,1.286491,3.50979);
   grae->SetPoint(3,-0.01,1.441406);
   grae->SetPointError(3,0,0,1.076832,2.930119);
   grae->SetPoint(4,-0.012,1.042969);
   grae->SetPointError(4,0,0,0.7822266,2.120167);
   grae->SetPoint(5,-0.014,0.7851562);
   grae->SetPointError(5,0,0,0.5896339,1.596081);
   grae->SetPoint(6,-0.016,0.6113281);
   grae->SetPointError(6,0,0,0.4602871,1.24272);
   grae->SetPoint(7,-0.018,0.4863281);
   grae->SetPointError(7,0,0,0.365696,0.9886173);
   grae->SetPoint(8,-0.02,0.3984375);
   grae->SetPointError(8,0,0,0.2999954,0.8099515);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,-0.0213,-0.0057);
   Graph_Graph9->SetMinimum(0.08859787);
   Graph_Graph9->SetMaximum(8.617106);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,2.695312);
   grae->SetPointError(0,0,0,1.976738,5.479084);
   grae->SetPoint(1,0.008,2.179688);
   grae->SetPointError(1,0,0,1.607094,4.430912);
   grae->SetPoint(2,0.009,1.789062);
   grae->SetPointError(2,0,0,1.326073,3.636841);
   grae->SetPoint(3,0.01,1.49707);
   grae->SetPointError(3,0,0,1.115493,3.043274);
   grae->SetPoint(4,0.012,1.082031);
   grae->SetPointError(4,0,0,0.8104668,2.199574);
   grae->SetPoint(5,0.014,0.8085938);
   grae->SetPointError(5,0,0,0.6064453,1.643725);
   grae->SetPoint(6,0.016,0.6269531);
   grae->SetPointError(6,0,0,0.4708271,1.274483);
   grae->SetPoint(7,0.018,0.5019531);
   grae->SetPointError(7,0,0,0.3779354,1.02038);
   grae->SetPoint(8,0.02,0.4082031);
   grae->SetPointError(8,0,0,0.3073483,0.8298033);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.0057,0.0213);
   Graph_Graph10->SetMinimum(0.09076939);
   Graph_Graph10->SetMaximum(8.981751);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,-0.007,2.585938);
   grae->SetPointError(0,0,0,1.346099,2.618145);
   grae->SetPoint(1,-0.008,2.101562);
   grae->SetPointError(1,0,0,1.101195,2.127737);
   grae->SetPoint(2,-0.009,1.726562);
   grae->SetPointError(2,0,0,0.9121023,1.748067);
   grae->SetPoint(3,-0.01,1.441406);
   grae->SetPointError(3,0,0,0.7634569,1.459359);
   grae->SetPoint(4,-0.012,1.042969);
   grae->SetPointError(4,0,0,0.557642,1.055959);
   grae->SetPoint(5,-0.014,0.7851562);
   grae->SetPointError(5,0,0,0.4203445,0.7949352);
   grae->SetPoint(6,-0.016,0.6113281);
   grae->SetPointError(6,0,0,0.3281344,0.6189421);
   grae->SetPoint(7,-0.018,0.4863281);
   grae->SetPointError(7,0,0,0.2607012,0.4923853);
   grae->SetPoint(8,-0.02,0.3984375);
   grae->SetPointError(8,0,0,0.2138639,0.4034);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,-0.0213,-0.0057);
   Graph_Graph11->SetMinimum(0.1661162);
   Graph_Graph11->SetMaximum(5.706033);
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
   
   grae = new TGraphAsymmErrors(9);
   grae->SetName("Graph");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   grae->SetFillColor(ci);
   grae->SetPoint(0,0.007,2.695312);
   grae->SetPointError(0,0,0,1.382172,2.728882);
   grae->SetPoint(1,0.008,2.179688);
   grae->SetPointError(1,0,0,1.126849,2.206835);
   grae->SetPoint(2,0.009,1.789062);
   grae->SetPointError(2,0,0,0.9323949,1.811345);
   grae->SetPoint(3,0.01,1.49707);
   grae->SetPointError(3,0,0,0.7865096,1.515716);
   grae->SetPoint(4,0.012,1.082031);
   grae->SetPointError(4,0,0,0.5746083,1.095508);
   grae->SetPoint(5,0.014,0.8085938);
   grae->SetPointError(5,0,0,0.4299603,0.8186647);
   grae->SetPoint(6,0.016,0.6269531);
   grae->SetPointError(6,0,0,0.333809,0.6347618);
   grae->SetPoint(7,0.018,0.5019531);
   grae->SetPointError(7,0,0,0.2694266,0.5082049);
   grae->SetPoint(8,0.02,0.4082031);
   grae->SetPointError(8,0,0,0.2191057,0.4132872);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.0057,0.0213);
   Graph_Graph12->SetMinimum(0.1701877);
   Graph_Graph12->SetMaximum(5.947705);
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
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,-0.007,1.535131);
   gre->SetPointError(0,0,0.003881639);
   gre->SetPoint(1,-0.008,1.255845);
   gre->SetPointError(1,0,0.00340433);
   gre->SetPoint(2,-0.009,1.040746);
   gre->SetPointError(2,0,0.004915604);
   gre->SetPoint(3,-0.01,0.8728142);
   gre->SetPointError(3,0,0.002684653);
   gre->SetPoint(4,-0.012,0.6361273);
   gre->SetPointError(4,0,0.001854539);
   gre->SetPoint(5,-0.014,0.4814146);
   gre->SetPointError(5,0,0.001057299);
   gre->SetPoint(6,-0.016,0.376963);
   gre->SetPointError(6,0,0.001322253);
   gre->SetPoint(7,-0.018,0.3022095);
   gre->SetPointError(7,0,0.0007967733);
   gre->SetPoint(8,-0.02,0.2471721);
   gre->SetPointError(8,0,0.0005317732);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,-0.0213,-0.0057);
   Graph_Graph5->SetMinimum(0.1174031);
   Graph_Graph5->SetMaximum(1.66825);
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
   
   gre = new TGraphErrors(9);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetPoint(0,0.007,1.66717);
   gre->SetPointError(0,0,0.008293089);
   gre->SetPoint(1,0.008,1.356016);
   gre->SetPointError(1,0,0.00437964);
   gre->SetPoint(2,0.009,1.11913);
   gre->SetPointError(2,0,0.005528291);
   gre->SetPoint(3,0.01,0.9342853);
   gre->SetPointError(3,0,0.00220129);
   gre->SetPoint(4,0.012,0.6748299);
   gre->SetPointError(4,0,0.00239879);
   gre->SetPoint(5,0.014,0.508104);
   gre->SetPointError(5,0,0.001077686);
   gre->SetPoint(6,0.016,0.395651);
   gre->SetPointError(6,0,0.001334528);
   gre->SetPoint(7,0.018,0.3156696);
   gre->SetPointError(7,0,0.0008847419);
   gre->SetPoint(8,0.02,0.2576435);
   gre->SetPointError(8,0,0.001267707);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0.0057,0.0213);
   Graph_Graph6->SetMinimum(0.1144671);
   Graph_Graph6->SetMaximum(1.817372);
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
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,-0.007,2.5859375);
   graph->SetPoint(1,-0.008,2.1015625);
   graph->SetPoint(2,-0.009,1.7265625);
   graph->SetPoint(3,-0.01,1.44140625);
   graph->SetPoint(4,-0.012,1.04296875);
   graph->SetPoint(5,-0.014,0.78515625);
   graph->SetPoint(6,-0.016,0.611328125);
   graph->SetPoint(7,-0.018,0.486328125);
   graph->SetPoint(8,-0.02,0.3984375);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Graph",100,-0.0213,-0.0057);
   Graph_Graph9->SetMinimum(0.1796875);
   Graph_Graph9->SetMaximum(2.804688);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetPoint(0,0.007,2.6953125);
   graph->SetPoint(1,0.008,2.1796875);
   graph->SetPoint(2,0.009,1.7890625);
   graph->SetPoint(3,0.01,1.497070312);
   graph->SetPoint(4,0.012,1.08203125);
   graph->SetPoint(5,0.014,0.80859375);
   graph->SetPoint(6,0.016,0.626953125);
   graph->SetPoint(7,0.018,0.501953125);
   graph->SetPoint(8,0.02,0.408203125);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0.0057,0.0213);
   Graph_Graph10->SetMinimum(0.1794922);
   Graph_Graph10->SetMaximum(2.924023);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,-0.007,1.535131373);
   graph->SetPoint(1,-0.008,1.255844933);
   graph->SetPoint(2,-0.009,1.040746225);
   graph->SetPoint(3,-0.01,0.8728141931);
   graph->SetPoint(4,-0.012,0.6361273407);
   graph->SetPoint(5,-0.014,0.4814146291);
   graph->SetPoint(6,-0.016,0.376962965);
   graph->SetPoint(7,-0.018,0.302209545);
   graph->SetPoint(8,-0.02,0.2471720991);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,-0.0213,-0.0057);
   Graph_Graph11->SetMinimum(0.1183762);
   Graph_Graph11->SetMaximum(1.663927);
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
   
   graph = new TGraph(9);
   graph->SetName("Graph");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#cccccc");
   graph->SetFillColor(ci);
   graph->SetFillStyle(3002);
   graph->SetLineWidth(2);
   graph->SetMarkerSize(0);
   graph->SetPoint(0,0.007,1.66717029);
   graph->SetPoint(1,0.008,1.356016149);
   graph->SetPoint(2,0.009,1.11913027);
   graph->SetPoint(3,0.01,0.9342852719);
   graph->SetPoint(4,0.012,0.674829903);
   graph->SetPoint(5,0.014,0.508103995);
   graph->SetPoint(6,0.016,0.3956509947);
   graph->SetPoint(7,0.018,0.3156695918);
   graph->SetPoint(8,0.02,0.2576435491);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0.0057,0.0213);
   Graph_Graph12->SetMinimum(0.1166909);
   Graph_Graph12->SetMaximum(1.808123);
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
   text = pt->AddText("-9.2 #upoint 10^{-3} < f_{4}^{Z} < 9.6 #upoint 10^{-3}");
   pt->Draw();
   canv->Modified();
   canv->cd();
   canv->SetSelected(canv);
}
