#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, d, ans = 2;
    cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n-1; i++){
        if(abs(arr[i] - arr[i+1]) > 2*d) ans += 2;
        else if(abs(arr[i] - arr[i+1]) == 2*d) ans++;
    }
    cout << ans << '\n';
    return 0;
}