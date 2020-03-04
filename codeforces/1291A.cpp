#include<iostream>
using namespace std;
int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        string ans;
        int cont = 0;
        for(int i = 0; i < n; i++){
            if((s[i]-'0')%2){
                if(cont < 2) ans += s[i];
                cont++;
            }
        }
        if(cont == 0 || ans.size() < 2) cout << -1 << '\n';
        else cout << ans << '\n';

    }
    return 0;
}