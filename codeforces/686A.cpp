#include<iostream>
using namespace std;
int main(){
    long long int n, q, x, dis = 0;
    char c;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        cin >> c >> x;
        if(c == '+'){
            q += x;
        }
        else{
            if(x <= q){
                q -= x;
            }
            else dis++;
        }
    }
    cout << q << ' ' << dis << '\n';
    return 0;
}