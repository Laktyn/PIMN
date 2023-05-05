#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {
    double a;
    double s;
    double l;
    double b;
    cout<<"Wpisz kilka liczb. Wpisz 0, by program przeanalizowal ciag:\n";
    cin>>a;
    s=a;//s-small
    b=a;//b-big
    l=a;//wartosc obecnego ciagu
    int k=1; //liczba powtorzen liczby najmniejszej
    int i=1; //liczba powtorzen liczby najwiekszej
    int d=1; //dlugosc biezacego ciagu
    double n; //liczba ktora jest w najdluzszym ciagu
    n=a;//wartosc najwiekszego ciagu
    int m=1; //dlugosc najwiekszego ciagu
while(a!=0){
    if(a<s){s=a;}
    if(a>b){b=a;}
    cin>>a;
    if(a==0){}
    else{
        if(a<s){k=1;}
        if(a==s){k++;}
    }
    if(a==0){}
    else{
        if(a>b){i=1;}
        if(a==b){i++;}
    }
    if(a==l){d++;}//jesli dwie kolejne liczby sie pokrywaja to zwiekszamy d o 1
    else{if(d>m){//jesli kolejna liczba jest inna i dlugosc ciagu jest dluzsza niz poprzedniego
            m=d;//to dlugosc najdluzszego ciagu to d
            n=l;}//to wartosc najdluzszego ciagu to l
            l=a; //rozpatrujemy nowy ciag, jest to a-ciag
            d=1;}//no i narazie dlugosci 1
 }
cout<<"\nNajmniejsza liczba, ktora wpisales, to "<<s<<"."<<endl;
cout<<"Powtorzyles ja "<<k<<" razy."<<endl;
cout<<"Najwieksza liczba, ktora wpisales, to "<<b<<"."<<endl;
cout<<"Powtorzyles ja "<<i<<" razy."<<endl;
cout<<"Najdluzszy ciag skladal sie z "<<n<<" i mial dlugosc "<<m<<".\n\n";
cout<<"Uwaga: Jesli podales kilka ciagow o maksymalnej dlugosci, to program zidentyfikuje wylacznie pierwszy z nich.";
int end;
cin>>end;
cout<<end;
    return 0;}