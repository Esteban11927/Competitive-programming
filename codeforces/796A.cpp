#include<iostream>
using namespace std;
int main(){
    int n, m, k, ans = 1e9, x;
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x != 0 && x <= k){
            ans = min(ans, abs(m-i));
        }
    }
    cout << ans*10 << '\n';
    return 0;
}