#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
string argumenty;
cout<<"Podaj argumenty: "<<endl<<endl;
getline(cin, argumenty);
vector <string> wyrazy;
int j=0;
string tymcz;
for(int i=0;i<size(argumenty);i++){
if(argumenty[i]==' '){
    wyrazy.push_back(tymcz);//jesli mamy spacje to pomijamy to znaczy ze poprzedni wyraz sie skonczyl, wiec dodajemy go do listu
    tymcz="";
continue;}
else{tymcz.push_back(argumenty[i]);}
}
wyrazy.push_back(tymcz);

if(wyrazy[0]=="add"){
    double add=0;
    for(int i=1;i<wyrazy.size();i++){
    add+=stod(wyrazy[i]);}
    cout<<"Suma podanych argumentow to "<< add;
}
if(wyrazy[0]=="multiply"){
    double multiply=1;
    for(int i=1;i<wyrazy.size();i++){
    multiply*=stod(wyrazy[i]);}
    cout<<"Iloczyn podanych argumentow to "<< multiply;//program nie jest idiotproof bo mi sie nie chce
}

int end;
cin>>end;
cout<<end;
return 0;
}
