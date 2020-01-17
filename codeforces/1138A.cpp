#include<iostream>
using namespace std;
int main(){
    int n, l, r, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n-1; i++){
        l = i; r = i+1;
        while(l >= 0 && r < n && arr[l] != arr[r]){
            //cout << l << ' ' << r << '\n';
            ans = max(ans, r-l+1);
            if(l > 0 && r < n-1){
                if(arr[l-1] != arr[l] || arr[r] != arr[r+1]) break;
            }
            l--;
            r++;
        }
    }
    cout << ans << '\n';
    return 0;
}