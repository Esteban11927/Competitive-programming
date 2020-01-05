#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i =0 ; i <n; i++){
        bool flag = false;
        cout << s[i];
        while((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'y') && i < n){
            i++;
            flag = true;
        }
        if(flag && i < n) cout << s[i];
    }
    cout << '\n';
    return 0;
}