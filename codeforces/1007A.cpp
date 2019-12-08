#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    int l = 0, r = 0, ans = 0;
    while(l != n && r != n){
        if(arr[l] == arr[r]) r++;
        else{
            ans++;
            l++;
            r++;
        }
    }
    cout << ans << '\n';
    return 0;
}