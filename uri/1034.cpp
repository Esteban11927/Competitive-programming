#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int n, m;
int arr[30], dp[1000101];
bool compare(const int a, const int b){
    return a > b;
}
int solve(int idx, int sum, int q){
    //cout << sum << ' ';
    if(idx == n){
        if(sum != m) return 2e9;
        return q;
    }
    if(sum > m) return 2e9;
    if(sum == m) return q;
    if(dp[sum] != 0 && dp[sum] < q) return dp[sum];
    int temp = 2e9;
    temp = min(temp, solve(idx, sum + arr[idx], q+1));
    temp = min(temp, solve(idx + 1, sum, q));
    cout << temp << ' ' << sum << '\n';
    return dp[sum] = temp;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        memset(dp, 0, sizeof dp);
        cin >> n >> m;
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n, compare);
        for(int i = 0; i< 20; i++) cout << dp[i] << ' ';
        cout << '\n';
        cout << solve(0, 0, 0) << '\n';
    }
    return 0;
}