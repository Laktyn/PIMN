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
int n;
cout<<"Wpisz ktory chcialbys poznac wyraz ciagu Fibonacciego: "<<endl;
cin>>n;
cout<<n<<"-ty wyraz ciagu Finonacciego to "<<f(n)<<"."<<endl;
int end;
cin>>end;
cout<<end;
    return 0;
}