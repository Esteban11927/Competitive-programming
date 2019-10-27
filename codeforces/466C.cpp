#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        long long arr[n+2];
        arr[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
            arr[i] += arr[i-1];
        }
        if(arr[n]%3 != 0){
            cout << "0\n";
            return 0;
        }
        long long s = arr[n] / 3;
        long long ss = 2*s;
        long long ans = 0, cont = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == ss){
                ans += cont;
            }
            if(arr[i] == s){
                cont++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}