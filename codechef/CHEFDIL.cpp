#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cont = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') cont++;
        }
        if(cont % 2) cout << "WIN\n";
        else cout << "LOSE\n";
    }
    return 0;
}