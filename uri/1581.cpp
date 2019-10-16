#include<iostream>
#include<map>
using namespace std;
int main(){
    int q, n;
    string s;
    cin >> q;
    while(q--){
        int cont = 0;
        cin >> n;
        map<string, bool> mapa;
        for(int i = 0; i < n; i++){
            cin >> s;
            if(mapa[s] == false){
                mapa[s] = true;
                cont++;
            }
        }
        if(cont >= 2) cout << "ingles\n";
        else cout << s << '\n';
    }
    return 0;
}