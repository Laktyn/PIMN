#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int binsearch(int tab[], int value, int min, int max){
    max++;
    int pozycja=-1;
    if(min<0){cout<<"ERROR";}
    else{
        for(int i=min; i<max; i++){
            int j=i+1;
            if(tab[i]==value){
                pozycja=j;}
        }
    }    
    return pozycja;
}
int main() {
cout<<"Moj drogi, ile chcesz podac liczb: "<<endl<<endl;
int rozm;
cin>>rozm;
const int rozmiar=rozm;

cout<<"To podawaj: "<<endl<<endl;
int tablica[rozmiar];
for(int i=0;i<rozmiar;i++){cin>>tablica[i];}
sort(tablica,tablica+rozmiar);

cout<<"Dobra, posortowalem te twoje cyferki rosnaco. Podaj mi teraz jakas liczbe calkowita"<<endl;
cout<< "a ja ci podam na ktorej pozycji w posortowanej tabeli sie znajduje. Jesli jej nie podales to wyskoczy -1."<<endl;
cout<<"Szukasz liczby... ";
int n;
cin>>n;
cout<<"\n Jest na pozycji "<<binsearch(tablica,n,0,rozmiar);

int end;
cin>>end;
cout<<end;
    return 0;
}