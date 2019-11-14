#include<iostream>
using namespace std;

int n, m, k, cont;
char maze[501][501];
bool travel[501][501];

void dfs(int row, int col){
    travel[row][col] = true;
    if(row >= 1 && travel[row-1][col] == false && maze[row-1][col] == '.') dfs(row-1, col);      //up
    if(row < n-1 && travel[row+1][col] == false && maze[row+1][col] == '.') dfs(row+1, col);     //down
    if(col < m-1 && travel[row][col+1] == false && maze[row][col+1] == '.') dfs(row, col+1);     //right
    if(col >= 1 && travel[row][col-1] == false && maze[row][col-1] == '.') dfs(row, col-1);      //left
    if(cont < k){
        maze[row][col] = 'X';
        cont++;
    }
    return;
}

int main(){
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> maze[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(maze[i][j] == '.'){
                dfs(i, j);
                i = n;
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j  < m; j++){
            cout << maze[i][j];
        }
        cout << '\n';
    }
    return 0;
}