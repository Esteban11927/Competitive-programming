#include<iostream>
using namespace std;
int main(){
    long long int q, x, sum;
    cin >> q;
    while(q--){
        sum = 0;
        cin >> x; sum += x;
        cin >> x; sum += x;
        cin >> x; sum += x;
        cout << (sum - (sum%2)) / 2 << '\n';
    }
    return 0;
}