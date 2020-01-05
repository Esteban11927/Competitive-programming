#include<iostream>
using namespace std;
int arr[26];
int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < n; i++){
        arr[s[i]-'a']++;
        if(arr[s[i]-'a'] > k){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}