#include<iostream>
using namespace std;
int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    while((n >= 2 && m >= 1) || (n >= 1 && m >= 2)){
        if(n > m){
            n -= 2;
            m--;
        }
        else{
            n--;
            m -= 2;
        }
        ans++;
    }
    cout << ans << '\n';
    return 0;
}