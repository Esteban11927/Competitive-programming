#include<iostream>
using namespace std;
bool cnt[1000];
int main(){
    int n, p, ans = 0;
    cin >> n;
    cnt[0] = true;
    for(int i = 0; i < n; i++){
        cin >> p;
        if(cnt[p] == false) ans++;
        cnt[p] = true;
    }
    cout << ans << '\n';
    return 0;
}