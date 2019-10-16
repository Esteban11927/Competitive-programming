#include<iostream>
using namespace std;
int main(){
    int q;
    string s;
    cin >> q;
    cin.ignore();
    while(q--){
        int arr[26], rep = 0;
        for(int i = 0; i < 26; i++) arr[i] = 0;
        getline(cin,s);
        for(int i = 0; i < s.size(); i++){
            if('a' <= s[i] && s[i] <= 'z'){
                arr[s[i] - 'a']++;
                rep = max(rep, arr[s[i] - 'a']);
            }
            if('A' <= s[i] && s[i] <= 'Z'){
                arr[s[i] - 'A']++;
                rep = max(rep, arr[s[i] - 'A']);
            }
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] == rep) cout << char (i + 'a');
        }
        cout << '\n';
    }
    return 0;
}