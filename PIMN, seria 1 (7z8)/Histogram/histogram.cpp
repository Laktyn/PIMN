#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {

cout<<"Ile chcesz podac liczb. (Uwaga, podawaj liczby calkowite dodatnie!): ";
int n;
cin>>n;
const int N=n;
cout<<"\n Wpisz te liczby: ";
int set[N];
for(int i=0;i<N;i++){
    cin>>set[i];
}
sort(set,set+N);//mamy juz posortowana tablice wpisanych liczb

int single[N];
for(int i=0;i<N;i++){
    single[i]=set[i];
}//single jest kopia set
for(int i=0;i<N;i++){
    for(int j=(i+1);j<N;j++){
        if(single[j]==single[i]){
            single[j]=0;
        }
    }
}//po tej akcji kazda liczba z set wystepuje w single dokladnie jeden raz; do tego mamy same zera

cout<<"\n"<<"HISTOGRAM"<<endl;
for(int i=0;i<N;i++){
    if(single[i]==0){}
    else{
        cout<<"\n"<<single[i]<<" ";
        for(int j=0;j<N;j++){
            if(single[i]==set[j]){cout<<"*";}
        }      
    }
    
}
int end;
cin>>end;
cout<<end;
    return 0;
}