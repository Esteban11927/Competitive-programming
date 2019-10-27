#include<iostream>
#include<vector>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n+1];
        int ans[n+1];
        vector<int> vec[n+1];
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            vec[i].emplace_back(arr[i])
            ans[i] = 0;
        }
        for(int i = 1; i <= n; i++){
            if(arr[i] == 0) ans[i] = dfs(i);
        }
    }
    return 0;
}