#include<iostream>
#include<string.h>
using namespace std;

string solve(){
    string s;
    for(int i = 1; i <= 500; i++){
        s += to_string(i);
    }
    return s;
}

int main(){
    int n;
    string s = solve();
    cin >> n;
    cout << s[n-1] << '\n';
    return 0;
}