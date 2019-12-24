#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    int arr[n], b[n];
    b[0] = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 1; i < n; i++){
        b[i] = b[i-1];
        if(b[i] <= arr[i-1]) b[i] += arr[i-1];
    }
    //for(int i = 0; i < n; i++) cout << b[i] << ' ';
    //cout << '\n';
    for(int i = 0; i < n; i++){
        if(b[i] <= arr[i]) ans++;
    }
    cout << ans << '\n';
    return 0;
}