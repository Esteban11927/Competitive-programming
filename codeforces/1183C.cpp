#include<iostream>
using namespace std;
int main(){
    long long int q, k, n, a, b;
    cin >> q;
    while(q--){
        cin >> k >> n >> a >> b;
        k--;
        long long int l = 0, r = n, mid;
        while(r-l > 1){
            mid = (l+r)/2;
            if(a*mid + b*(n-mid) <= k) l = mid;
            else r = mid;
        }
        if(a*r + b*(n-r) <= k) cout << r << '\n';
        else if(a*l + b*(n-l) <= k) cout << l << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}