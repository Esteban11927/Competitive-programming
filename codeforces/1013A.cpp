#include<iostream>
using namespace std;
int main(){
    int n, x, a = 0, b = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        a += x;
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        b += x;
    }
    if(b <= a) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}