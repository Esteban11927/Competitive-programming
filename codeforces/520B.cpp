#include<iostream>
using namespace std;
int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    if(n > m){
        cout << abs(n-m) << '\n';
        return 0;
    }
    while(m > n){
        if(m%2 != 0){
            m++;
            ans++;
        }
        m /= 2;
        ans++;
    }
    while(m < n){
        m++;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}