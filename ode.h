#ifndef ODE_H_INCLUDED
#define ODE_H_INCLUDED

typedef double (*p2fun) (double, double);
double odeDerivative(double x, double y);
double improvedEuler(double a, double b, double ya, int n, p2fun f);
double trapezoidMethod(double a, double b, double ya, int n);

#endif // ODE_H_INCLUDED
