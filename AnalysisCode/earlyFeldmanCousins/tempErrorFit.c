{
gROOT->SetStyle("Plain");
gStyle->SetOptFit(0000);
   double x[84] = {0.165, 0.175, 0.185, 0.195, 0.205, 0.215, 0.225, 0.235, 0.245, 0.255, 0.265, 0.275, 0.285, 0.295, 0.305, 0.315, 0.325, 0.335, 0.345, 0.355, 0.365, 0.375, 0.385, 0.395, 0.405, 0.415, 0.425, 0.435, 0.445, 0.455, 0.465, 0.475, 0.485, 0.495, 0.505, 0.515, 0.525, 0.535, 0.545, 0.555, 0.565, 0.575, 0.585, 0.595, 0.605, 0.615, 0.625, 0.635, 0.645, 0.655, 0.665, 0.675, 0.685, 0.695, 0.705, 0.715, 0.725, 0.735, 0.745, 0.755, 0.765, 0.775, 0.785, 0.795, 0.805, 0.815, 0.825, 0.835, 0.845, 0.855, 0.865, 0.875, 0.885, 0.895, 0.905, 0.915, 0.925, 0.935, 0.945, 0.955, 0.965, 0.975, 0.985, 0.995};
   double y[84] = {3732.81, 3619.96, 3502.13, 3326.68, 3243.92, 3243.65, 3152.06, 3036.55, 3065.7, 2960.79, 2913.64, 2856.64, 2831.2, 2844.73, 2760.67, 2723.34, 2685.93, 2652.4, 2631.49, 2616, 2569.77, 2569.63, 2501.03, 2462.21, 2445.06, 2444.8, 2374.85, 2350.42, 2341.38, 2324.71, 2265.26, 2281.25, 2231.87, 2265.47, 2249.5, 2211.57, 2181.78, 2125.99, 2128.28, 2070.8, 2083.81, 2041.36, 2079.8, 2009.69, 2030, 2003.48, 1929.03, 1950.69, 1941.31, 1972.18, 1896.7, 1911.47, 1891.72, 1866.06, 1904.23, 1826.4, 1853.87, 1886.39, 1821.23, 1840.46, 1793.48, 1787.64, 1728.52, 1758, 1696.73, 1790.57, 1770.66, 1718.69, 1741.2, 1697.99, 1718.47, 1676.7, 1623.81, 1621.22, 1689.57, 1639.56, 1646.27, 1610.59, 1651.51, 1615.36, 1635.05, 1601.44, 1594.69, 1595.55};
   TGraph tg (84, x, y);
   tg.SetTitle("P-bMeas-bBest vs bMeasured");
   tg.SetMarkerStyle(20);
   tg.Draw("ALP");
   tg.Fit("pol5");
   c1->Print("P-bMeas-bBest_vs_bMeasured.eps");
}