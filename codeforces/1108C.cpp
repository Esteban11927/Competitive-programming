#include<iostream>
using namespace std;
int main(){
    int n, ans = 1e9;
    string s, a = "RGB", b = "RBG", sans;
    cin >> n >> s;
    for(int i = 0; i < 3; i++){
        int cont = 0;
        string aux;
        for(int j = 0; j < n; j++){
            if(a[(i+j)%3] != s[j]){
                cont++;
            }
            aux += a[(i+j)%3];
        }
        if(cont < ans){
            ans = cont;
            sans = aux;
        }
    }
    for(int i = 0; i < 3; i++){
        int cont = 0;
        string aux;
        for(int j = 0; j < n; j++){
            if(b[(i+j)%3] != s[j]){
                cont++;
            }
            aux += b[(i+j)%3];
        }
        if(cont < ans){
            ans = cont;
            sans = aux;
        }
    }
    cout << ans << '\n' << sans << '\n';
    return 0;
}