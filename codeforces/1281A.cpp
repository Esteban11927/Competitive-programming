#include<iostream>
using namespace std;
int main(){
    int n, x;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        x = s.size();
        if(s[x-2] == 'p' && s[x-1] == 'o') cout << "FILIPINO\n";
        if(s[x-4] == 'd' && s[x-3] == 'e' && s[x-2] == 's' && s[x-1] == 'u') cout << "JAPANESE\n";
        if(s[x-4] == 'm' && s[x-3] == 'a' && s[x-2] == 's' && s[x-1] == 'u') cout << "JAPANESE\n";
        if(s[x-5] == 'm' && s[x-4] == 'n' && s[x-3] == 'i' && s[x-2] == 'd' && s[x-1] == 'a') cout << "KOREAN\n";
    }
    return 0;
}