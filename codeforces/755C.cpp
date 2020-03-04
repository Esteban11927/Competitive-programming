#include<iostream>
#include<vector>
using namespace std;
vector<int> g[11000];
bool visited[11000];

void dfs(int o){
    visited[o] = true;
    for(int i = 0; i < g[o].size(); i++){
        if(visited[g[o][i]] == false) dfs(g[o][i]);
    }
    return;
}

int main(){
    int n, in, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> in;
        g[i].emplace_back(in);
        g[in].emplace_back(i);
    }
    for(int i = 1; i <= n; i++){
        if(visited[i] == false){
            dfs(i);
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}