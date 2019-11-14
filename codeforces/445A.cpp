#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    char mat[n][m], xam[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] == '.'){
                if(i%2 == 0){
                    if(j%2 == 0) mat[i][j] = 'B';
                    else mat[i][j] = 'W';
                }
                else{
                    if(j%2 == 0) mat[i][j] = 'W';
                    else mat[i][j] = 'B';
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << mat[i][j];
        }
        cout << '\n';
    }
}