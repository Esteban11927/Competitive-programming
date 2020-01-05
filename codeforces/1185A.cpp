#include<iostream>
using namespace std;
int main(){
    int a, b, c, d, ans = 0;
    cin >> a >> b >> c >> d;
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    a -= b;
    c -= b;
    cout << (a > d*-1 ? abs(d*-1 - a) : 0) + (c < d ? d-c : 0) << '\n';
    return 0;
}