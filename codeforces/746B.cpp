#include<iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin >> n >> s;
    if(n == 1) cout << s << '\n';
    else{
        for(int i = n-2; i >= 0; i -= 2) cout << s[i];
        for(int i = 0 + ((n%2)^1); i < n; i += 2) cout << s[i];
    }
    cout << '\n';
    return 0;
}