#include<iostream>
using namespace std;
int main(){
    int n, a, b, c, ans = 0, in;
    cin >> a >> b >> c >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(b < in && in < c) ans++;
    }
    cout << ans << '\n';
    return 0;
}