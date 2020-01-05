#include<iostream>
using namespace std;
int main(){
    int q, l, r;
    cin >> q;
    while(q--){
        cin >> l >> r;
        if(l%2){
            if(r%2){
                cout << -1*l + ((r-l)/2)*-1 << '\n';
            }
            else{
                cout << (r-l+1)/2 << '\n';
            }
        }
        else{
            if(r%2 == 1){
                cout << (r-l+1)/2*-1 << '\n';
            }
            else{
                cout << l+(r-l)/2 << '\n';
            }
        }
    }
    return 0;
}