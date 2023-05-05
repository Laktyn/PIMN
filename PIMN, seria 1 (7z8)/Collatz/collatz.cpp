#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {

int pozycja=1;
int iter=0;

for(int j=1; j<1e6; j++){//testujemy liczby od 1 do miliona
    
    if(j%10000==0){
        cout<<(j/10000)<<"%\n";
    }//to jest tylko wskaznik postepu petli "for"

    int col=j;
    int i=0;
    while(col!=1){
        i++;
        if(col%2==0){col=(col/2);}
        else{col=(3*col+1);}
    }//to mierzy dlugosc ciagu Collatza zaczynajacego sie od j; dlugosc to i

    if(i>iter){
        pozycja=j;
        iter=i;
    }//jesli jest to ciag dotychczas najdluzszy to odhaczamy to na "pozycja" i "iter"
}
cout<<"100%"<<endl<<endl;
cout<<"Najdluzszym ciagiem Collatza jest ten zaczynajacy sie od "<<pozycja<<endl;
cout<<"W tym ciagu przed pierwszym wystapieniem jedynki wystapilo "<<iter<<" liczb";

int end;
cin>>end;
cout<<end;
    return 0;
}