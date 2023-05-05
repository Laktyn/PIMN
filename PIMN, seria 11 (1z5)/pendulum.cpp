#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std;

double g=9.81;
double step(double l, double dt, double phi){
    double a=-g/l*sin(phi);
    double dphi=a*pow(dt,2)/2;
    return (phi+dphi);
}

int main(){
cout<<"Podaj dlugosc kroku: ";
double krok;
cin>>krok;
cout<<"Podaj dlugosc wahadla: ";
double dlug;
cin>>dlug;
cout<<"Podaj w sekundach przez jak dlugi czas chcesz zbadac zachowanie wahadla";
double tmax;
cin>>tmax;

double t=0;
double phi=0;

ofstream plik;
plik.open("dane.txt");
plik<<"t"<<'\t'<<"phi"<<endl;
while(t<tmax){
plik<<t<<'\t'<<phi<<endl;
t+=krok;
phi=step(dlug,krok,phi);
}
plik.close();

int end;
cin>>end;
cout<<end;
return 0;
}