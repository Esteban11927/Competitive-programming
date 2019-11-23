#include<iostream>
#include<vector>
using namespace std;
int ans;
bool visited[500];

void dfs(vector<int> vec[], int node){
    visited[node] = true;
    /*if(vec[node].size() == 0){
        ans++;
        return;
    }*/
    for(int i = 0; i < vec[node].size(); i++){
        if(visited[vec[node][i]] == false){
            dfs(vec, vec[node][i]);
        }
    }
}

int main(){
    int n, m, k, x;
    cin >> n >> m;
    vector<int> vec[n+201];
    for(int i = 1; i <= n; i++){
        cin >> k;
        for(int j = 0; j < k; j++){
            cin >> x;
            vec[i].emplace_back(x+100);
            vec[x+100].emplace_back(i);
        }
    }
    bool flag = 0;
    for(int j = 1; j <= n; j++){
        if(visited[j] == false){
            ans+= flag;
            dfs(vec, j);
        }
        flag = 1;
    }
    flag = 1;
    for(int i = 0; i < n; i++){
        if(vec[i].size()) flag = 0;
    }
    cout << ans+flag << '\n';
    return 0;
}