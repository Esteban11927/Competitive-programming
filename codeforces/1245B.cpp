#include<iostream>
using namespace std;
int t, n, a, b, c, cont;
string s;
int main(){
    cin >> t;
    while(t--){
        cont = 0;
        cin >> n;
        cin >> a >> b >> c;
        cin >> s;
        char ans[n];
        for(int i = 0; i < n; i++) ans[i] = '.';
        for(int i = 0; i < n; i++){
            if(s[i] == 'R' && b > 0){
                b--;
                ans[i] = 'P';
            }
            if(s[i] == 'P' && c > 0){
                c--;
                ans[i] = 'S';
            }
            if(s[i] == 'S' && a > 0){
                a--;
                ans[i] = 'R';
            }
        }
        for(int i = 0; i < n; i++){
            if(ans[i] == '.' && a){
                a--;
                ans[i] = 'R';
            }
            else if(ans[i] == '.' && b){
                b--;
                ans[i] = 'P';
            }
            else if(ans[i] == '.' && c){
                c--;
                ans[i] = 'S';
            }
        }
        for(int i = 0; i < n; i++){
            if((s[i] == 'R' && ans[i] == 'P') || (s[i] == 'P' && ans[i] == 'S') || (s[i] == 'S' && ans[i] == 'R')) cont++;
        }
        if(cont >= (n+1)/2){
            cout << "YES\n";
            for(int i = 0; i < n; i++) cout << ans[i];
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;   
}