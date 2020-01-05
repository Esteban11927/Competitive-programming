#include<iostream>
using namespace std;
int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    string s[n];
    int arr[m];
    for(string &c : s) cin >> c;
    for(int &c : arr) cin >> c;
    for(int i = 0; i < m; i++){
        int aux[5], cont = 0;
        for(int &c : aux) c = 0;
        for(int j = 0; j < n; j++){
            aux[s[j][i]-'A']++;
            cont = max(aux[s[j][i]-'A']*arr[i], cont);
        }
        ans += cont;
    }
    cout << ans << '\n';
    return 0;
}