#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t, n, x, y;
    cin >> t;
    while(t--){
        vector<pair<int, int>> vec;
        vec.emplace_back(make_pair(0, 0));
        bool flag = true;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> x >> y;
            vec.emplace_back(make_pair(x, y));
        }
        for(int i = 0; i <= n; i++){
            for(int j = 0; j < n; j++){
                if(vec[j].first > vec[i].first && vec[j].second < vec[i].second) flag = false;
                if(vec[j].first < vec[i].first && vec[j].second > vec[i].second) flag = false;
            }
        }
        if(flag){
            cout << "YES\n";
            sort(vec.begin(), vec.end());
            for(int i = 0; i < vec.size()-1; i++){
                for(int j = 0; j < abs(vec[i].first-vec[i+1].first); j++) cout << 'R';
                for(int j = 0; j < abs(vec[i].second-vec[i+1].second); j++) cout << 'U';
            }
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}