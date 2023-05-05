#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
double kwadrat(double x){return pow(x,2);}
vector<double> sampling1 (double from, double to, int n, double(*f)(double)){
    double N=n;
    double delta=(to-from)/(N-1.);
    vector <double> probkowanie1;
    for(int i=0;i<N;i++){
        probkowanie1.push_back(f(from+i*delta));
    }
    return probkowanie1;
}
int main()
{
    for(int i=0;i<100;i++){
    cout<<sampling1(0,10,100,kwadrat)[i]<<endl;}
int end;
cin>>end;
cout<<end;
return 0;
}
