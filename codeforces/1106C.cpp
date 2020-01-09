#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n, ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i = 0; i < n/2; i++){
        ans += (a[i]+a[n-i-1])*(a[i]+a[n-i-1]);
    }
    cout << ans << '\n';
    return 0;
}