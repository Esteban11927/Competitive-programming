#include<iostream>
using namespace std;
int main(){
    int n, a = 0, b = 0, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i += 2){
        if(s[i] == s[i+1]){
            ans++;
            if(s[i] == 'a') s[i] = 'b';
            else s[i] = 'a';
        }
    }
    cout << ans << '\n';
    for(char &c : s) cout << c;
    cout << '\n';
    return 0;
}