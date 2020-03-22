#include<iostream>
using namespace std;
int ans[1000];
int main(){
    int n, m, x;
    cin >> n >> m;
    while(m--){
        cin >> x;
        for(int i = x; i <= n; i++) ans[i] = (ans[i] == 0 ? x : ans[i]);
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}