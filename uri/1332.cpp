#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s.size() == 3){
            if((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e')) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
        else cout << 3 << '\n';
    }
    return 0;
}