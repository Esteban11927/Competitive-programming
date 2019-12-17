#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        if(arr[0] < arr[i] && arr[i] < arr[n-1]) ans++;
    }
    cout << ans << '\n';
    return 0;
}