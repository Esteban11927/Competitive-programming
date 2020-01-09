#include<iostream>
using namespace std;

int main(){
    int n, p;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == n) p = i;
    }
    for(int i = 1; i <= p; i++){
        if(a[i-1] < a[i]) continue;
        cout << "NO\n";
        return 0;
    }
    for(int i = p+1; i < n; i++){
        if(a[i-1] > a[i]) continue;
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    return 0;
}