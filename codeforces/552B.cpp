#include<iostream>
using namespace std;
int main(){
    long long n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i *= 10){
        ans += n - i + 1;
    }
    cout << ans << '\n';
    return 0;
}