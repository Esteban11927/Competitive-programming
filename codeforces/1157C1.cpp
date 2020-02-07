#include<iostream>
using namespace std;
int main(){
    int n;
    string ans;
    cin >> n;
    int arr[n], l = 0, r = n-1, maxi = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    while(l <= r){
        if(arr[l] > maxi && arr[r] > maxi) maxi = min(arr[l], arr[r]);
        else if(arr[l] > maxi || arr[r] > maxi) maxi = max(arr[l], arr[r]);
        if(arr[l] == maxi){
            ans += 'L';
            l++;
        }
        else if(arr[r] == maxi){
            ans += 'R';
            r--;
        }
        else break;
    }
    cout << ans.size() << '\n' << ans << '\n';
    return 0;
}