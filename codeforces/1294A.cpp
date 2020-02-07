#include<iostream>
using namespace std;
int main(){
    int t, a, b, c, n;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> n;
        if(a > b) swap(a, b);
        if(a > c) swap(a, c);
        if(b > c) swap(b, c);
        if(n-(c-a)-(c-b) >= 0 && (n-(c-a)-(c-b))%3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}