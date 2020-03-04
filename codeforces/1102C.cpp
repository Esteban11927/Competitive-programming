#include<iostream>
using namespace std;
int main(){
    int n, x, y, in, ans = 0, p = 1;
    cin >> n >> x >> y;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(p%2 && in <= x){
            ans++;
            p++;
        }
        else if(in <= x) p++;
    }
    if(x > y) cout << n << '\n';
    else cout << ans << '\n';
    return 0;
}