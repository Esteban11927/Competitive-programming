#include<iostream>
#include<string.h>
using namespace std;
int cont[26];
string s;

void count(int l){
    for(int i = l; i < l+26; i++){
        if(s[i] != '?') cont[s[i]-'A']++;
    }
}

bool valid(){
    for(int i = 0; i < 26; i++){
        if(cont[i] >= 2) return false;
    }
    return true;
}

void fill(int pos){
    int current = 0;
    for(int i = pos; i < pos+26; i++){
        if(s[i] == '?'){
            while(cont[current] > 0) current++;
            s[i] = (char)(current + 'A');
            current++;
        }
    }
}

int main(){
    cin >> s;
    if(s.size() < 26){cout << -1 << '\n'; return 0;}
    for(int i = 0; i <= s.size()-26; i++){
        memset(cont, 0, sizeof(cont));
        count(i);
        if(valid()){
            fill(i);
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '?') cout << 'A';
                else cout << s[i];
            }
            cout << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}