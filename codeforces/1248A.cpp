#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, m, odd = 0, even = 0, in, ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> in;
            if(in % 2) odd++;
            else even++;
        }
        cin >> m;
        for(int i = 0; i < m; i++){
            cin >> in;
            ans += (in%2 == 0 ? even : odd);
        }
        cout << ans << '\n';
    }
    return 0;
}