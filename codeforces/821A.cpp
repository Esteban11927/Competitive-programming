#include<iostream>
#include<vector>
using namespace std;
vector<int> row[55], col[55];
int n, mat[70][70];

bool search(int r, int c){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[r][c] == row[r][i] + col[c][j]) return true;
        }
    }
    return false;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){    
            cin >> mat[i][j];
            row[i].emplace_back(mat[i][j]);
            col[j].emplace_back(mat[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(search(i, j) || mat[i][j] == 1) continue;
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}