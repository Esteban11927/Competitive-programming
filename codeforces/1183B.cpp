#include<iostream>
using namespace std;
int main(){
    int q, n, k;
    cin >> q;
    while(q--){
        int mi = 1e9, ma = 0;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mi = min(mi, arr[i]);
            ma = max(ma, arr[i]);
        }
        if(ma-(mi+ma)/2 > k || abs(mi-(mi+ma)/2) > k) cout << -1 << '\n';
        else{
            cout << mi+k << '\n';
        }
    }
    return 0;
}