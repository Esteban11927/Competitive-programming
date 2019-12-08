#include<iostream>
using namespace std;
int cont[100010];
int main(){
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        cont[i] = cont[i-1] + (arr[i-1] > arr[i] ? 1 : 0);
    }
    int l = 0, r = 0;
    int ans = 0;
    while(l != n && r != n){
        if(cont[r] - cont[l] <= 1){
            ans = max(ans, r-l);
            r++;
        }
        else l++;
    }
    cout << ans+1 << '\n';
    return 0;
}