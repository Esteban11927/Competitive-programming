#include<iostream>
using namespace std;
int main(){
    string s;
    int sum = 1, aux = 0;
    cin >> s;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) sum++;
        else sum = 1;
        if(sum == 7) aux = 1;
    }
    if(aux == 1) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}