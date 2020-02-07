#include<iostream>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        long long int d[n], a = 1e9, b = 0;
        for(int i = 0; i < n; i++){
            cin >> d[i];
            a = min(a, d[i]);
            b = max(b, d[i]);
        }
        bool flag = true;
        for(int i = 0; i < n; i++){
            if((a*b)%d[i] == 0) continue;
            flag = false;
        }
        if(flag) cout << a*b << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}