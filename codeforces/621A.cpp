#include<iostream>
using namespace std;
int main(){
    long long int n, x, shodd = 1e9, sumeven = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x%2 == 1) shodd = min(shodd, x);
        sumeven += x;
    }
    if(sumeven%2 == 1) cout << sumeven - shodd << '\n';
    else cout << sumeven << '\n';
    return 0;
}