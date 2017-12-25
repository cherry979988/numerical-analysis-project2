#include <iostream>
#include <limits>
#include "newton.h"
#include "ode.h"
#include "taylor.h"

using namespace std;

int main()
{
    double ans=0;
    char c=' ';

    while (true){
		cout << "Please select: " << endl << "1. Taylor series" << endl;
		cout << "2. Integration using trapezoid method" << endl;
		cout << "3. Integration using improved Euler method" << endl;
		cout << "4. Solving equation using Newton's method" << endl;
		cout << "Input other keys to quit." << endl;
		cin >> c;
		switch (c) {
			case '1': ans = taylorSeries(1,10); break;
			case '2': ans = trapezoidMethod(0,1,1,10000); break;
			case '3': ans = improvedEuler(0,1,1,10000,odeDerivative); break;
			case '4': ans = newtonMethod(2,integration2x,oneOver); break;
			default: return 0;
		}
		cout << "Answer: " << ans << endl << endl;
    }

    return 0;
}
