#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, n, m, c;
    cin >> t;
    while(t--){
        c = 0;
        cin >> n >> m;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for(int i = 0; i < n; i++) c += a[i]*2;
        c += (a[0]+a[1])*(m-n);
        if(m < n || n == 2){
            cout << "-1\n";
        }
        else{
            cout << c << '\n';
            for(int i = 1; i < n; i++) cout << i << ' ' << i+1 << '\n';
            cout << n << ' ' << 1 << '\n';
        }
    }
    return 0;
}