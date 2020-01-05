#include<iostream>
using namespace std;
int main(){
    int n, a, b, ans = 0;
    cin >> n;
    int d[n];
    for(int i = 0; i < n-1; i++) cin >> d[i];
    cin >> a >> b;
    for(int i = a-1; i < b-1; i++) ans += d[i];
    cout << ans << '\n';
    return 0;
}