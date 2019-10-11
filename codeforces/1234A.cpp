#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long q, n, x, y;
    cin >> q;
    while(q--){
        cin >> n;
        x = 0;
        for(int i = 0; i < n; i++){
            cin >> y;
            x += y;
        }
        while(x%n != 0) x++;
        cout << x/n << '\n';
    }
}