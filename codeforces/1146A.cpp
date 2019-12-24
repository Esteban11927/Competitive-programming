#include<iostream>
using namespace std;
int main(){
    string s;
    int x = 0, n;
    cin >> s;
    n = s.size();
    for(int i = 0; i < n; i++) if(s[i] == 'a') x++;
    if(2*x <= n) cout << 2*x-1 << '\n';
    else cout << n << '\n';
    return 0;
}