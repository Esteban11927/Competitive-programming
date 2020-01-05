#include<iostream>
using namespace std;
int arr[1000001], cont[1000001];
int main(){
    int x, y, n, m = 0, ans = 0, j;
    cin >> x >> y >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        cont[b[i]]++;
        m = max(cont[b[i]], m);
    }
    for(int i = 0; i < n; i++){
        if(cont[b[i]] == m){
            j = b[i];
            break;
        }
    }
    for(int i = 0; i <= n; i++){
        ans += abs(arr[a[i]] - j);
        cout << arr[a[i]] << ' ';
    }
    cout << '\n';
    cout << j << '\n';
    cout << (x-1) + ans << '\n';
    return 0;
}