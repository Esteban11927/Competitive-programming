#include<iostream>
using namespace std;

int gcd(int n, int m){
    while(n % m != 0){
        int x = n%m;
        n = m;
        m = x;
    }
    return m;
}

int main(){
    int q, n, m;
    cin >> q;
    while(q--){
        cin >> n >> m;
        cout << gcd(max(n, m), min(n, m)) << '\n';
    }
    return 0;
}