#include <iostream>

using namespace std;

typedef double (*pfun) (double);

double oneOver(double x){
    return 1/x;
}

double integrationTrapezoidal(double a, double b, int n, pfun f){
    double sum=0;
    double h=(b-a)/n;
    for (int i=0;i<n;i++){
        double x=a+i*h;
        sum+=(h/2)*(f(x)+f(x+h));
    }
    return sum;
}

int main()
{
    double ans=integrationTrapezoidal(1,2,100,oneOver);
    cout << "Hello world!" << endl;
    cout << ans << endl;
    char c;
    cin >> c;
    return 0;
}
