#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s[0]-'0' > 9-(s[0]-'0') && 9-(s[0]-'0') + '0' != '0'){
            s[0] = 9-(s[0]-'0') + '0';
        }
    for(int i = 1; i < s.size(); i++){
        if(s[i]-'0' > 9-(s[i]-'0')){
            s[i] = 9-(s[i]-'0') + '0';
        }
    }
    for(int i = 0; i < s.size(); i++) cout << s[i];
    cout << '\n';
    return 0;
}