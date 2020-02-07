#include<iostream>
#include<algorithm>
using namespace std;

int step[200100], cont[200100], ans = 1e9, n, k;

void cal(int a, int b){
    cont[a]++;
    step[a] += b;
    if(cont[a] == k) ans = min(ans, step[a]);
    if(a == 0) return;
    cal(a/2, b+1);
}

int main(){
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i = 0; i < n; i++) cal(a[i], 0);
    cout << ans << '\n';
    return 0;
}