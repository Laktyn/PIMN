#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

template <typename F>
double newton(F f, double x0, double x1, double eps, vector <double> liczby){
double x;
while(abs(x1-x0)>eps){
    x=(f(x1,liczby)*x0-f(x0,liczby)*x1)/(f(x1,liczby)-f(x0,liczby));
    if(f(x,liczby)*f(x0,liczby)>0){x0=x;}
    else{x1=x;}
}
return (x0+x1)/2;
}
//newton oblicza miejsce zerowe (ale dziala tylko gdy f jest wielomianem)
double wielomian(double x, vector <double> liczby){
    double suma=liczby.at(0);
    for(int i=1; i<liczby.size();i++){
        suma+=(liczby.at(i)*pow(x,i));
    }
    return suma;
};
//wielomian oblicza wartosc wielomianu o wspolczynnikach liczby w punkcie x 
int main()
{cout<<"Program uzywa metody siecznych, by znalezc miejsca zerowe wielomianu w zadanym przedziale."<<endl<<endl;
cout<<"Podaj pierwsza granice przedzialu: ";//program moze sie zepsuc gdy jako granice przedzialu poda sie 0
double a;
cin>>a;
cout<<"Podaj druga granice przedzialu: ";
double b;
cin>>b;
cout<<"Podaj interesujaca cie dokladnosc wyniku: ";
double dokl;
cin>>dokl;

//ta czesc programu ponizej ma za zadanie jedynie wczytac wektor typu double, ktory bedzie wspolczynnikami wielomianu

string coef;
string tymcz;
vector <double> liczby;
cout<<"\nPodaj wspolczynniki wielomianu, ktorego miejsce zerowe chcesz znalezc. Zacznij od wyrazu wolnego. Poszczegolne liczby oddzielaj spacjami i calosc potwierdz enterem."<<endl;
cout<<"Wspolczynniki: ";
cin.ignore();
getline(cin,coef);
for(int i=0;i<coef.size();i++){
    if(coef.at(i)==' '){
        liczby.push_back(stod(tymcz));
        tymcz.clear();}
    else{tymcz.push_back(coef.at(i));}
}
liczby.push_back(stod(tymcz));

//i tu juz jest sam wynik

cout<<"\nDla podanych warunkow znaleziono miejsce zerowe: "<<newton(wielomian,a,b,dokl,liczby);

int end;
cin>>end;
cout<<end;
return 0;
}
