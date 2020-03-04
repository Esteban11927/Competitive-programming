#include<iostream>
using namespace std;
long long int mod = 1000000007;
int main(){
    long long int n, x, y, ans;
    cin >> x >> y >> n;
    if(n%6 == 1) cout << ((x%mod)+mod)%mod;
    else if(n%6 == 2) cout << (((y)%mod)+mod)%mod;
    else if(n%6 == 3) cout << (((y-x)%mod)+mod)%mod;
    else if(n%6 == 4) cout << (((-x)%mod)+mod)%mod;
    else if(n%6 == 5) cout << (((-y)%mod)+mod)%mod;
    else if(n%6 == 0) cout << (((-y+x)%mod)+mod)%mod;
    cout << '\n';
    return 0;
}