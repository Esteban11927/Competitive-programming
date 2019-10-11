#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int q, abcdario[30], aux;
    string s, t;
    cin >> q;
    while(q--){
        aux = 0;
        cin >> s;
        cin >> t;
        memset(abcdario, 0, sizeof abcdario);
        for(int i = 0; i < s.size(); i++){
            abcdario[ (int) (s[i] - 'a') ]++;
        }
        for(int i = 0; i < t.size(); i++){
            if(abcdario[ (int) (t[i] - 'a') ] > 0){
                cout << "YES\n";
                aux = 1;
                break;
            }
        }
        if(aux == 0) cout << "NO\n";
    }
    return 0;
}