#include <iostream>
#include <vector>
#include <math.h>
#include <random>
using namespace std;

template <typename D>
vector <double> kresy(D f, double a, double b){
    double inf=f(a);
    double sup=f(a);
    double c;
    for(c=a;c<=b;c+=(b-a)/10000){
        if(f(c)>sup){sup=f(c);}
        if(f(c)<inf){inf=f(c);}
    }
    vector <double> kres;
    kres.push_back(inf);
    kres.push_back(sup);
    return kres;
}

template <typename D, typename G>
double intMonteCarlo(D f, G &gen, double a, double b, int N){
double sup=kresy(f,a,b).at(1);
uniform_real_distribution<double> iksy(a,b);
uniform_real_distribution<double> igreki(0,sup);
int k=0;
for(int i=0;i<N;i++){
    double x=iksy(gen);
    double y=igreki(gen);
    if(f(x)>=y){k++;}
}
double k1=(double) k;
double N1=(double) N;
double zwrot=(b-a)*sup/N1*k1;
return zwrot;
}

double circle(double x){
    double x1=pow(x,2);
    x1=(1-x1);
    x1=sqrt(x1);
    return x1;}

int main()
{
default_random_engine gen;
double result=2*intMonteCarlo(circle,gen,-1,1,10000000);
cout<<"Pi jest rowne "<<result;

int end;
cin>>end;
cout<<end;
return 0;
}
