#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int pierwsza(double n){
    double x;
    int prime=1;
        for(double i=2;i<=n/2+1;i++){ //chcemy sprawdzić czy n jest złożone czy nie, więc dzielimy przez i
           x=n/i;
               for(int k=2;k<=n/2+1;k++) if(x==k){prime=0;}; //marker=1, jesli E k tz x=k tj. n zlozone
        }
    return prime;    
}
int main() {

cout<<"Zasady sa proste: ty podajesz liczbe a ja wypisuje wszystkie liczby pierwsze mniejsze od tej liczby. Podaj liczbe: ";
int n;
cin>>n;
double set[n];
for(int i=0;i<n;i++){
    double j=i+1;
    set[i]=j;
}//no i mamy juz tablice liczb od 1 do n

for(int s=0;s<n;s++){//teraz z kolei iterujemy po wyrazach s setu
    if(pierwsza(set[s])==0){set[s]=0;}
}//juz nasz set zawiera tylko prajmy i zera

for(int s=2;s<n;s++){
    if(set[s]==0){}
    else{cout<<set[s]<<endl;}
}
int end;
cin>>end;
cout<<end;
    return 0;
}