#include<iostream>
using namespace std;
int main(){
    int n, k, ans = 0, cont = 0;
    string s;
    cin >> n >> k;
    while(n--){
        cin >> s;
        for(int i = 0; i < s.size(); i++) if(s[i] == '4' || s[i] == '7') cont++;
        if(cont <= k) ans++;
        cont = 0;
    }
    cout << ans << '\n';
    return 0;
}