#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        string s = to_string(a+b);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '0') cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}