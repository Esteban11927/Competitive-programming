#include<iostream>
using namespace std;
int arr[150];
int main(){
    int n, ans = 0;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        arr[s[0]]++;
    }
    for(int i = 'a'; i <= 'z'; i++){
        int x = arr[i];
        ans += ((x/2)*((x/2)-1))/2 + ((x-(x/2))*((x-(x/2))-1))/2;
    }
    cout << ans << '\n';
    return 0;
}