#include<iostream>
#include<set>
using namespace std;
int main(){
    int t, in, x, n, ans;
    set<int> s;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x;
            s.insert(x);
        }
        while(s.empty() == false){
            x = *s.rbegin();
            s.erase(x);
            if(x%2 == 0){
                s.insert(x/2);
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}