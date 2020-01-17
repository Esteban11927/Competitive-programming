#include<iostream>
using namespace std;
bool aux[11];
int main(){
    long long t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        long long int sum = 0, ans;
        for(long long int i = 1; i <= 10; i++) sum += (i*m)%10;
        ans = sum*(n/m/10);
        for(long long int i = (n/(m*10))*m*10; i <= n; i+=m){
            ans += i%10;
        }
        cout << ans << '\n';
    }
    return 0;
}