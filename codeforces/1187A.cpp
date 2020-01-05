#include<iostream>
using namespace std;
int main(){
    int x, n, s, t;
    cin >> x;
    while(x--){
        cin >> n >> s >> t;
        cout << max(n-s, n-t) +1 << '\n';
    }
    return 0;
}