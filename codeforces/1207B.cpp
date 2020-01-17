#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int n, m, cont = 0, flag = true;
    vector<pair<int, int>> vec;
    cin >> n >> m;
    int a[n][m], b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            b[i][j] = 0;
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < m-1; j++){
            if(a[i][j] && a[i+1][j] && a[i+1][j+1] && a[i][j+1]){
                b[i][j] = 1;
                b[i+1][j] = 1;
                b[i+1][j+1] = 1;
                b[i][j+1] = 1;
                cont++;
                vec.emplace_back(make_pair(i, j));
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != b[i][j]) flag = false;
        }
    }
    if(flag){
        cout << cont << '\n';
        for(int i = 0; i < cont; i++){
            cout << vec[i].first+1 << ' ' << vec[i].second+1 << '\n';
        }
    }
    else cout << "-1\n";
    
    return 0;
}