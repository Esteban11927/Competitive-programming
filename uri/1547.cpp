#include<iostream>
using namespace std;
int main(){
    int n, a, b, x, ans, z;
    cin >> n;
    while(n--){
        z = 2e9;
        cin >> a >> b;
        for(int i = 0; i < a; i++){
            cin >> x;
            if(abs(x - b) < z){
                z = abs(x - b);
                ans = i+1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}