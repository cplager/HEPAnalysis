{
   //
   // To see the output of this macro, click  here. 
   //
   gROOT->Reset();
   c1 = new TCanvas("c1","gerrors2",200,10,700,500);
   c1->SetFillColor(42);
   c1->SetGrid();

      // create a 2-d histogram to define the range
   //TH2F *hr = new TH2F("hr","Several graphs in the same pad",2,-0.4,1.2,2,0,12);
   //hr->SetXTitle("X title");
   //hr->SetYTitle("Y title");
   //hr->Draw();
   //c1->GetFrame()->SetFillColor(21);
   //c1->GetFrame()->SetBorderSize(12);

      // create first graph
   Int_t n1 = 10;
   Float_t x1[]  = {-0.22, 0.05, 0.25, 0.35, 0.5, 0.61,0.7,0.85,0.89,0.95};
   Float_t y1[]  = {1,2.9,5.6,7.4,9,9.6,8.7,6.3,4.5,1};
   Float_t ex1[] = {.05,.1,.07,.07,.04,.05,.06,.07,.08,.05};
   Float_t ey1[] = {.8,.7,.6,.5,.4,.4,.5,.6,.7,.8};
   gr1 = new TGraphErrors(n1,x1,y1,ex1,ey1);
   gr1->SetMarkerColor(kBlue);
   gr1->SetMarkerStyle(21);
   gr1->Draw("LP");

      // create second graph
   Int_t n2 = 10;
   Float_t x2[]  = {-0.28, 0.005, 0.19, 0.29, 0.45, 0.56,0.65,0.80,0.90,1.01};
   Float_t y2[]  = {0.82,3.86,7,9,10,10.55,9.64,7.26,5.42,2};
   Float_t ex2[] = {.04,.12,.08,.06,.05,.04,.07,.06,.08,.04};
   Float_t ey2[] = {.6,.8,.7,.4,.3,.3,.4,.5,.6,.7};
   gr2 = new TGraphErrors(n2,x2,y2,ex2,ey2);
   gr2->SetMarkerColor(kRed);
   gr2->SetMarkerStyle(20);
   gr2->Draw("LP");
}

