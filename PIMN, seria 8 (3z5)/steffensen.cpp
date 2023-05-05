#include <iostream>
#include <math.h>
using namespace std;

double funkcja(double x){return sin(x);}
template <typename F>
double iloraz(F f, double x){
    if(f(x)==0){
        return 0;}
    else{
        double r=(f(x+f(x))/f(x)-1);
        return r;}
}
template <typename F>
double steffensen(F f, double x0, double eps){
double x1=x0;
double x2=x1+2*eps;
int iter=0;
while(abs(x1-x2)>eps){
    x2=x1;
    x1=x2-f(x2)/iloraz(funkcja,x2);
}
return x1;
}
int main(){
cout<<"Podaj punkt startowy: ";
double centre;
double error;
cin>>centre;
cout<<"Podaj margines bledu: ";
cin>>error;
cout<<"Miejsce zerowe jest "<<steffensen(funkcja,centre,error);
int end;
cin>>end;
cout<<end;
    return 0;
}