#include<iostream>
#include<string.h>
using namespace std;
const int tam = 1 << 18;
int arr[20][20], dp[20][tam];
int n, t;

int solve(int r, int mask, int sum){
    //cout << mask << ' ' << sum << '\n';
    if(r == n) return sum;
    int x = 0;
    for(int i = 0; i < n; i++){
        if((mask >> i) % 2 == 0){
            x = max( dp[r][mask << i], solve(r+1, mask ^ (1 << i), sum + arr[r][i]) );
        }
    }
    return dp[r][mask] = x;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }
        cout << solve(0, 0, 0) << '\n';
        memset(dp, 0, sizeof dp);
    }
    return 0;
}