#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int sufit(double x){
int n=0;
while(x<n){n++;}
return n;
}
int up(int licz, int mian){return ((-mian)%licz);}
int down(int licz, int mian){
    return (licz*sufit(mian/licz));
    }
int main() {

cout<<"Licznik = ";
int l;
cin>>l;
cout<<"Mianownik = ";
int m;
cin>>m;

int mianowniki[100]={};
int i=0;
double l2;
double m2;
int l1;
int m1;
while(l!=1){
    cout<<"*";
    l2=(double)l;
    m2=(double)m;
    mianowniki[i]=sufit(m2/l2);
    i++;
    l1=l;
    m1=m;
    l=up(l1,m1);
    cout<<"$";
    m=down(l1,m1);
}
i=0;
cout<<"&";
while(mianowniki[i]!=0){
    cout<<"1/"<<mianowniki[i]<<" + ";
    i++;
}


int end;
cin>>end;
cout<<end;
    return 0;
}