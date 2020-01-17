#include<iostream>
using namespace std;
long long int a[5], b[5];
int main(){
    long long int n, m, ans = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        a[i%5]++;
    }
    for(int i = 1; i <= m; i++){
        b[i%5]++;
    }
    ans = a[0]*b[0];
    for(int i = 1; i < 5; i++){
        ans += a[i]*b[5-i];
    }
    cout << ans << '\n';
    return 0;
}