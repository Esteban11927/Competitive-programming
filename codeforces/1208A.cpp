#include<iostream>
using namespace std;
int t, a, b;
int main(){
    int n;
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        int x = a^b;
        if(n%3 == 0) cout << a << '\n';
        else if((n-1) % 3 == 0) cout << b << '\n';
        else cout << x << '\n';
    }
    return 0;
}