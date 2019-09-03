#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s, ss;
    cin >> s;
    int n = s.size();    
    for(int i = 0; i < n; i++) if(s[i] != '+') ss += s[i];
    n = ss.size();
    sort(ss.begin(), ss.end());
    for(int i = 0; i < n-1; i++) cout << ss[i] << '+';
    cout << ss[n-1] << '\n';
    return 0;
}