#include<iostream>
using namespace std;

bool is_vowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u' || c == 'n');
}

int main(){
    string s;
    cin >> s;
    bool flag = true;
    for(int i = 0; i <s.size()-1; i++){
        if((is_vowel(s[i]) == false && is_vowel(s[i+1]) == true && s[i+1] != 'n') || is_vowel(s[i]) == true) continue;
        flag = false;
    }
    if(is_vowel(s[s.size()-1]) && flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}