#include<iostream>
using namespace std;
int main(){
    string s;
    int n, d, cont = 0, ans = 0;
    cin >> n >> d;
    for(int i = 0; i < d; i++){
        cin >> s;
        bool flag = 0;
        for(int j = 0; j < n; j++){
            if(s[j] == '0') flag = 1;
        }
        if(flag) cont ++;
        else cont = 0;
        ans = max(cont, ans);
    }
    cout << ans << '\n';
    return 0;
}