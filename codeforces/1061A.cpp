#include<iostream>
using namespace std;
int main(){
    int n, s, ans = 0;
    cin >> n >> s;
    while(s){
        ans += s/n;
        s -= (s/n)*n;
        n--;
    }
    cout << ans << '\n';
    return 0;
}