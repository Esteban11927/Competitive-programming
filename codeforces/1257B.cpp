#include<iostream>
using namespace std;
int main(){
    long long int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(((x == 3 || x == 2) && y > 3) || (x == 1 && y != 1)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}