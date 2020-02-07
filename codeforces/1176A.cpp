#include<iostream>
using namespace std;

long long int cal(long long int n){
    if(n%2 == 0 && n > 1) return 1 + cal(n/2);
    if(n%3 == 0 && n > 1) return 1 + cal((2*n)/3);
    if(n%5 == 0 && n > 1) return 1 + cal((4*n)/5);
    if(n == 1) return 0;
    if(n%2 != 0 && n%3 != 0 && n%5 != 0) return -1000000;
}

int main(){
    long long int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        cout << max(1ll*-1, cal(n)) << '\n';
    }
    return 0;
}