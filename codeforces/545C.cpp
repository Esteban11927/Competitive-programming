#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    int n, ans = 0;
    set<int> s;
    map<int, int> m;
    cin >> n;
    int p[n], l[n];
    for(int i = 0; i < n; i++){
        cin >> p[i] >> l[i];
        s.insert(p[i]);
        m[p[i]] = l[i];
    }
    for(int i = 0; i < n; i++){
        if(*s.lower_bound(p[i]-l[i]) == p[i]){
            s.insert(p[i]-l[i]);
            ans++;
//            cout << p[i] << ' ' << p[i]-l[i] << '\n';
        }
        else if(*s.upper_bound(p[i]) > p[i]+l[i] || s.upper_bound(p[i]) == s.end()){
            s.insert(p[i]+l[i]);
            ans++;
//            cout << p[i] << ' ' << p[i]+l[i] << '\n';
        }
    }
    cout << ans << '\n';
    return 0;
}