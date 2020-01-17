#include<iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    bool aux[4];
    aux[1] = true, aux[2] = true, aux[3] = false;
    while(n--){
        cin >> x;
        if(!aux[x]){
            cout << "NO\n";
            return 0;
        }
        int temp;
        if(!aux[1]) temp = 1;
        if(!aux[2]) temp = 2;
        if(!aux[3]) temp = 3;
        if(aux[1] && x != 1) aux[1] = false;
        if(aux[2] && x != 2) aux[2] = false;
        if(aux[3] && x != 3) aux[3] = false;
        aux[temp] = true;
    }
    cout << "YES\n";
    return 0;
}