#include<iostream>
using namespace std;
int main(){
    long long q, a, b, n, s;
    cin >> q;
    while(q--){
        cin >> a >> b >> n >> s;
        if(s- min((s/n), a) * n - b <= 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}