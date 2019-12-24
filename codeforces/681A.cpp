#include<iostream>
using namespace std;
int main(){
    int n, a, b;
    bool ans = false;
    string s;
    cin >> n;
    while(n--){
        cin >> s >> a >> b;
        if(a >= 2400 && b > a) ans = true;
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}