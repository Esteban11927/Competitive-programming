#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        bool ans = true;
        cin >> n;
        int a[n], b[n], c[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int temp, l = -1, r = -1;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            c[i] = a[i] - b[i];
            if(c[i] != 0 && l == -1) l = i;
            else if(l != -1 && c[l] != c[i] && r == -1) r = i;
            if(c[i] > 0) ans = false;
        }
        if(r == -1) r = n;
        for(int i = l; i < n; i++){
            if(l <= i && i < r) continue;
            if(a[i] != b[i]) ans = false;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}