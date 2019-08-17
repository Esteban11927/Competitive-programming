#include<iostream>
using namespace std;
int n;
int mat[210][210];
int dp[210][210];
int ans = 0;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for(int k = 1; k <= t; k++){
  int aux = 1;
  int flag = 1;
    cin >> n;
    for(int i = 0; i < 2 * n - 1; i++){
      for(int j = 0; j < aux; j++){
        cin >> mat[i][j];
      }
      if(aux == n) flag = -1;
      aux += flag;
    }
    aux = 2; flag = 1;
    dp[0][0] = mat[0][0];
    for(int i = 1; i < 2 * n - 1 ; i++){
      for(int j = 0; j < aux; j++){
        if(flag == 1){
            if(j == 0 || j == aux-1){
                if(j == 0){
                    dp[i][j] += mat[i][j] + dp[i-1][j];
                }
                else{
                    dp[i][j] += mat[i][j] + dp[i-1][j-1];
                }
            }
            else{
                dp[i][j] += mat[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
            }
        }
        else{
            dp[i][j] += mat[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
        }
      }
      if(aux == n) flag = -1;
      aux += flag;
    }
    cout <<"Case " << k << ": " << dp[2*n-2][0] << '\n';
    /*for(int i = 0; i <= 2*n; i++){
        for(int j = 0; j <= n; j++){
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }*/
    for(int i = 0; i < 210; i++){
        for(int j = 0; j < 210; j++){
            dp[i][j] = 0;
            mat[i][j] = 0;
        }
    }
  }
  return 0;
}