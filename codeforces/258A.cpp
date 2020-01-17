#include<iostream>
using namespace std;
int main(){
    string s;
    int cont = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0') cont++;
    }
    if(cont){
        cont = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' && cont == 0) cont++;
            else cout << s[i];
        }
    }
    else{
        for(int i = 0; i < s.size()-1; i++) cout << s[i];
    }
    cout << '\n';
    return 0;
}