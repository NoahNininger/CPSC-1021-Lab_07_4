// take in user data for finances then calculate the total, where each division is stored as an object
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include "DivSales.h"
using namespace std;

int main()
{
	double userin;
	vector<double> userins;  // vector to hold quartly sales
	vector<DivSales> vsalesobjs;  // vector of division sales objects
	
  // main loop to get sales for each division
	for (int i = 1; i <= 4; i += 1)
  {
		cout << "Enter sales data for Division " << i << endl;
		DivSales div;
    
		// loop to get each quarter
		for (int u = 1; u <= 4; u += 1)
    {
			cout << "Quarter " << u << ": ";
			cin >> userin;
			while (userin < 0)
      {
				cout << "Please enter 0 or greater: ";
				cin >> userin;
			}
			userins.push_back(userin);
		}
    
		//passing the arguments stored in the "userins" vector
		div.setSales(userins[0], userins[1], userins[2], userins[3]);
		//pushing object on to a vector of objects storing each divisions earnings
		vsalesobjs.push_back(div);
		// clearing the "userins" vector to be used with next set of inputs
		userins.clear();
	}
	// loop for printing division sales
	for (int i = 1; i <= 4; i += 1)
    {	cout << "Total sales for division " << i << ": $" << fixed << setprecision(2) << vsalesobjs[i - 1].getDivSales() << endl; }
	
  // printing total corprate sales, output object is used to get the corpSales static var.
	DivSales output;
	cout << "Total Corprate Sales: $" << fixed << setprecision(2) << output.getCorpSales() << endl;
	return 0;
}
