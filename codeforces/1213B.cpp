#include<iostream>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int a[n], mi = n-1, ans = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = n-1; i >= 0; i--){
            if(a[i] > a[mi]) ans++;
            else mi = i;
        }
        cout << ans << '\n';
    }
    return 0;
}