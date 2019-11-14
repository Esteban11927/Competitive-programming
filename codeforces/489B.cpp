#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m, ans = 0;
    cin >> n;
    int boy[n];
    for(int i = 0; i < n; i++){
        cin >> boy[i];
    }
    cin >> m;
    int girl[m];
    for(int j = 0; j < m; j++){
        cin >> girl[j];
    }
    sort(boy, boy+n);
    sort(girl, girl+m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(boy[i] - girl[j]) <= 1){
                ans++;
                girl[j] = -10;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}