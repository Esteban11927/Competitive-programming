#include <iostream>

using namespace std;

int main(){
    int n, m, pos_x, pos_y;
    char letter;

    cin >> n >> m;

    char matrix[n][m];
    bool is_repeated[n][m] = {false};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            is_repeated[i][j] = false;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            letter = matrix[i][j];
            pos_x = j;
            pos_y = i;

            for(int k=0; k<n; k++){
                if((letter == matrix[k][pos_x]) && (pos_y != k)){
                    is_repeated[pos_y][pos_x] = true;
                    is_repeated[k][pos_x] = true;
                }
            }

            for(int l=0; l<m; l++){
                if((letter == matrix[pos_y][l]) && (pos_x != l)){
                    is_repeated[pos_y][pos_x] = true;
                    is_repeated[pos_y][l] = true;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(is_repeated[i][j] == false)
                cout << matrix[i][j];
        }
    }
    cout << '\n';

    return 0;
}