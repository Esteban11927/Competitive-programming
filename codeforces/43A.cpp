#include<iostream>
#include<map>
using namespace std;
int main(){
    string s, ss, x;
    int n;
    map<string, int> mapa;
    cin >> n;
    cin >> s;
    mapa[s]++;
    for(int i = 1; i < n; i++){
        cin >> x;
        if(x != s){
            ss = x;
        }
        mapa[x]++;
    }
    if(mapa[s] > mapa[ss]) cout << s << '\n';
    else cout << ss << '\n';
    return 0;
}