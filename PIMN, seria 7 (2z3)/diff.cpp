#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
double diffForward(double (*f)(vector <double>,double),vector <double> faktors,double x, double h){
    double a=((f(faktors,x+h)-f(faktors,x))/h);
    return a;
}
double diffBackward(double (*f)(vector <double>,double),vector <double> faktors,double x, double h){
    double a=((f(faktors,x)-f(faktors,x-h))/h);
    return a;
}
double diffCentral(double (*f)(vector <double>,double),vector <double> faktors,double x, double h){
    double a=((f(faktors,x+h)-f(faktors,x-h))/h/2);
    return a;
}
double diffRichardson(double (*f)(vector <double>,double),vector <double> faktors,double x, double h){
    double a=((-f(faktors,x+2*h)+8*f(faktors,x+h)-8*f(faktors,x-h)+f(faktors,x-2*h))/12/h);
    return a;
}
double funkcja(vector <double> wspol,double x){
    double wynik=wspol.at(0);
    for(int i=1;i<wspol.size();i++){
        wynik+=wspol.at(i)*pow(x,i);
    }
    return wynik;
    }
int main()
{
cout<<"Niniejszy program rozniczkuje tylko wielomiany. Podaj po kolei wspolczynniki wielomianu ktory chcesz zrozniczkowac. ";
cout<<"Jakiego stopnia wielomian chcesz zrozniczkowac: ";
int stop;
cin>>stop; 
cout<<"Teraz podaj wyraz wolny, potem wspolczynnik przy pierwszej potedze itd."<<endl;
vector <double> a;
double wyraz;
for(int i=0;i<=stop;i++){
    cout<<"a_"<<i<<"=";
    cin>>wyraz;
    a.push_back(wyraz);
}
cout<<endl;
cout<<"Podaj metode rozniczkowania.\"forward\" dla pochodnej prawostronnej, \"backward\" dla pochodnej lewostronnej, \"central\" dla sredniej tych pochodnych, ";
cout<<"\"richardson\" dla metody Richardsona."<<endl;
cout<<"Metoda: ";
string metoda;
cin.ignore();
getline(cin,metoda);
cout<<"Podaj punkt, w ktorym chcesz obliczyc pochodna: ";
double x;
cin>>x;
cout<<"Podaj \"szerokosc\" ilorazu roznicowego, dla ktorej chcesz dokonac obliczen: ";
double h;
cin>>h;

cout<<endl;
if(metoda=="forward"){cout<<"Aproksymacja wartosci pochodnej w tym punkcie to: "<<diffForward(funkcja,a,x,h);}
else if(metoda=="backward"){cout<<"Aproksymacja wartosci pochodnej w tym punkcie to: "<<diffBackward(funkcja,a,x,h);}
else if(metoda=="richardson"){cout<<"Aproksymacja wartosci pochodnej w tym punkcie to: "<<diffCentral(funkcja,a,x,h);}
else if(metoda=="central"){cout<<"Aproksymacja wartosci pochodnej w tym punkcie to: "<<diffRichardson(funkcja,a,x,h);}
else{cout<<"Nie potrafie rozniczkowac metoda, ktora podales. Sprawdz pisownie.";}

int end;
cin.ignore();
cin>>end;
cout<<end;
return 0;
}
