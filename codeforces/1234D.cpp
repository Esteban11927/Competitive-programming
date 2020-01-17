#include<iostream>
#include<set>
using namespace std;
set<int> se[26];
int main(){
    string s;
    int q, l, r, t;
    char c;
    cin >> s >> q;
    for(int i = 0; i < s.size(); i++){
        se[s[i]-'a'].insert(i+1);
    }
    while(q--){
        cin >> t;
        if(t == 1){
            cin >> l >> c;
            se[s[l-1]-'a'].erase(l);
            se[c-'a'].insert(l);
            s[l-1] = c;
        }
        else{
            int cnt = 0;
            cin >> l >> r;
            for(int i = 0; i < 26; i++){
                if(l <= *se[i].lower_bound(l) && *se[i].lower_bound(l) <= r) cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}