#include<iostream>
using namespace std;
int main(){
    int n;
    string s, ans;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(ans.size()%2 == 0 || s[i] != ans.back()) ans += s[i];
    }
    if(ans.size()%2 != 0) ans.pop_back();
    cout << n-ans.size() << '\n' << ans << '\n';
    return 0;
}