#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s, t, u;
    cin >> s >> t >> u;
    s = s+t;
    sort(s.begin(), s.end());
    sort(u.begin(), u.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == u[i]) continue;
        cout << "NO\n";
        return 0;
    }
    if(s.size() == u.size()) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}