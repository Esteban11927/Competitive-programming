#include<iostream>
#include<set>
using namespace std;
set<int> s[5001];
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        bool ans = false;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            s[arr[i]].insert(i);
        }
        for(int i = 0; i < n; i++){
            if(s[arr[i]].upper_bound(i+1) != s[arr[i]].end()) ans = true;
        }
        cout << (ans == true ? "YES\n" : "NO\n");
        for(int i = 0; i < n; i++) s[arr[i]].clear();
    }
    return 0;
}