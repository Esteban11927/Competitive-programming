#include<iostream>
using namespace std;
int main(){
    int n, ans = 0;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    for(int i = 1; i < n-1; i++){
        if(a[i] == 0 && a[i-1] == 1 && a[i+1] == 1){
            ans++;
            a[i+1] = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}