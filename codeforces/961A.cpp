#include<iostream>
using namespace std;
int main(){
    int n, m, c, ans = 1e9;
    cin >> n >> m;
    int arr[n+1];
    for(int i = 0; i <= n; i++)arr[i]=0;
    for(int i = 0; i < m; i++){
        cin >> c;
        arr[c]++;
    }
    for(int i = 1; i <= n; i++) ans = min(ans, arr[i]);
    cout << ans << '\n';
    return 0;
}