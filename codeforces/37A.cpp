#include<iostream>
using namespace std;
int aux[2000];
int main(){
    int n, ans1 = 0, ans2 = 0, in;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(aux[in] == 0) ans2++;
        aux[in]++;
        ans1 = max(ans1, aux[in]);
    }
    cout << ans1 << ' ' << ans2 << '\n';
    return 0;
}