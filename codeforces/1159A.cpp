#include<iostream>
using namespace std;
int main(){
    int n, ans = 0, aux = 0;
    string s;
    cin >> n >> s;
    for(char &c : s){
        if(c == '+') ans++;
        else ans--;
        ans = max(ans, 0);
    }
    cout << ans << '\n';
    return 0;
}