#include<iostream>
using namespace std;
int main(){
    int n, m, k, a, b;
    cin >> n >> m >> k;
    a = (2*m-1+k)/(2*m);
    b = (k - 2*(a-1)*m + 1)/2;
    cout << a << ' ' << b << ' ' << (k%2 == 1 ? 'L' : 'R') << '\n';
    return 0;
}