#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int ans = 1;
        for(int i = 0; i < n; i++){
            for(int  j = 0; j < n; j++){
                if(abs(arr[i] - arr[j]) == 1) ans = 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}