#include<iostream>
using namespace std;
int main(){
    int n, k, t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << min(n, (n/k)*k + k/2) << '\n';
    }
    return 0;
}