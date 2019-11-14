#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, m;
    string s, ss;
    map<string, string> mapa;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> s >> ss;
        mapa[s] = ss;
    }
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s.size() <= mapa[s].size()) cout << s << ' ';
        else cout << mapa[s] << ' ';
    }
    cout << '\n';
    return 0;
}