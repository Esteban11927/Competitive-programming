#include<iostream>
using namespace std;
int main(){
    int n, in, ans = 1e9;
    cin >> n;
    int ca[n];
    for(int i = 0; i < n; i++) cin >> ca[i];
    for(int i = 0; i < n; i++){
        int cont = 0;
        for(int j = 0; j < ca[i]; j++){
            cin >> in;
            cont += 5*in+15;
        }
        ans = min(ans, cont);
    }
    cout << ans << '\n';
    return 0;
}