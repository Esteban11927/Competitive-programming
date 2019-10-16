#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    char last;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        if('a' <= s[0] && s[0] <= 'z') cout << s[0];
        last = s[0];
        for(int i = 1; i < s.size(); i++){
            if(last == ' ' && ('a' <= s[i] && s[i] <= 'z')){
                cout << s[i];
            }
            last = s[i];
        }
        cout << '\n';
    }
}