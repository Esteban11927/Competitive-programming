#include<iostream>
using namespace std;
int main(){
    int q, n, k;
    cin >> q;
    while(q--){
        cin >> n >> k;
        int a[n], cont = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            cont += a[i]%2;
        }
        if(cont >= k && cont%2 == k%2){
            int aux = 0;
            cout << "YES\n";
            for(int i = 0; i < n; i++){
                if(a[i]%2 && aux < k-1){
                    cout << i+1 << ' ';
                    aux++;
                }
            }
            cout << n << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}