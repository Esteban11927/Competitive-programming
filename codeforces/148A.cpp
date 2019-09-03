#include<iostream>
using namespace std;
int main(){
    int k, l, m, n, d, ans = 0;
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++){
        if( !(i%k) || !(i%l) || !(i%m) || !(i%n) ) ans++;
    }
    cout << ans << '\n';
    return 0;
}