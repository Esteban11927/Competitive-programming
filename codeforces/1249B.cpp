#include<iostream>
#include<vector>
using namespace std;

int val[300000], cont;

int dfs(int i, int p[]){
    cont++;
    val[i] = 1;
    if(val[p[i]-1] == 0) dfs(p[i]-1, p);
    val[i] = cont;
}

int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int p[n];
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < n; i++){
            cont = 0;
            if(val[i] == 0) dfs(i, p);
        }
        for(int i = 0; i < n; i++) cout << val[i] << ' ';
        cout << '\n';
        for(int i = 0; i < n; i++) val[i] = 0;
    }
    return 0;
}