#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int n, t, ai;

int dfs(vector<int> vec[], int node, bool visited[]){
    if(node == t) return t;
    for(int i = 0; i < vec[node].size(); i++){
        if(visited[vec[node][i]] == false){
            if(dfs(vec, vec[node][i], visited) == t) return t;
        }
    }
    visited[node] = true;
    return -1;
}

int main(){
    cin >> n >> t;
    vector<int> vec[n+1];
    bool visited[n+1];
    memset(visited, 0, sizeof visited);
    for(int i = 1; i < n; i++){
        cin >> ai;
        vec[i].emplace_back(i+ai);
    }
    if(dfs(vec, 1, visited) == t) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}