#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int visited[1001], n, x;

int dfs(int node, vector<int> vec[]){
    visited[node]++;
    if(visited[node] == 2) return node;
    return dfs(vec[node][0], vec);
}

int main(){
    cin >> n;
    vector<int> vec[n];
    for(int i = 0; i < n; i++){
        cin >> x;
        vec[i].emplace_back(x-1);
    }
    for(int i = 0; i < n; i++){
        memset(visited, 0, sizeof visited);
        cout << dfs(i, vec) + 1 << ' ';
    }
    cout << '\n';
    return 0;
}