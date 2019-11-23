#include<iostream>
using namespace std;
int main(){
    string s;
    int cont = 0, ans = true;
    cin >> s;
    if(s[0] != '1') ans = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') cont = 0;
        if(s[i] == '4') cont++;
        if(cont >= 3 || (s[i] != '1' && s[i] != '4')) ans = false;
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}