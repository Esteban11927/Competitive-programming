#include<iostream>
using namespace std;
int main(){
    int n, m, aodd = 0, bodd = 0, aeven = 0, beven = 0, a, b;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a%2 == 1) aodd++;
        else aeven++;
    }
    for(int i = 0; i < m; i++){
        cin >> b;
        if(b%2 == 1) bodd++;
        else beven++;
    }
    cout << min(aodd, beven) + min(aeven, bodd) << '\n';

    return 0;
}