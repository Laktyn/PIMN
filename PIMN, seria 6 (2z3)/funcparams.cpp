#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
double kwadrat(double x){return pow(x,2);}
vector <double> transform(const vector <double> &x, double(*f)(double)){//ta funkcja bierze wektor i funkcje i zwraca wektor wartosci funkcji na tym wektorze
    vector <double> a;
    for(int i=0;i<x.size();i++){
        a.push_back(f(x[i]));
    }
    return a;
}
vector <double> transformless(const vector <double> &x, double g,double(*f)(double)){//ta funkcja bierze wektor, funkcje i stala i zwraca wektor ktory ma argumenty x wieksze od g lub wpp wartosci funkcji w tych argumentach
    vector <double> a;
    for(int i=0;i<x.size();i++){
        if(x[i]>g){a.push_back(x[i]);}
        else{a.push_back(f(x[i]));}
    }
    return a;
}

typedef bool (*greater)(double,double);
double customMax(const vector<double>&v, greater f){//tego jeszcze nie dokonczylem i mi sie nei chce

}
int main(){

vector <double> wekt={1,2,3,4,5,6,7,8,9,10};

for(int i=0; i<wekt.size();i++){
cout<<transformless(wekt,5,kwadrat)[i]<<endl;}

int end;
cin>>end;
cout<<end;
return 0;}