#include<iostream>
using namespace std;
int main(){
    long long q, a, b, n, s;
    cin >> q;
    while(q--){
        cin >> a >> b >> n >> s;
        int x = min((s / n) * n, a*n);
        if(s - x - b <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}