#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    long long room[n+1], letter[m+1];
    for(int i = 0; i <= n; i++) room[i] = 0;
    for(int i = 0; i <= m; i++) letter[i] = 0;
    for(int i = 1; i <= n; i++){
        cin >> room[i];
    }
    for(int i = 1; i <= n; i++){
        room[i] += room[i-1];
    }
    for(int i = 1; i <= m; i++){
        cin >> letter[i];
    }
    for(int i = 1; i <= m; i++){
        int l = 1, r = n;
        while(r - l > 1){
            int mid = (l+r)/2;
            if(room[mid] <= letter[i]) l = mid;
            else r = mid;
        }
        if(room[l] >= letter[i]){
            cout << l << ' ' << letter[i] - room[l - 1] << '\n';
        }
        else{
            cout << r << ' ' << letter[i] - room[r-1] << '\n';
        }
    }
    return 0;
}