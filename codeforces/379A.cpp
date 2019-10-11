#include<iostream>
using namespace std;
int main(){
    int a, b, ans = 0, extra = 0;
    cin >> a >> b;
    while((a || extra) && a >= b){
        while(a%b){
            a--;
            extra++;
        }
        ans += a;
        a /= b;
        a += extra;
        extra = 0;
    }
    ans += a;
    cout << ans << '\n';
    return 0;
}