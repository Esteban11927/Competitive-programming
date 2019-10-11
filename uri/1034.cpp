#include<iostream>
#include<string.h>
using namespace std;
int dp[1000201];
int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        memset(dp, 1, sizeof dp);
        cin >> n >> m;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            dp[arr[i]] = 1;
        }
        for(int i = 1; i <= m; i++){
            for(int j = 0; j < n; j++){
                dp[i + arr[j]] = min(dp[i] + 1, dp[i + arr[j]]);
            }
        }
        cout << dp[m] << '\n';
    }
    return 0;
}