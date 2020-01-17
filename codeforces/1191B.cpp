#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s[3];
    for(int i = 0; i < 3; i++) cin >> s[i];
    sort(s, s+3);
    if(s[0][1] != s[1][1] && s[1][1] != s[2][1]){
        cout << "2\n";
        return 0;
    }
    if(s[0][1] != s[1][1] || s[1][1] != s[2][1]){
        cout << "1\n";
    }
    return 0;
}