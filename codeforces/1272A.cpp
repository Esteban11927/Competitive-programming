#include<iostream>
using namespace std;
int main(){
    int q, a, b, c;
    cin >> q;
    while(q--){
        cin >> a >> b >> c;
        cout << max(0, abs(a-b)+abs(a-c)+abs(b-c) - 4) << '\n';
    }
    return 0;
}