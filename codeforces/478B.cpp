#include<iostream>
using namespace std;
int main(){
    long long int n, m;
    cin >> n >> m;
    long long a = ( m*(n/m - 1) + (n%m)*2 ) * (n/m) / 2;
    long long b = (n-m+1)*(n-m)/2;
    cout << a << ' ' << b << '\n';
    return 0;
}