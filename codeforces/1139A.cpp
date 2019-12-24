#include<iostream>
using namespace std;
int main(){
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if( ((int)(s[i]-'0'))%2 == 0 ){
            ans += i+1;
        }
    }
    cout << ans << '\n';
    return 0;
}