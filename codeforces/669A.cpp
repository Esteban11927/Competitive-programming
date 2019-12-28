#include<iostream>
using namespace std;
int main(){
    int n, ans = 0; 
    while(cin >> n){
        ans = (n/3)*2;
        n -= (ans * 3)/2;
        if(n) ans++;
        cout << ans << '\n';
    }
    return 0;
}