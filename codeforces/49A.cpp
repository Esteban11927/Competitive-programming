#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    char c;
    for(int i = 0; i < s.size()-1; i++){
        if((s[i+1] == '?' || s[i+1] == ' ') && s[i] != ' ') c = s[i];
    }
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'i' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'y' || c == 'Y') cout << "YES\n";
    else cout << "NO\n";
    return 0;
}