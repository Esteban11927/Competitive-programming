#include<iostream>
using namespace std;
int main(){
    int l, r, a, x;
    cin >> l >> r >> a;
    x = abs(l-r);
    if(l < r) l += min(a, x);
    if(r < l) r += min(a, x);
    a -= min(a, x);
    //cout << l << ' ' << r << ' ' << a << '\n';
    cout << min(l, r)*2 + (a/2)*2 << '\n';
    return 0;
}