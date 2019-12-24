#include<iostream>
using namespace std;
int main(){
    int l, r, ans = 0;
    cin >> l >> r;
    if(l > r) swap(l, r);
    for(int i = 1; i <= 2000; i++){
        if(r-l >= 2){
            ans += 2*i;
            l++;
            r--;
        }
        else if(r-l == 1){
            ans += i;
            l++;
        }
    }
    cout << ans << '\n';
    return 0;
}