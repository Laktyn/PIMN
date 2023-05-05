#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

//ta funkcja liczy kwadrature wielomianow majac podany wektor ich wspolczynnikow, wektor wezlow, wektor wag oraz granice calkowania
template <typename F>
double intGauss(F f, double a, double b, vector <double> w, vector <double> x, vector <double> coef){
double sum=0;
vector <double> :: iterator it;
vector <double> :: iterator de;
for(it=w.begin(), de=x.begin();it!=w.end();it++, de++){
    sum+=(*it*f(coef,(b-a)/2**de+(a+b)/2));
}
sum*=((b-a)/2);
return sum;
}

//ta funkcja liczy kwadrature wielomianow majac podany wektor ich wspolczynnikow, liczbe wezlow oraz granice calkowania
template <typename F>
double intGaussN(F f, double a, double b, int N, vector <double> coef){
vector <double> x;
vector <double> w; 
switch (N){
    case 2:
        x={-0.57735,0.57735};
        w={1,1};
        break;
    case 3:
        x={-0.77460,0,0.77460};
        w={0.55555,0.88888,0.55555};
        break;
    case 4:
        x={-0.86114,-0.33998,0.33998,0.86114};
        w={0.34786,0.65216,0.65216,0.34786};
        break;
    case 5:
        x={-0.90618,-0.53847,0,0.53847,0.90618};
        w={0.23693,0.47863,0.56889,0.47863,0.23693};
        break;
    default:
        break;
}
double sum=0;
vector <double> :: iterator it;
vector <double> :: iterator de;
for(it=w.begin(), de=x.begin();it!=w.end();it++, de++){
    sum+=(*it*f(coef,(b-a)/2**de+(a+b)/2));
}
sum*=((b-a)/2);
return sum;
}

//ta funkcja oblicza wartosc wielomianu w punkcie na podstawie wektora jego wspolczynnikow
double polynomial(vector <double> coef, double x){
double zwrot=0;
vector <double> :: iterator nl;
int i=0;
for(nl=coef.begin(); nl!=coef.end(); nl++, i++){
    zwrot+=(*nl*pow(x,i));
}
return zwrot;
}

int main(){

cout<<"Program calkuje wielomiany z wykorzystaniem metody kwadratury Gaussa-Legendre'a."<<endl;
cout<<"Podaj dla iluwezlowej kwadratury chcesz dokonac obliczen (liczba calkowita od 2 do 5): ";
int N;
cin>>N;
cout<<"Podaj granice, w ktorych chcesz przeprowadzic calkowanie. Na poczatku dolna: ";
double from;
cin>>from;
cout<<"i gorna: ";
double to;
cin>>to;
cout<<"Podaj teraz wspolczynniki wielomianu, ktory chcesz wycalkowac, zaczynajac od wyrazu wolnego. Poszczegolne liczby oddzielaj spacjami, a calosc zatwierdz enterem."<<endl;

//wczytujemy z konsoli wspolczynniki
string text;
string numer;
vector <double> liczby;
cin.ignore();
getline(cin,text);
for(int i=0;i<text.size();i++){
    if(text.at(i)==' '){
        liczby.push_back(stod(numer));
        numer.clear();}
    else{numer.push_back(text.at(i));}
}
liczby.push_back(stod(numer));

cout<<"\nObliczono kwadrature wielomianu w zadanych granicach i otrzymano wartosc "<<intGaussN(polynomial, from, to, N, liczby)<<".";

int end;
cin>>end;
cout<<end;
return 0;
}