#include <iostream>
#include <vector>
#include <string>
using namespace std;
string pure(string word){// ta petelka bierze word i wywala pure_word bez znakow specjalnych, spacji i zamienia litery duze na male
int N=size(word);
string pure_word;
for(int i=0;i<N;i++){
    int value=word[i];
    if(value>64&&value<91){
        value=value+32;
        char letter=value;
        pure_word.push_back(letter);
    }
    else if(value>96&&value<123){
        pure_word.push_back(word[i]);
    }
}
return pure_word;}
bool palindrom(string word){
int marker=1;
int N=size(word);
for(int i=0;i<=N/2;i++){
    int a=word[i];
    int b=word[N-1-i];
    if(a!=b){marker=0;}
}
if(marker==0){return false;} 
else{return true;}   
}
int main() {

cout<<"Podaj kilka slow lub zdan. Kolejne zdania oddzielaj enterem. Jesli chcesz skonczyc wpisywanie wpisz \"koniec\" i zatwierdz."<<endl;

vector<string> lista;
string word;
int i=0;
while(true){
cout<<i+1<<". ";
getline(cin,word);
if(word=="koniec"){break;}
lista.push_back(word);
i++;
}
cout<<endl;
for(int i=0; i<lista.size();i++){
    if(palindrom(pure(lista[i]))==true){cout<<"\""<<lista[i]<<"\""<<" jest palindromem."<<endl;}
}
    
int end;
cin>>end;
cout<<end;
    return 0;
}