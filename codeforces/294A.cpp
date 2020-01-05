#include<iostream>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> m;
    while(m--){
        cin >> x >> y;
        x--;
        int u = y-1, d = arr[x]-y;
        arr[x] = 0;
        if(x < n-1) arr[x+1] += d;
        if(x > 0) arr[x-1] += u;
    }
    for(int i = 0; i < n; i++) cout << arr[i] << '\n';
    return 0;
}