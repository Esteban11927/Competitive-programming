#include<iostream>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int main(){
    int q, a, b;
    cin >> q;
    while(q--){
        cin >> a >> b;
        if(gcd(max(a, b), min(a, b)) == 1) cout << "Finite\n";
        else cout << "Infinite\n";
    }
    return 0;
}