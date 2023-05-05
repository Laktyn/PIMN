#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
template <typename F>
double prostokaty (double from, double to, int n, F f){
    double N=n;
    double delta=(to-from)/N;
    double suma=0;
    for(int i=0; i<N;i++){
        suma+=f(from+i*delta);
    }
    suma*=delta;
    return suma;
}
template <typename F>
double trapezy (double from, double to, int n, F f){
    double N=n;
    double delta=(to-from)/N;
    double suma=0;
    for(int i=0; i<N;i++){
        suma+=f(from+i*delta);
    }
    suma-=0.5*f(from);//tylko ta drobna poprawka
    suma+=0.5*f(to);//rozni matematycznie metode prostokatow od trapezow
    suma*=delta;
    return suma;
}
template <typename F>
double simpson (double from, double to, int n, F f){
    double N=n;
    double delta=(to-from)/N;
    double suma=0;
    for(int i=0; i<N;i++){
        suma+=f(from+i*delta)+4*f(from+(i+0.5)*delta)+f(from+(i+1)*delta);
    }
    suma*=delta;
    suma/=6.;
    return suma;
}
//sample functions
double potega(double a){return pow(a,5);}
double sinus(double a){return sin(a);}
double pierw(double a){return sqrt(a);}
//
int main()
{

int steps=10;
double from=0;
double to=1;

cout<<"Wynik calkowania metoda prostokatow to: "<<endl;
cout<<prostokaty(from,to,steps,potega)<<endl;
cout<<"Wynik calkowania metoda trapezow to: "<<endl;
cout<<trapezy(from,to,steps,potega)<<endl; 
cout<<"Wynik calkowania metoda simpsona to: "<<endl;
cout<<simpson(from,to,steps,potega)<<endl;  

int end;
cin>>end;
cout<<end;
return 0;
}
