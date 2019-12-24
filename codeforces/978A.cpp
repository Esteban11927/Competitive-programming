#include<iostream>
#include<vector>
using namespace std;
int used[2000];
int main(){
    int n;
    vector<int> ans;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = n-1; i >= 0; i--){
        if(used[arr[i]] == false) ans.emplace_back(arr[i]);
        used[arr[i]] = true;
    }
    cout << ans.size() << '\n';
    for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}