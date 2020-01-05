#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        sort(s.begin(), s.end());
        if(s[0] != s[s.size()-1]) cout << s << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}