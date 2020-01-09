#include<iostream>
using namespace std;
int aux[125];
int main(){
    int n, ans = 0;
    string s;
    cin >> n >> s;
    if(n > 26) cout << "-1\n";
    else{
        for(int i = 0; i < n; i++) aux[s[i]]++;
        for(int i = 'a'; i <= 'z'; i++){
            ans += max(0, aux[i]-1);
        }
        cout << ans << '\n';
    }
    return 0;
}