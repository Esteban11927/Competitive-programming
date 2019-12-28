#include<iostream>
using namespace std;
int main(){
    int t, a, b, c, ans = 0;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        ans += min(b, c/2) * 3;
        b -= ans/3;
        ans += min(a, b/2) * 3;
        cout << ans << '\n';
        ans = 0;
    }
    return 0;
}