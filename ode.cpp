#include <iostream>
#include <iomanip>
#include "ode.h"
using namespace std;

double odeDerivative(double x, double y){
	return y;
}

double improvedEuler(double a, double b, double ya, int n, p2fun f){
	// using improved Euler method to solve ode
	// (a, ya) -> given y(a)=ya
	// b -> solve y(b) and return
	// n -> number of iteration
	// f -> y' = f(x,y)
	cout.setf(ios::fixed);
	cout << "Using Improved Euler Method ..." << endl;
	cout << setprecision(10) << "iter #" << "0" << ": " << ya << endl;
	double x=a;
	double y=ya;
	double y_est; //estimation of y_{n+1}
	double h=(b-a)/n; //step size
	for (int i=0;i<n;i++){
		y_est=y+h*f(x,y);
		y=y+(h/2)*(f(x,y)+f(x+h,y_est));
		cout << setprecision(10) << "iter #" << i+1 << ": " << y << endl;
		x=x+h;
	}
	return y;
}

double trapezoidMethod(double a, double b, double ya, int n){
	// using trapezoid method to solve ode
	// parameters are the same as improvedEuler()
	cout.setf(ios::fixed);
	cout << "Using Trapezoid Method ..." << endl;
	cout << setprecision(10) << "iter #" << "0" << ": " << ya << endl;
	double y=ya;
	double h=(b-a)/n;
	double co = (2+h)/(2-h);
	for (int i=0;i<n;i++){
		y=co*y;
		cout << setprecision(10) << "iter #" << i+1 << ": " << y << endl;
	}
	return y;
}
