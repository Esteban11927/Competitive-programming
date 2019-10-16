#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    vector<int> f, s, t;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x == 1){
            f.emplace_back(i);
        }
        else if(x == 2){
            s.emplace_back(i);
        }
        else t.emplace_back(i);
    }
    x = min(f.size(), min(s.size(), t.size()));
    cout << x << '\n';
    for(int i = 0; i < x; i++){
        cout << f[i] << ' ' << s[i] << ' ' << t[i] << '\n';
    }
    return 0;
}