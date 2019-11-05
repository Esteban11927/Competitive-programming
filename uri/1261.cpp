#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, m, x;
    string s;
    map<string, int> diccionario;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s >> x;
        diccionario[s] = x;
    }
    int cont = 0;
    while(cin >> s){
        if(s == "."){
            cout << cont << '\n';
            cont = 0;
        }
        cont += diccionario[s];
    }
    return 0;
}