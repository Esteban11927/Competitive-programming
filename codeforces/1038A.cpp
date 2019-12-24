#include<iostream>
using namespace std;

int arr[100];

int main(){
    int n, k, ans = 1e9;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++){
        arr[s[i]-'A']++;
    }
    for(int i = 0; i < k; i++) ans = min(ans, arr[i]);
    cout << ans*k << '\n';
    return 0;
}