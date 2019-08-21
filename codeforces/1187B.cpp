#include<iostream>
#include<vector>
using namespace std;
vector<int> vec[26];
int main(){
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        vec[c - 'a'].emplace_back(i);
    }
    cin >> m;
    while(m--){
        string s;
        cin >> s;
        n = s.size();
        int arr[26];
        for(int i = 0; i <  26; i++) arr[i] = 0;
        for(int i = 0; i < n; i++){
            arr[s[i] - 'a']++;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(arr[i])
                ans = max(ans, vec[i][arr[i] - 1]);
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}