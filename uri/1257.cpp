#include<iostream>
using namespace std;
int main(){
    int q, n, ans;
    string s;
    cin >> q;
    while(q--){
        ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s;
            for(int j = 0; j < s.size(); j++){
                ans += s[j] - 'A'  +  i  + j;
            }
        }
        cout << ans << '\n';
    }
}