#include<iostream>
#include<algorithm>
using namespace std;
bool compare(const int a, const int b){
    return a > b;
}
int main(){
    int k, n, i, ans;
    cin >> k;
    while(k--){
        cin >> n;
        int arr[n];
        for(i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n, compare);
        for(i = 0; i < n; i++){
            if(arr[i] >= i+1) ans = i+1;
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}