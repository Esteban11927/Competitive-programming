#include<iostream>
using namespace std;
int main(){
    int t, a, b, c, r;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> r;
        if(a > b) swap(a, b);
        cout << (b-a)-max(0, min(b, c+r)-max(a, c-r)) << '\n';
    }
    return 0;
}