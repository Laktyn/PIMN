#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
cout<<"Podaj jakie przesuniecie w szyfrze Cezara zastosowac:"<<endl;
int m;
cin>>m;
int n=m%24;//ustalamy przesuniecie i zapewniamy zeby mialo sens
cout<<"Podaj zdanie ktore chcesz zaszyfrowac:"<<endl;
string jawne;
string tajne;
cin.ignore();
getline(cin,jawne);
int N=size(jawne);
for(int i=0;i<N;i++){//sczytujemy znak po znaku i jesli to litera to przesuwamy
    int a=jawne[i];
    if(a>64&&a<91){//co jesli znak jest mala litera
        a=a+n;
        if(a>90){a=a-25;}
    }
    if(a>96&&a<123){//a co jesli duza litera
        a=a+n;
        if(a>122){a=a-25;}
    }
    char letter=a;
    tajne.push_back(letter);
}
cout<<"\nTekst, ktory wpisales, po zaszyfrowaniu wyglada nastepujaco:"<<endl<<endl;
cout<<tajne;
int end;
cin>>end;
cout<<end;
    return 0;
}