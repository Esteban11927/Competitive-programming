#include<iostream>
using namespace std;
const int tam = 1e5+10;
bool taken[tam];
int main(){
    int n, cont = 0, ans = 0, x;
    cin >> n;
    for(int i = 0; i < 2*n ; i++){
        cin >> x;
        if(taken[x] == false){
            taken[x] = true;
            cont++;
        }
        else cont--;
        ans = max(ans, cont);
    }
    cout << ans << '\n';
    return 0;
}