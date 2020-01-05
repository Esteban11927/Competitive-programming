#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n], ans[n];
    for(int &c : arr) cin >> c;
    ans[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        ans[i] = arr[i+1] + arr[i];
    }
    for(int i = 0; i < n; i++) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}