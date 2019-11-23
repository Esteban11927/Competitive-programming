#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    pair<long long int, long long int> arr[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i].first >> arr[i].second;
    }
    arr[0].first = 0; arr[0].second = 0;
    sort(arr, arr+n+1);
    for(int i = 1; i <= n; i++){
        if(i >= 1) arr[i].second += arr[i-1].second;
    }
    long long int ans = 0;
    for(int i = 1; i <= n; i++){
        int l = i, r = n;
        while(r - l > 1){
            int mid = (r+l+1)/2;
            if(arr[mid].first - arr[i].first >= d) r = mid;
            else l = mid;
        }
        if(arr[r].first-arr[i].first < d) ans = max(arr[r].second-arr[i-1].second, ans);
        else ans = max(arr[l].second-arr[i-1].second, ans);
    }

    cout << ans << '\n';
    return 0;
}