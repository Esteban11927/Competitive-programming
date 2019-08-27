#include<iostream>
#include<algorithm>
#include<vector>
const int tam = 1e5+ 20;
bool aux[2][tam];
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        vector<int> Alice, Betty;
        int x;
        for(int i = 0; i < a; i++){
            cin >> x;
            if(aux[0][x] == false){
                aux[0][x] = true;
                Alice.emplace_back(x);
            }
        }
        for(int i = 0; i < b; i++){
            cin >> x;
            if(aux[1][x] == false){
                aux[1][x] = true;
                Betty.emplace_back(x);
            }
        }
        sort(Alice.begin(), Alice.end());
        sort(Betty.begin(), Betty.end());
        for(int i = 0; i < tam; i++){
            aux[0][i] = false;
            aux[1][i] = false;
        }
        int cont = 0;
        for(int i = 0; i < Alice.size(); i++){
            aux[0][Alice[i]] = true;
        }
        for(int i = 0; i < Betty.size(); i++){
            if(aux[0][Betty[i]] == true) cont++;
        }
        cout << min(Alice.size(), Betty.size()) - cont << '\n';
        for(int i = 0; i < tam; i++) aux[0][i] = false;
    }
    return 0;
}