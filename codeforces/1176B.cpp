#include<iostream>
using namespace std;
int ans[3];
int main(){
    int q, n, a;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            ans[a%3]++;
            if(ans[1] && ans[2]){
                ans[0]++;
                ans[1]--;
                ans[2]--;
            }
        }
        cout << ans[0] + ans[1]/3 + ans[2]/3 << '\n';
        ans[0] = 0;
        ans[1] = 0;
        ans[2] = 0;
    }
}