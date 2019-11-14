#include<iostream>
using namespace std;

int dfs(int arr[], int node, int depth){
    if(arr[node] == -1){
        return depth + 1;
    }
    return dfs(arr, arr[node], depth+1);
}

int main(){
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0) arr[i]--;
    }
    for(int i = 0; i < n; i++){
        ans = max(ans, dfs(arr, i, 0));
    }
    cout << ans << '\n';
}