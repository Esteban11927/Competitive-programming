#include<iostream>
using namespace std;
int main(){
    int t, n, ans, x;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> x;
            if(j == n/2) ans = x;
        }
        cout << "Case " << i+1 << ": " << ans << '\n';
    }
    return 0;
}