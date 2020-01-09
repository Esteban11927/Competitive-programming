#include<iostream>
using namespace std;
int main(){
    string s, t;
    int c = 0;
    cin >> s >> t;
    for(int i = 0; i < min(s.size(), t.size()); i++){
        if(s[s.size()-i-1] != t[t.size()-i-1]) break;
        c += 2;
    }
    cout << s.size()+t.size()-c << '\n';
    return 0;
}