#include<iostream>
#include<algorithm>
using namespace std;
int ans = 0;
bool compare(const int a, const int b){
    if(a < b){
        ans++;
        return true;
    }
    return false;
}
int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string s[2] = {"Carlos\n", "Marcelo\n"};
        int x = 0;
        stable_sort(arr, arr+n, compare);
        cout << s[ans%2];
    }
    return 0;
}