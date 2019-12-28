#include<iostream>
using namespace std;
int main(){
    long long  n, k, t;
    cin >> n >> k >> t;
    if(t < k) cout << t << '\n';
    else if(k <= t && t < n) cout << t - abs(k-t) << '\n';
    else cout << n + k - t << '\n';
    return 0;
}