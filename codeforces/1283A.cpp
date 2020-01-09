#include<iostream>
using namespace std;
int main(){
    int q, h, m, ans = 0, AUX;
    cin >> q;
    while(q--){
        cin >> h >> m;
        ans = 0;
        while(h != 24 || m != 0){
            ans++;
            h += (m == 59 ? 1 : 0);
            m += (m == 59 ? -59 : 1);
            //cout << h << ' ' << m << '\n';
            //cin >> AUX;
        }
        cout << ans << '\n';
    }
    return 0;
}