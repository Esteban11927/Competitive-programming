#include<iostream>
using namespace std;
int main(){
    int n, k, x, ans = 0;
    cin >> n >> k;
    k = 5 - k;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x <= k) ans++;
    }
    cout << ans/3 << '\n';
}