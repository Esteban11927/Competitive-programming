#include<iostream>
using namespace std;
int main(){
    int n, s, t, cont = 0, ans = 0;
    cin >> n;
    int d[n];
    for(int i = 0; i < n; i++) cin >> d[i];
    cin >> s >> t;
    s--; t--;
    if(s > t) swap(s, t);
    for(int i = s; i < t; i++) ans += d[i];
    for(int i = 0; i < s; i++) cont += d[i];
    for(int i = t; i < n; i++) cont += d[i];
    ans = min(ans, cont);
    cout << ans << '\n';
    return 0;
}