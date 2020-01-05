#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n, m, sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cin >> m;
    int q[m];
    for(int i = 0; i < m; i++) cin >> q[i];
    sort(a, a+n);
    for(int i = 0; i < m; i++){
        cout << sum - a[n-q[i]] << '\n';
    }
    return 0;
}