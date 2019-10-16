#include<iostream>
using namespace std;
int main(){
    string lowercase = "nopqrstuvwxyzabcdefghijklm";
    string uppercase = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    string s;
    while(getline(cin,s)){
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] && s[i] <= 'z') cout << lowercase[s[i] - 'a'];
            else if('A' <= s[i] && s[i] <= 'Z') cout << uppercase[s[i] - 'A'];
            else cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}