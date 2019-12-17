#include<iostream>
using namespace std;
int main(){
    unsigned long long n, k, ans = 0, candie = 1;
    cin >> n >> k;
    if(k == 1) cout << n << '\n';
    else{
        while(candie <= n) candie <<= 1;
        cout << candie-1 << '\n';
    }
    return 0;
}