#include<iostream>
using namespace std;
int main(){
    int n, h, m, l, r, x, ans = 0;
    cin >> n >> h >> m;
    int arr[n+1];
    for(int i = 0; i <= n; i++) arr[i] = 1e9;
    for(int i = 0; i < m; i++){
        cin >> l >> r >> x;
        for(int j = l; j <= r; j++) arr[j] = min(arr[j], x);
    }
    for(int i = 1; i <= n; i++) arr[i] = min(h, arr[i]);
    for(int i = 1; i <= n; i++) ans += arr[i]*arr[i];
    cout << ans << '\n';
    return 0;
}