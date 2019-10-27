#include<iostream>
#include<algorithm>
using namespace std;

bool compare(const int a, const int b){
    return a > b;
}

int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n], aux[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            aux[i] = arr[i];
        }
        sort(arr, arr+n, compare);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == aux[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}