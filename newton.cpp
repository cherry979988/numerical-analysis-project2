#include <iostream>
#include <cmath>
#include <iomanip>
#include "newton.h"
#define eps 0.5*1e-6

using namespace std;

double oneOver(double x){
    return 1/x;
}

double integrationTrapezoidal(double a, double b, int n, pfun f){
	//a -> starting point, b -> ending point
	//n -> number of iteration
	//f -> integrand, i.e. function f(x) to be integrated
    double sum=0;
    double h=(b-a)/n;
    for (int i=0;i<n;i++){
        double x=a+i*h;
        sum+=(h/2)*(f(x)+f(x+h));
    }
    return sum;
}

double integration2x(double x){
	return integrationTrapezoidal(1,x,10000,oneOver)-1;
}

double newtonMethod(double x, pfun f, pfun f_derivative){
	// solving equation using Newton's method: x <- x - f(x)/f'(x);
	cout << "Using Newton Method ..." << endl;
	cout.setf(ios::fixed);
	int iter=0;
	double x_before=x;
	cout << "iter #" << iter << ": " << x << endl;
	while (true){
		x_before = x;
		x = x - f(x) / f_derivative(x);
		iter++;
		cout << setprecision(8) << "iter #" << iter << ": " << x <<endl;
		if (5.0/3.0*abs(x-x_before)<eps) break;
	}
	return x;
}
