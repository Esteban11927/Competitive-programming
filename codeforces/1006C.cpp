#include<iostream>
using namespace std;
int main(){
    long long int n, ans = 0;
    cin >> n;
    long long int arr[n+1]; arr[0] = 0;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    for(int i = 1; i <= n; i++) arr[i] += arr[i-1];
    //for(int i = 1; i <= n; i++) cout << arr[i] << ' ';
    //cout << '\n';
    for(int i = 1; i <= n; i++){
        int l = 1, r = n, mid;
        while(r - l > 1){
            mid = (l+r)/2;
            if(arr[n] - arr[mid] < arr[i] && mid > i) r = mid;
            else l = mid;
        }
        //cout << i << ' ' << l << ' ' << r << '\n';
        if(arr[i] == arr[n] - arr[r]) ans = arr[i];
        if(arr[i] == arr[n] - arr[l]) ans = arr[i];
        //cout << ans << '\n';
    }
    cout << ans << '\n';
    return 0;
}