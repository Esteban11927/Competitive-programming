#include<iostream>
using namespace std;
int main(){
    int n, a, ans = 0;
    cin >> n >> a;
    a--;
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    for(int i = 1; i < n; i++){
        if(a-i >= 0 && a+i < n){
            if(t[a-i] && t[a+i]) ans += 2;
        }
        else if(a+i < n) ans += t[a+i];
        else if(a-i >= 0)ans += t[a-i];
    }
    cout << ans+t[a] << '\n';
    return 0;
}