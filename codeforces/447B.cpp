#include<iostream>
using namespace std;
int main(){
    string s;
    int k, r = 0, w[26], ans = 0;
    cin >> s >> k;
    for(int i = 0; i < 26; i++){
        cin >> w[i];
        r = max(r, w[i]);
    }
    for(int i = 0; i < s.size(); i++){
        ans += w[s[i]-'a']*(i+1);
    }
    for(int i = 1; i <= k; i++){
        ans += r*(i+s.size());
    }
    cout << ans << '\n';
    return 0;
}