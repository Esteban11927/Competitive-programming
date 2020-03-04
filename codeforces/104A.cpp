#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    n -= 10;
    if(2 <= n && n <= 9) cout << 4 << '\n';
    else if(n == 10) cout << 15 << '\n';
    else if(n == 11 || n == 1) cout << 4 << '\n';
    else cout << 0 << '\n';
    return 0;
}