#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k, x, ans = 0;
    vector<int> vec;
    cin >> n >> k;
    k--;
    for(int i = 0; i < n; i++){
        cin >> x;
        vec.push_back(x);
    } 
    k = vec[k];
    for(int i = 0; i < n; i++){
        if(vec[i] >= k && vec[i] > 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}