#include<iostream>
using namespace std;
int main(){
    int n, k, ans = 1e9, in;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(k%in == 0) ans = min(ans, k/in);
    }
    cout << ans << '\n';
    return 0;
}