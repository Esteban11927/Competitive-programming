#include<iostream>
using namespace std;

int main(){
    int n, ans = 0;
    string s, a = "RGB", b = "RBG", sans, op[6];
    cin >> n >> s;
    for(int i = 1; i < n-1; i++){
        if(s[i-1] == s[i] && s[i] == s[i+1]){
            ans++;
            if(s[i] == 'R') s[i] = 'G';
            else if(s[i] == 'G') s[i] = 'B';
            else if(s[i] == 'B') s[i] = 'R';
        }
    }
    for(int i = 1; i < n-1; i++){
        if(s[i] == s[i-1]){
            ans++;
            for(int j = 0; j < 3; j++){
                if(a[j] != s[i-1] && a[j] != s[i+1]) s[i] = a[j];
            }
        }
    }
    if(s[n-1] == s[n-2]){
        ans++;
        if(s[n-1] != a[0]) s[n-1] = a[0];
        else if(s[n-1] != a[1]) s[n-1] = a[1];
        else if(s[n-1] != a[2]) s[n-1] = a[2];
    }
    cout << ans << '\n' << s << '\n';
    return 0;
}