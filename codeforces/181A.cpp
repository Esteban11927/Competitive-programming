#include<iostream>
using namespace std;
int main(){
    int n, m, x1, x2, x3, x4, y1, y2, y3, y4, cont = 1;
    cin >> n >> m;
    char mat[n][m];
    char c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == '*'){
                if(cont == 1){x1 = i, y1 = j;}
                if(cont == 2){x2 = i, y2 = j;}
                if(cont == 3){x3 = i, y3 = j;}
                cont++;
            }
        }
    }
    if(mat[x3][y2] == '.') cout << x3+1 << ' ' << y2+1 << '\n';
    if(mat[x3][y1] == '.') cout << x3+1 << ' ' << y1+1 << '\n';
    if(mat[x1][y3] == '.') cout << x1+1 << ' ' << y3+1 << '\n';
    if(mat[x1][y2] == '.') cout << x1+1 << ' ' << y2+1 << '\n';
    return 0;
}