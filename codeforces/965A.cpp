#include<iostream>
using namespace std;
int main(){
    int n, k, s, p, a = 0, b = 0;
    cin >> k >> n >> s >> p;
    while(a*s < n) a++;
    a *= k;
    while(b*p < a) b++;
    cout << b << '\n';
    return 0;
}