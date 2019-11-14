#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, x, cont = 0;
    map<int, bool> mapa;
    while(cin >> n){
        cont  = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(!mapa[x] && x != 0) cont++;
            mapa[x] = true;
        }
        cout << cont << '\n';
        mapa.clear();
    }
    return 0;
}