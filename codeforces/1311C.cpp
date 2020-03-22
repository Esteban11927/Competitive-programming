#include<iostream>
#include<map>
using namespace std;
int main(){
    int t, n, m;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        int p[m];
        for(int i = 0; i < m; i++) cin >> p[i];
        map<char, int> ans;
        int aux[26][n];
        for(int i = 0; i < 26; i++)
            for(int j = 0; j < n; j++) aux[i][j] = 0;
        for(int i = 0; i < 26; i++)
            ans[i+'a'] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 26; j++){
                if(s[i] == (char)(j+'a')) aux[j][i] = 1;
                if(i > 0) aux[j][i] += aux[j][i-1];
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < 26; j++){
                ans[j+'a'] += aux[j][p[i]-1];
            }
        }
        for(char i = 'a'; i <= 'z'; i++){
            cout << ans[i] + aux[(int)(i-'a')][n-1] << ' ';
        }
        cout << '\n';
    }
    return 0;
}