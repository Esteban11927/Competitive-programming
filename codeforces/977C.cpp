#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, ans = -1;
    cin >> n >> k;
    int arr[n+1];
    arr[n] = -1*1e9;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            if(i+1 == k) ans = arr[i];
        }
    }
    cout << (k == 0 ? (arr[0] == 1 ? -1 : 1) : ans) << '\n';
    return 0;
}