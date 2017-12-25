#ifndef NEWTON_H_INCLUDE
#define NEWTON_H_INCLUDE

#include <iostream>

using namespace std;

typedef double (*pfun) (double);
double oneOver(double x);
double integrationTrapezoidal(double a, double b, int n, pfun f);
double integration2x(double x);
double newtonMethod(double x, pfun f, pfun f_derivative);

#endif // NEWTON_H_INCLUDE

