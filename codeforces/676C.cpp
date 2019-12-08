#include<iostream>
using namespace std;
 
int main(){
    int n, k;
    char c;
    cin >> n >> k;
    int a[n+2], b[n+2];
    a[0] = 0; b[0] = 0; a[n+1] = 0; b[n+1] = 0;
    for(int i = 1; i <= n; i++){
        cin >> c;
        a[i] = (c == 'a' ? 1 : 0) + a[i-1];
        b[i] = (c == 'b' ? 1 : 0) + b[i-1];
    }
    int l = 0, r = 1, ans = 1;
    while(r <= n){
        ans = max(ans, r-l);
        if(l == r) r++;
        else if(a[r+1] - a[l] <= k) r++;
        else l++;
    }
    l = 0; r = 1;
    while(r <= n){
        ans = max(ans, r-l);
        if(l == r) r++;
        else if(b[r+1] - b[l] <= k) r++;
        else l++;
    }
    cout << ans << '\n';

    return 0;
}