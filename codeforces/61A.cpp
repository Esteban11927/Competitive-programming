#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    while(cin >> s1 >> s2){
        int n = s1.size();
        for(int i = 0; i < n; i++){
            if(s1[i] == s2[i]) cout << '0';
            else cout << '1';
        }
        cout << '\n';
    }
    return 0;
}