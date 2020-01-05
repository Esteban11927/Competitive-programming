#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.size() == 1) cout << 0;
    else{
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '.') cout << 0;
            else{
                if(s[i+1] == '.') cout << 1;
                else cout << 2;
                i++;
            }
        }
    }
    cout << '\n';
    return 0;
}
//0 .
//1 -.
//2 --