#include <iostream>
#include <vector>
#include <math.h>
#include <random>
using namespace std;

template <typename G>
double nball(G &gen, int N, int dim){
uniform_real_distribution<double> uni(0,1.);
int k=0;
for(int i=0;i<N;i++){
    double suma=0;
    for(int j=0; j<dim;j++){
        double x=uni(gen);
        suma+=pow(x,2);
    }
    if(suma<=1){k++;}
}
double k1=(double) k;
double N1=(double) N;
double zwrot=pow(2,dim)/N1*k1;
return zwrot;
}

int main()
{
default_random_engine gen;

int dim;
int N;
cout<<"Podaj wymiar: ";
cin>>dim;
cout<<"Podaj liczbe losowan: ";
cin>>N;
cout<<"\n Jednostkowa kula "<<dim<<"-wymiarowa ma objetosc "<<nball(gen,N,dim);

int end;
cin>>end;
cout<<end;
return 0;
}
