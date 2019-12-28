#include<iostream>
using namespace std;
int main(){
    int n, sum = 0, ans = 0;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++) if(cin >> c && c == '8') sum++;
    while(sum){
        n -= 11;
        sum--;
        if(n >= 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}