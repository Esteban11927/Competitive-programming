#include<iostream>
using namespace std;
int main(){
    string s, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c >> s;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < keyboard.size(); j++){
            if(s[i] == keyboard[j]){
                cout << keyboard[j + (c == 'R' ? -1 : 1)];
            }
        }
    }
    cout << '\n';
    return 0;
}