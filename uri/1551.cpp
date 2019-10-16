#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, num;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        map<char, bool> mapa;
        mapa.clear();
        num = 0;
        getline(cin,s);
        for(int i = 0; i < s.size(); i++){
            if(mapa[s[i]] == false && ('a' <= s[i] && s[i] <= 'z')){
                num++;
                mapa[s[i]] = true;
            }
        }
        if(num == 26) cout << "frase completa\n";
        else if(num >= 13) cout << "frase quase completa\n";
        else cout << "frase mal elaborada\n";
    }
    return 0;
}