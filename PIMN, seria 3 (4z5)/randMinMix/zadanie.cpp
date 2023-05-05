#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void tabminmax(double a[], int size, int & cmin, int & cmax, double & vmin, double & vmax){
    vmax=a[0];
    vmin=a[0];
    cmax=0;
    cmin=0;
    for(int i=0;i<size;i++){    
        if(a[i]> vmax){
        vmax=a[i];
        }
    } //po tym forze vmax jest równe największemu elementowi a
    for(int i=0;i<size;i++){    
        if(a[i]< vmin){
        vmin=a[i];
        }
    } //po tym forze vmin jest równe najmniejszemu elementowi a
    for(int i=0;i<size;i++){
        if(a[i]==vmax){cmax++;}
    }
    for(int i=0;i<size;i++){
        if(a[i]==vmin){cmin++;}
    }
}
int main() {

int end;

double min;
double max;
int lengthmin;
int lengthmax;

cout<<"Ilu elementowa chcesz miec tablice: "<<endl;
int rozmiar;
cin>>rozmiar;
const int N=rozmiar;
double a[N];
srand(time(NULL));
for(int i=0; i<N; i++){
    a[i]=rand()%10001;
    a[i]=a[i]/10000.0;
}

tabminmax(a,N,lengthmin,lengthmax,min,max);
cout<<"Wylosowano elementy: ";
for(int i=0; i<N; i++){
    int j=i+1;
    cout<<j<<". "<<a[i]<<endl;
}
cout<<"Najwieksza wylosowana liczba to "<<max<<" i powtorzyla sie ona "<<lengthmax<<" razy."<<endl;
cout<<"Najmniejsza wylosowana liczba to "<<min<<" i powtorzyla sie ona "<<lengthmin<<" razy."<<endl;
cin>>end;
cout<<end;
    return 0;
}