#include<iostream>
#include<string.h>
using namespace std;
 
int arr[101], n;
int dp[105][4]; 

int dfs(int pos, int lastActivity){
    if(pos >= n) return 0;
    if(dp[pos][lastActivity] >= 0) return dp[pos][lastActivity];
    int ans = 0;
    
    if((arr[pos] == 3 || arr[pos] == 1) && lastActivity != 1) ans = max(ans, dfs(pos+1, 1) + 1);
    if((arr[pos] == 3 || arr[pos] == 2) && lastActivity != 2) ans = max(ans, dfs(pos+1, 2) + 1);
    ans = max(ans, dfs(pos+1, 0));
    
    return dp[pos][lastActivity] = ans;
}
 
int main(){
    cin >> n;
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << n - dfs(0, 0) << '\n';
    return 0;
}