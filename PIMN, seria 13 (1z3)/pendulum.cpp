#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std;

double g=9.81;
//obliczamy jaka bedzie predkosc po infinitezymalnej zmianie czasu
double velocity(double l, double dt, double phi, double velo){
    double a=-g/l*sin(phi);
    double v=(velo+a*dt);
    return v;
}

int main(){
cout<<"Podaj w sekundach dlugosc kroku: ";
double krok;
cin>>krok;
cout<<"Podaj w metrach dlugosc wahadla: ";
double dlug;
cin>>dlug;
cout<<"Podaj w sekundach przez jak dlugi czas chcesz zbadac zachowanie wahadla: ";
double tmax;
cin>>tmax;
cout<<"Podaj w radianach poczatkowe wychylenie wahadla: ";
double phi;
cin>>phi;
cout<<"Podaj poczatkowa predkosc katowa wahadla: ";
double velo;
cin>>velo;

double t=0;

ofstream plik;
plik.open("dane.txt");
plik<<"t"<<'\t'<<"phi"<<'\t'<<"omega"<<endl;
while(t<tmax){
plik<<t<<'\t'<<phi<<'\t'<<velo<<endl;
t+=krok;
phi+=(velocity(dlug,krok,phi,velo)*krok); //w pierwszym rachunku bledow wahadlo przez infinitezymalny czas porusza sie ze stala predkoscia
velo=velocity(dlug,krok,phi,velo);
}
plik.close();

//program moznaby zoptymalizowac, zadajac zeby np zapisywal do pliku jedynie co tysieczna obliczona wartosc phi

int end;
cin>>end;
cout<<end;
return 0;
}