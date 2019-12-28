#include<iostream>
using namespace std;
int main(){
    long long int q, n, a, b;
    cin >> q;
    while(q--){
        cin >> n >> a >> b;
        cout << min(n*a, (n/2)*b + (n%2)*a) << '\n';
    }
    return 0;
}