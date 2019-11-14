#include<iostream>
#include<vector>
using namespace std;
bool cat[100005], visited[100005], travel[100005];
int n, m, c, x, y, ans = 0;

void dfs(vector<int> vec[], int node, int q){
    bool flag = false;
    //cout << q << ' ' << m << '\n';
    if(q > m) return;
    if(cat[node] == 0) q = 0;
    travel[node] = true;
    for(int i = 0; i < vec[node].size(); i++){
        if(visited[vec[node][i]] == false && travel[vec[node][i]] == false){
            flag = true;
            dfs(vec, vec[node][i], q + (cat[vec[node][i]] == 0 ? 0 : 1));
        }
    }
    if(flag == false) ans++;
    travel[node] = false;
    visited[node] = true;
    return;
}

int main(){
    cin >> n >> m;
    vector<int> vec[n];
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c) cat[i] = true;
    }
    for(int i = 0; i < n-1; i++){
        cin >> x >> y;
        vec[x-1].emplace_back(y-1);
        vec[y-1].emplace_back(x-1);
    }
    dfs(vec, 0, cat[0] == 0 ? 0 : 1);
    cout << ans << '\n';
    return 0;
}