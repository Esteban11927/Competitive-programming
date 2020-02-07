#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b){
    if(a < b) return gcd(b, a);
    if(b == 0) return a;
    if(a%b != 0) return gcd(b, a%b);
    return b;
}

int main(){
    long long int n, ma = 0, y, z, sum = 0;
    cin >> n;
    long long int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ma = max(ma, a[i]);
        sum += a[i];
    }
    z = ma - a[0];
    for(int i = 1; i < n; i++){
        z = gcd(z, ma-a[i]);
    }
    y = (ma*n-sum)/z;
    cout << y << ' ' << z << '\n';
    return 0;
}