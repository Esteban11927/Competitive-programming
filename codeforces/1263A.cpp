#include<iostream>
using namespace std;
int main(){
    int a, b, c, x, ans, n;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a < b) swap(a, b);
        if(a < c) swap(a, c);
        if(b < c) swap(b, c);
        if(a >= b+c){
            cout << min(a, b+c) << '\n';
        }
        else{
            x = a-b;
            a -= x;
            c -= x;
            ans = x;
            x = b - c;
            ans += x;
            a -= x;
            b -= x;
            cout << ans + (a+b+c)/2 << '\n';
        }
    }
    return 0;
}