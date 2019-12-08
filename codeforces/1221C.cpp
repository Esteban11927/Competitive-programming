#include<iostream>
using namespace std;

int main(){
    int q, c, m, x, ans = 0;
    cin >> q;
    while(q--){
        cin >> c >> m >> x;
        ans = min(m, c);
        cout << min(ans, (m+c+x)/3) << '\n';
    }
}