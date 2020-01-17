#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool aux[200000];
int main(){
    int t, n, q, p;
    cin >> t;
    while(t--){ 
        vector<int> ans;   
        cin >> n;
        p = 1;
        for(int i = 0; i < n; i++){
            while(aux[p] == true) p++;
            cin >> q;
            if(aux[q] == false){
                aux[q] = true;
                ans.emplace_back(q);
            }
            else if(p < q){
                ans.emplace_back(p);
                aux[p] = true;
            }
        }
        if(ans.size() == n){
            for(int i = 0; i < n; i++) cout << ans[i] << ' ';
            cout << '\n';
        }
        else cout << "-1\n";
        memset(aux, 0, sizeof aux);
    }
    return 0;
}