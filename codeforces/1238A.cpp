#include<iostream>
using namespace std;
int main(){
    long long int x, y, t;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x-y == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}