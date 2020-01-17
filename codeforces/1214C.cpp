#include<iostream>
using namespace std;
int main(){
    int n, l = -1, r = -1, cont = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') cont++;
        else cont--;
        if(cont == -2){
            cout << "NO\n";
            return 0;
        }
    }
    if(cont == 0) cout << "YES\n";
    else cout << "No\n";
    return 0;
}