#include<iostream>
using namespace std;
int main(){
    int n, k, ans = 0, cont;
    cin >> n >> k;
    string s[n];
    for(string &c : s) cin >> c;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int l = j+1; l < n; l++){
                cont = 0;
                for(int m = 0; m < k; m++){
                    if((s[i][m] != s[j][m] && s[i][m] != s[l][m] && s[j][m] != s[l][m]) || (s[i][m] == s[j][m] && s[i][m] == s[l][m] && s[j][m] == s[l][m])) cont++;
                    if(cont == k) ans++;
                }
            }
        }
    }
    cout << ans << '\n';
    return 0;
}