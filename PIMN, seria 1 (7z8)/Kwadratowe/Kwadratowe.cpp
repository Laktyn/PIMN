#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
double a;
double b;
double c;
double delta;
double x1;
double x2;
cout<< "Moj drogi, masz rownanie kwadratowe postaci: \n\nax^2+bx+c=0 \n \nBy poznac jego rozwiazanie wpisz na poczatku wartosci wspolczynnikow: "<<endl<<endl;
cout<<"a= ";
 cin>>a;
 if(a==0) cout<<"\nKurwa, ktorej czesci slowa <<kwadratowe>> nie rozumiesz?";
 else{
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    delta=(b*b-4*a*c);
    if(delta>0){
        double pierw;
        pierw=sqrt(delta);
        x1=(-b+pierw)/2/a;
        x2=(-b-pierw)/2/a;
        cout<<"\nJednym rozwiazaniem jest " << x1 << " a drugim " << x2;
    }
    else if (delta==0) {
        x1=(-b/2/a);
        cout<<"\nRozwiazaniem podwojnym rownania jest " << x1;
    }
    else {
        double re;
        double im;
        double pierw;
        pierw=sqrt(-delta);
        re=(-b/2/a);
        im=(pierw/2/a);
        cout<<"Rownanie ma rozwiazania zespolone. Jedno z nich to "<<re<<"+("<<im<<")i a drugie to "<<re<<"-("<<im<<")i";
    }
 }
int end;
cin>>end;
cout<<end;
    return 0;
}