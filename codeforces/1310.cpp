#include<iostream>
using namespace std;
int main(){
    int n, c;
    while(cin >> n){
        cin >> c;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            arr[i] -= c;
        }
        int ans = 0, sum = 0, min_sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            ans = max(ans, sum - min_sum);
            min_sum = min(min_sum, sum);
        }
        cout << ans << '\n';
    }
    return 0;
}