#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int f(int n){
    int f1=1;//niech f1>f2
    int f2=1;
    int a;
    if(n==1) {return 1;}
    else{
        if(n==2){return 2;}
        else{
            if(n>2){
                for(int i=1;i<n-1;i++){
                a=f1;
                f1=f2+a;
                f2=a;
                }
                return f1;
            }
        }
    }
}
int main() {
int suma=1;
for(int n=3; f(n)<3E6;n++){
    if(n%2==0){suma=suma+f(n);}
}
cout<<suma;
int end;
cin>>end;
cout<<end;
    return 0;
}