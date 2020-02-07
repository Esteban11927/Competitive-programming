#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n, g, ans = 0;
    cin >> n;
    long  long int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    g = a[0];
    for(int i = 1; i < n; i++) g = __gcd(g, a[i]);
    for(long long int i = 1; i*i <= g; i++){
        if(g%i == 0){
            if(g/i == i) ans++;
            else ans += 2;
        }
    }
    cout << ans << '\n';
    return 0;
}