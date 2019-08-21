#include<iostream>
using namespace std;
int main(){
    string l1, l2, s;
    cin >> l1 >> l2 >> s;
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 25; j++){
            if(l1[j] >  l1[j+1]){
                swap(l1[j], l1[j+1]);
                swap(l2[j], l2[j+1]);
            }
        }
    }
    for(int i = 0; i < s.size(); i++){
        if('A' <= s[i] && s[i] <= 'Z')
            cout << (char)(l2[s[i] - 'A'] - 'a' + 'A');
        else if('a' <= s[i] && s[i] <= 'z')
            cout << (char)(l2[s[i] - 'a']);
        else cout << s[i];
    }
    cout << '\n';
    return 0;
}