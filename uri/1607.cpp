#include<iostream>
using namespace std;
int main(){
    int n, ans;
    string s, t;
    cin >> n;
    while(n--){
        ans = 0;
        cin >> s >> t;
        for(int i = 0; i < s.size(); i++){
            if(t[i] < s[i]) ans += 'z' - s[i] + t[i] - 'a' + 1;
            if(t[i] > s[i]) ans += t[i] - s[i];
        }
        cout << ans << '\n';
    }
    return 0;
}