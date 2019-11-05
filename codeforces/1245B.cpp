#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t, n, a, b, c, aa, bb, cc, aux;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> a >> b >> c;
        cin >> s;
        int alice = 0;
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'R'){
                if(b){
                    b--;
                    alice++;
                    ans += "P";
                }
                else if(a){
                    a--;
                }
                else{
                    c--;
                }
            }
            if(s[i] == 'P'){
                if(c){
                    c--;
                    alice++;
                    ans += "S";
                }
                else if(b){
                    b--;
                }
                else{
                    a--;
                }
            }
            if(s[i] == 'S'){
                if(a){
                    a--;
                    alice++;
                    ans += "R";
                }
                else if(c){
                    c--;
                }
                else{
                    b--;
                }
            }
        }
        if(alice >= ceil(1.0*n/2)) cout << "YES\n" << ans << '\n';
        else cout << "NO\n";
    }
    return 0;   
}