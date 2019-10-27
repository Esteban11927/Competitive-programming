#include<iostream>
#include<vector>
using namespace std;
int main(){
    int q, n, m, x;
    cin >> q;
    while(q--){
        cin >> n >> m;
        vector<int> vec[n];
        for(int i = 0; i < m; i++){
            cin >> x;
            vec[x%n].emplace_back(x);
        }
        for(int i = 0; i < n; i++){
            cout << i << " -> ";
            for(int j = 0; j < vec[i].size(); j++){
                cout << vec[i][j] << " -> ";
            }
            cout << "\\\n";
        }
        if(q) cout << '\n';
    }
    return 0;
}