#include <iostream>
#include <iomanip>
#include "taylor.h"

using namespace std;

double taylorSeries(double x, int n){
	// calculating e^x using taylor series
	// e^x = 1 + x + x^2 / 2! + x^3 / 3! + ...
	cout.setf(ios::fixed);
	cout << "Using Taylor Series Method ..." << endl;
	double sum=1;
	double xpow=x;
	long long fac=1;
	cout << "iter #" << "0" << ": " << sum << endl;
	for (int i=1;i<=n;i++){
		sum+=xpow/fac;
		xpow*=x;
		fac*=i+1;
		cout << setprecision(8) << "iter #" << i << ": " << sum << endl;
	}
	return sum;
}
