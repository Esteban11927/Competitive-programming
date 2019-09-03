#include<iostream>
using namespace std;
int main(){
    int n, ans = 0; cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s[1] == '+') ans++;
        else ans--;
    }
    cout << ans << '\n';
}