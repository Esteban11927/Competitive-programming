#include<iostream>
using namespace std;
string s1, s2;
int main(){
    cin >> s1 >> s2;
    int n = s1.size();
    for(int i = 0; i < n; i++){
        if('A' <= s1[i] && s1[i] <= 'Z') s1[i] = s1[i] - 'A' + 'a';
        if('A' <= s2[i] && s2[i] <= 'Z') s2[i] = s2[i] - 'A' + 'a';
    }
    if(s1 < s2) cout << "-1\n";
    if(s1 == s2) cout << "0\n";
    if(s2 < s1) cout << "1\n";
    return 0;
}