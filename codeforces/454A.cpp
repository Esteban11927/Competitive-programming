#include<iostream>
using namespace std;
int main(){
    int n, l, r;
    cin >> n;
    l = n/2; r = n/2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(l <= j && j <= r) cout << 'D';
            else cout << '*';
        }
        cout << '\n';
        l += (i < n/2 ? -1 : 1);
        r += (i < n/2 ? 1 : -1);
    }
    cout << '\n';
    return 0;
}