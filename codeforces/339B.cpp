#include<iostream>
using namespace std;
int main(){
    long long n, m, ans = 0;
    cin >> n >> m;
    int arr[m];
    for(int i =0 ; i < m; i++){
        cin >> arr[i];
    }
    ans += arr[0] - 1;
    for(int i = 1; i < m; i++){
        if(arr[i-1] < arr[i]) ans += arr[i] - arr[i-1];
        if(arr[i-1] > arr[i]) ans += n - arr[i-1] + arr[i];
    }
    cout << ans << '\n';
    return 0;
}