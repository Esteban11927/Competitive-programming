#include<iostream>
using namespace std;
int main(){
    int l = 0, r = 1; 
    string s;
    cin >> s;
    for(l = 0; l < s.size(); l++){
        if(s[l] != 'a') break;
    }
    for(r = l; r < s.size(); r++){
        if(s[r] == 'a') break;
    }
    if(s[r] == 'a') r--;
    if(l == r && l >= s.size()){
        //it means that the strings is full of 'a' like "aaaaaaaaa"
        for(int i = 0; i < s.size()-1; i++) cout << s[i];
        cout << 'z';
    }
    else{
        for(int i = 0; i < s.size(); i++){
            if(l <= i && i <= r){
                cout << (char)(s[i]-1);
            }
            else cout << (char)(s[i]);
        }
    }
    cout << '\n';
    return 0;
}