#include<iostream>
using namespace std;
int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    cout << 2*c + min(a, b)*2 + (a > b || b > a ? 1 : 0) << '\n';
    return 0;
}