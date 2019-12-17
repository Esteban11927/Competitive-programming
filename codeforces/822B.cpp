#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    string s, t;
    vector<int> ans;
    for(int i = 0; i < 2000; i++) ans.emplace_back(1);
    cin >> n >> m >> s >> t;
    for(int i = 0; i < m - n + 1; i++){
        vector<int> vec;
        for(int j = i; j < i+n; j++){
            if(s[j-i] != t[j]){
                vec.emplace_back(j-i);
            }
        }
        if(vec.size() < ans.size()){
            ans.clear();
            for(int j = 0; j < vec.size(); j++){
                ans.emplace_back(vec[j]);
            }
        }
    }
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++) cout << ans[i]+1 << ' ';
    cout << '\n';
    return 0;
}