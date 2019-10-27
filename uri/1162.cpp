#include<iostream>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    ans++;
                }
            }
        }
        cout << "Optimal train swapping takes " << ans << " swaps." << '\n';
    }
}