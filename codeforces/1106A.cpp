#include<iostream>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    char mat[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 1; i < n-1; i++){
        for(int j = 1; j < n-1; j++){
            if(mat[i][j] == 'X' && mat[i-1][j-1] == 'X' && mat[i-1][j+1] == 'X' && mat[i+1][j-1] == 'X' && mat[i+1][j+1] == 'X') ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}