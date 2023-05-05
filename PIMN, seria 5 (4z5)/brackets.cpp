#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;
string tobinary(int n){//ta funkcja zwraca liczbe w zapisie dziesietnym, zapis liczby zawsze zaczyna sie od 1
    int m=0;
    while(pow(2,m)<=n){m++;}
    m--;
    string binary;
    for(int i=m;i>=0;i--){
        if(n-pow(2,i)>=0){
            n-=pow(2,i);
            binary.push_back('1');
        }
        else{binary.push_back('0');}
    }
    return binary;
}
char przeciwny(char znak){
    if(znak==')'){return '(';}
    if(znak=='}'){return '{';}
    if(znak==']'){return '[';}
    else{return '0';}
}
bool check(string zdanie){
string nawiasy;
    int N=size(zdanie);
    for(int i=0;i<N;i++){//ta petla ze zdanie tworzy nawiasy z... well, samymi nawiasami
        char a=zdanie[i];
        if(a==')'||a=='('||a==']'||a=='['||a=='}'||a=='{'){
            nawiasy.push_back(a);
        }
    }
    int n=size(nawiasy);
    string less;
    for(int j=0; j<n;j++){//nastepna petle wystarczy wykonac n razy
        for(int i=0; i<n;i++){//ta petla usuwa z less sasiadujace identyczne nawiasy
            if(nawiasy[i]==0){break;}
            else if(nawiasy[i]==przeciwny(nawiasy[i+1])){i++;}
            else{less.push_back(nawiasy[i]);}
        }
        nawiasy=less;
        less.clear();
    }
    if(nawiasy.empty()){return true;}
    else{return false;}
}
int main()
{
start:

cout<<"Wpisz \"check\", by sprawdzic, czy nawiasy w twoim zdaniu sa poprawnie zbalansowane."<<endl;
cout<<"Wpisz \"fix\", by dowiedziec sie, ile wystarczy dopisac wyrazow do danego ciagu wyrazow okraglych, by byl to ciag zbalansowany."<<endl;
cout<<"Wpisz \"list\", by wypisac wszystkie zbalansowane ciagi wyrazow okraglych."<<endl;
string command;
cin>>command;
if(command=="check"){
    cout<< "\nWprowadz zdanie, w ktorym chcesz sprawdzic nawiasy: ";
    string zdanie;
    cin.ignore();
    getline(cin,zdanie);
    if(check(zdanie)){cout<<"Nawiasy sa zbalansowane."<<endl<<endl;}
    else{cout<<"Nawiasy nie sa zbalansowane."<<endl<<endl;}
}
else if(command=="fix"){}
else if(command=="list"){
    cout<<"Podaj ile par nawiasow maja miec ciagi: ";
    int n;
    cin>>n;
    int m=(pow(2,2*n));
    cout<<endl;
    for(int i=0;i<m;i++){
        string a=tobinary(i);
        int r=a.size();
        string b;
        for(int i=0;i<2*n-r;i++){
        b.push_back('0');}
        b=b+a;
        string bra;
        for(int i=0;i<2*n;i++){
            if(b[i]=='1'){bra.push_back(')');}
            else if(b[i]=='0'){bra.push_back('(');}
        }
        if(check(bra)){cout<<bra<<endl;}
    }
}
else{cout<<endl<<"Nieznana komenda."<<endl;
goto start;}

int end;
cin>>end;
cout<<end;
return 0;
}
