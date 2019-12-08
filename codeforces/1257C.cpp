#include<iostream>
#include<string.h>
using namespace std;
int previous[200100];
int main(){
    int t, n;
    cin >> t;
    //zcout << '\n' << '\n';
    while(t--){
        cin >> n;
        int a, ans = 1e9;
        for(int i = 1; i <= n; i++){
            cin >> a;
            if(previous[a] != 0) ans = min(ans, i - (previous[a] - 1));
            previous[a] = i;
        }
        cout << (ans == 1e9 ? -1 : ans) << '\n';
        memset(previous, 0, sizeof previous);
    }
    return 0;
}