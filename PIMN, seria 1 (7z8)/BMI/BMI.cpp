#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
int end;
float m;
float h;
float bmi;
cout<<"Wzrost w metrach, poprosze: ";
cin>>h;
cout<<"Wage w kilogramach, poprosze: ";
cin>>m;
bmi=m/h/h;
cout<<"Twoje BMI to: ";
cout<<bmi;
if (bmi<=18.5) {
    cout<<" - Niedowaga :(";
}
else{
    if (bmi<=25) {
        cout<<" - Waga w normie :)";
    }
    else {
        if (bmi<=30) {
        cout<<" - Nadwaga :(";}
        else {cout<<" - Otylosc :(";}
    }
}
cin>>end;
cout<<end;
    return 0;
}