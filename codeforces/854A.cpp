#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a < b) gcd(b, a);
    if(a%b == 0) return b;
    return gcd(b, a%b);
}

int main(){
    int n, a = -1, b = 1e9;
    cin >> n;
    for(int i = 1; i <= n-1; i++){
        if(i+(n-i) == n && i > a && i < b && i != n-i && gcd(i, n-i) == 1){
            a = i;
            b = n-i;
        }
    }
    cout << a << ' ' << b << '\n';
    return 0;
}