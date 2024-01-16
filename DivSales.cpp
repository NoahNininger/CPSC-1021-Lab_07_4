#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "DivSales.h"
using namespace std;

double DivSales::totalSales = 0;

void DivSales::setSales(double q1, double q2, double q3, double q4) {
	// pushing q1-4 on to the sales vector
	sales->push_back(q1);
	sales->push_back(q2);
	sales->push_back(q3);
	sales->push_back(q4);

	// finding sum of each quarter
	divSales = accumulate(sales->begin(), sales->end(), 0.00);

	// adding divsales to the total corprate sales
	totalSales += divSales;
}
double DivSales::getDivSales() {
	return divSales;
}
double DivSales::getCorpSales() {
	return totalSales;
}
