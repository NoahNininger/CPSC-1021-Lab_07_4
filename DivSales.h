#ifndef DIV_SALES_H_
#define DIV_SALES_H_
#include <iostream>
#include <vector>
using namespace std;
class DivSales {
private:
	// holds the quarterly sales	
	vector<double> sales[4];
	// holds yearly sales
	double divSales { 0 };
	// holds total over 4 years for each instance of DivSales
	static double totalSales;
public:
	DivSales() = default;
	void setSales(double, double, double, double);
	double getDivSales();
	static double getCorpSales();
};
#endif // !DIV_SALES_H_
