#include<iostream>
using namespace std;
int main(){
    int n, m, aux = 20000, flag = true;
    cin >> n >> m;
    while(aux--){
        for(int i = 1; i <= n; i++){
            if(m - i >= 0 && flag) m -= i;
            else flag = false;
        }
    }
    cout << m << '\n';
    return 0;
}