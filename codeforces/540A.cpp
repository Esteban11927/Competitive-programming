#include<iostream>
using namespace std;
int main(){
    int n, ans = 0, x, y;
    string s, ss;
    cin >> n >> s >> ss;
    for(int i = 0; i < n; i++){
        x = s[i] - '0';
        y = ss[i] - '0';
        ans += min(max(x, y)-min(x,y), abs(max(x,y) - (min(x,y)+10)));
    }
    cout << ans << '\n';
    return 0;
}