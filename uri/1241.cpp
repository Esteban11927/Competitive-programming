#include<iostream>
using namespace std;
int main(){
    int q;
    string a, b;
    cin >> q;
    while(q--){
        cin >> a >> b;
        if(b.size() > a.size()) cout << "nao encaixa\n";
        else{
            bool aux = false;
            for(int i = 1; i <= min(a.size(), b.size()); i++){
                if(a[a.size() - i] != b[b.size() - i]){
                    cout << "nao encaixa\n";
                    aux = true;
                    break;
                }
            }
            if(!aux) cout << "encaixa\n";
        }
    }
    return 0;
}