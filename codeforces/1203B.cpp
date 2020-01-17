#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, area, t;
    cin >> t;
    while(t--){
        cin >> n;
        bool flag = true;
        int a[4*n];
        for(int i = 0; i < 4*n; i++) cin >> a[i];
        sort(a, a+4*n);
        area = a[0]*a[4*n-1];
        for(int i = 0; i < 2*n; i++){
            if(a[i*2] != a[i*2+1]) flag = false;
        }
        for(int i = 0; i < n; i++){
            if(a[i*2+1]*a[4*n-2-2*i] != area) flag = false;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}