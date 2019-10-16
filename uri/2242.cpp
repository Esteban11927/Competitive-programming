#include<iostream>
using namespace std;
int main(){
    string s;
    char c;
    while(cin >> c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') s.push_back(c);
    }
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] != s[s.size() - 1 - i]){
            cout << "N\n";
            return 0;
        }
    }
    cout << "S\n";
    return 0;
}