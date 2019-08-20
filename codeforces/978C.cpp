#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    long long room[n], letter[m];
    for(int i = 0; i < n; i++) room[i] = 0;
    for(int i = 0; i < m; i++) letter[i] = 0;
    for(int i = 0; i < n; i++){
        cin >> room[i];
    }
    for(int i = 1; i < n; i++){
        room[i] += room[i-1];
    }
    for(int i = 0; i < m; i++){
        cin >> letter[i];
    }
    for(int i = 0; i < m; i++){
        int l = 0, r = n;
        while(r - l > 1){
            if(room[(r + l) / 2] <= letter[i]) l = (r + l) / 2;
            else r = (r + l) / 2;
        }
        if(room[l] >= letter[i]){
            cout << l + 1 << ' ';
            if(l == 0){
                cout << letter[i] << '\n';
            }
            else{
                cout << letter[i] - room[l - 1] << '\n';
            }
        }
        else{
            cout << r + 1 << ' ';
            if(r == 0){
                cout << letter[i] << '\n';
            }
            else cout << letter[i] - room[r-1] << '\n';
        }
    }
    return 0;
}