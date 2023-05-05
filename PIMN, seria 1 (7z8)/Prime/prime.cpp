#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
int end;
double m;
double x;
int marker=0;
int prime=0;
cout<<"Enter number: ";
cin>>m;
double n=m+1;
while(prime==0){//program tak długo się wykonuje jak długo dane n jest złożone
    marker=0;
    for(double i=2;i<=n/2+1;i++){ //chcemy sprawdzić czy n jest złożone czy nie, więc dzielimy przez i
        x=n/i;
            for(int k=2;k<=n/2+1;k++) if(x==k){marker=1;}; //marker=1, jesli E k tz x=k tj. n zlozone
    }
    if(marker==1){n++;}
    else {prime=1;};
}
cout<<"Smallest prime greater than "<< m << " is "<< n  ;
cin>>end;
cout<<end;
    return 0;
}