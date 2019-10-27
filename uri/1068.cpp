#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        int abre = 0, cierra = 0;
        bool foundans = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(') abre++;
            if(s[i] == ')') abre--;
            if(abre < 0) break;
        }
        if(abre == 0) cout << "correct\n";
        else cout << "incorrect\n";
    }
    return 0;
}