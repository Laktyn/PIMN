#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {

int k;
cout<<"Podaj liczbe naturalna: ";
cin>>k;

int col=k;
int i=0;
cout<<"\n"<<col;
while(col!=1){
    i++;
    if(col%2==0){col=(col/2);}
    else{col=(3*col+1);}
    cout<<col<<" ";
}

int end;
cin>>end;
cout<<end;
    return 0;
}