#include<iostream>
using namespace std;
int vis[1000];
int main(){
    int p, n, x;
    cin >> p >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(vis[x%p]){
            cout << i+1 << '\n';
            return 0;
        }
        vis[x%p] = true;
    }
    cout << "-1\n";
    return 0;
}