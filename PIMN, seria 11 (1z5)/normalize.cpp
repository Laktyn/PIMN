#include <iostream>
#include <vector>
#include <string>
using namespace std;

double min(vector <double> v){//funkcja znajdujaca min wektora
    double min=v.at(0);
    vector <double>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        if(*it<min){
            min=*it;
        }
    }
    return min;
}

double max(vector <double> v){//funkcja znajdujaca max vektora
    double max=v.at(0);
    vector <double>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        if(*it>max){
            max=*it;
        }
    }
    return max;
}

int main(){
string text;
string numer;
vector <double> liczby;
cout<<"Podaj ciag liczb oddzielonych spacjami. Calosc potwierdz enterem. UWAGA! Liczby calkowite jak \"5\" podawaj w formacie \"5.0\"."<<endl;

//ponizszy fragment kodu wczytuje z konsoli liczby double oddzielone spacjami i zapisuje je do vector liczby
getline(cin,text);
string::iterator st;
for(st=text.begin();st!=text.end();st++){
    if(*st==' '){
        liczby.push_back(stod(numer));
        numer.clear();}
    else{numer.push_back(*st);}
}
liczby.push_back(stod(numer));

cout<<"Chcesz znormalizowac powyzszy ciag w przedziale od: ";
double a;
cin>>a;
cout<<"do: ";
double b;
cin>>b;
double inf=min(liczby);
double sup=max(liczby);

//normalizujemy
vector <double>::iterator it;
for(it=liczby.begin();it!=liczby.end();it++){
    *it=*it*(b-a)/(sup-inf);
    *it=*it-inf*(b-a)/(sup-inf)+a;
}
//i wypluwamy na konsole rezultat
cout<<"Znormalizowany ciag to: "<<endl;
for(it=liczby.begin();it!=liczby.end();it++){cout<<*it<<", ";}

int end;
cin>>end;
cout<<end;
return 0;
}