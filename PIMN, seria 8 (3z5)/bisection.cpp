#include <iostream>
#include <math.h>
using namespace std;
template <typename F>
double bisection(F f, double &from, double &to, double eps){
    //zakladamy tutaj ze wartosci funkcji w od i do sa przeciwnego znaku
    double mid=(from+to)/2;
    while(to-from>2*eps){
        if(f(mid)==0){break;}
        if(f(mid)*f(from)<0){
            to=mid;
        }
        else if(f(mid)*f(to)<0){
            from=mid;
        }
        mid=(from+to)/2;
    }
    return mid;
}
double funkcja(double x){return (pow(x,2)-50);}
int main() {

double a;
double b;
double error;
cout<<"Znalezc miejsce zerowe w przedziale od: ";
cin>>a;
cout<<"do: ";
cin>>b;
cout<<"z mozliwym bledem: ";
cin>>error;
double zero;
if(funkcja(a)*funkcja(b)>0){
    cout<<"\n W zadanym przedziale funkcja nie ma miejsc zerowych lub ma wiecej niz jedno. Zmien granice przedzialu.";}
else{zero=bisection(funkcja, a, b, error);
double low=zero-error;
double up=zero+error;
cout<<"W badanym odcinku miejsce zerowe funkcji znajduje sie w przedziale ("<<low<<","<<up<<").";
}

int end;
cin>>end;
cout<<end;
    return 0;
}