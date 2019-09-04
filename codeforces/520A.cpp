#include<iostream>
using namespace std;
bool arr[26];
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if('A' <= s[i] && s[i] <= 'Z') arr[(int)(s[i] - 'A')] = true;
        else arr[(int)(s[i] - 'a')] = true;
    }
    for(int i = 0; i < 26; i++){
        if(!arr[i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}