#include<iostream>
using namespace std;
int main(){
    int t, n, i;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        for(i = 0; i < n; i++){
            if(s[i] == '8' && n-i >= 11){
                cout << "YES\n";
                break;
            }
        }
        if(i == n) cout << "NO\n";
    }
    return 0;
}