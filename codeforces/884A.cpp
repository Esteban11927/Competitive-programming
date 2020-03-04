#include<iostream>
using namespace std;
int arr[10000];
int main(){
    int n, t, ans = 0, sum = 0;
    cin >> n >> t;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < 10000; i++){
        if(sum >= t) break;
        ans++;
        sum += 86400-arr[i];
    }
    cout << ans << '\n';
    return 0;
}