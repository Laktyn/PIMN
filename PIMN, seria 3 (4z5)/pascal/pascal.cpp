#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int ntyWyraz(int wiersz[],int n){//ta funkcja bierze wiersz (trojkata pascala) oraz liczbe calkowita n i wypluwa to co bedzie na n-tym miejscu w nastepnym wierszu
    if(n==0){return 1;}
    else{
        int m;
        m=(wiersz[n]+wiersz[n-1]);
        return m;
    }
}
int main() {
cout<<"Ktory wiersz trojkata Pascala mam wypisac? ";
int n;
cin>>n;
const int N=n+1;
int wiersz1[N]={1};
int wiersz2[N]={1,1};
for(int j=1;j<(n-1);j++){//budujemy po kolei n wierszy
    for(int i=0;i<N;i++){wiersz1[i]=ntyWyraz(wiersz2,i);}//po tym mamy nowy ladny wers - z wiersz2 robi sie nowy wiersz1
    for(int i=0;i<N;i++){wiersz2[i]=wiersz1[i];}//wiersz2 przyjmuje wartosci wiersz1
}
for(int s=0; s<n; s++) {cout<<wiersz2[s]<<" ";}//wypisuje n-ty wiersz

int end;
cin>>end;
cout<<end;
    return 0;
}