#include<iostream>
using namespace std;
int main(){
    long long int n, m, row = -1, column = -1, auxrow = -1, auxcolumn = -1, ans = 0;
    cin >> n >> m;
    long long int mat[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            mat[i][j]=0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            mat[i][m] += mat[i][j];
            mat[n][j] += mat[i][j];
        }
    }


    for(int k = 0; k < 4; k++){
        for(int i = 0; i < n; i++){
            if(mat[i][m] > auxrow){
                auxrow = mat[i][m];
                row = i;
            }
        }
        for(int i = 0; i < m; i++){
            if(mat[n][i] > auxcolumn){
                auxcolumn = mat[n][i];
                column = i;
            }
        }
        if(auxrow >= auxcolumn){
            for(int i = 0; i < m; i++){
                mat[n][i] -= mat[row][i];
            }
            for(int i = 0; i <= m; i++){
                if(i < m) ans += mat[row][i];
                mat[row][i] = 0;
            }
        }
        else{
            for(int i = 0; i < m; i++){
                mat[i][m] -= mat[i][column];
            }
            for(int i = 0; i <= n; i++){
                if(i < n) ans += mat[i][column];
                mat[i][column] = 0;
            }
        }

        auxrow = -1; auxcolumn = -1;
    }



    /*for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }*/
    
    cout << ans << '\n';
    return 0;
}