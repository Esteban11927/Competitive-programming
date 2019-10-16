#include<iostream>
using namespace std;
int main(){
    string s;
    int cont;
    while(getline(cin, s)){
        cont = 0;
        for(int i = 0; i < s.size(); i++){
            if(cont%2 == 0 && s[i] != ' '){
                if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))cont++;
                if('a' <= s[i] && s[i] <= 'z'){
                    cout << char (s[i] - 'a' + 'A');
                }
                else cout << s[i];
            }
            else if(s[i] != ' '){
                if('A' <= s[i] && s[i] <= 'Z') cout << char (s[i] - 'A' + 'a');
                else cout << s[i];
                if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))cont++;
            }
            else cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}