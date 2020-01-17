#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            cout << 1+i << '\n';
            return 0;
        }
    }
    cout << n << '\n';
    return 0;
}