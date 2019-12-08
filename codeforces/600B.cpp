#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n);
    for(int i = 0; i < m; i++){
        int l = 0, r = n-1, mid = (l+r)/2;
        while(r - l > 1){
            mid = (l+r)/2;
            if(a[mid] <= b[i]) l = mid;
            else r = mid;
        }
        if(a[r] <= b[i]) cout << r+1 << ' ';
        else cout << l + (a[l] <= b[i] ? 1 : 0) << ' ';
    }
    cout << '\n';
    return 0;
}