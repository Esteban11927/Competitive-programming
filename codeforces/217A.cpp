#include<iostream>
using namespace std;
int n, visited[101], x[101], y[101], ans;

void dfs(int node){
    for(int i = 0; i < n; i++){
        if(visited[i] == false && (x[node] == x[i] || y[node] == y[i])){
            visited[i] = true;
            dfs(i);
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    for(int i = 0; i < n; i++){
        if(visited[i] == false){
            dfs(i);
            ans++;
        }
    }
    cout << ans - 1 << '\n';
    return 0;
}