#include<iostream>
using namespace std;
int main(){
    int q, n, x, sum;
    cin >> q;
    while(q--){
        sum = 0;
        cin >> n;
        while(n--){
            cin >> x;
            if(x <= 2048) sum += x;
        }
        if(sum >= 2048) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}