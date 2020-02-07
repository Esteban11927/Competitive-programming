#include<iostream>
using namespace std;
int main(){
    string s, t;
    int ans = 0;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            int aux = 0;
            for(int p = 0; p < s.size(); p++){
                if(i <= p && p <= j) continue;
                if(s[p] == t[aux]) aux++;
            }
            if(aux == t.size()) ans = max(ans, j-i+1);
        }
    }
    cout << ans << '\n';
    return 0;
}