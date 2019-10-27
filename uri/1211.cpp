#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string s;
    while(cin >> n){
        vector<string> vec;
        for(int i = 0; i < n; i++){
            cin >> s;
            vec.emplace_back(s);
        }
        sort(vec.begin(), vec.end());
        string base = vec[0];
        int ans = 0;
        for(int i = 1; i < n; i++){
            for(int j = 0; j < base.size(); j++){
                if(base[j] == vec[i][j]) ans++;
                else break;
            }
            base = vec[i];
        }
        cout << ans << '\n';
    }
    return 0;
}