#include<iostream>
#include<vector>
using namespace std;
bool eliminated[200], visiting[200], taken[200];
vector<int> g[200];
int main(){
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        g[x].emplace_back(y);
        g[y].emplace_back(x);
    }
    for(int j = 1; j <= 100; j++){
        bool temp = 0;
        for(int i = 1; i <= n; i++){
            if(eliminated[i] == false){    
                int cont = 0;
                for(int j = 0; j < g[i].size(); j++){
                    cont += (eliminated[g[i][j]] == false);
                }
                if(cont == 1){
                    taken[i] = true;
                    temp = true;
                }
            }
        }
        for(int i = 1; i <= 100; i++){
            if(taken[i]) eliminated[i] = true;
            taken[i] = false;
        }
        if(temp) ans++;
    }
    cout << ans << '\n';
    return 0;
}