#include<iostream>
using namespace std;
int main(){
    long long int n, l, r, i;
    cin >> n;
    while(n--){
        cin >> l >> r;
        for(i = 1; (l|i) <= r; i<<=1){
            l |= i;
        }
        cout << l << '\n';
    }
    return 0;
}