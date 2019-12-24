#include<iostream>
using namespace std;
int main(){
    int n, ans = 0;
    char x;
    cin >> n;
    int r[n]; int c[n];
    for(int i = 0; i < n; i++) r[i] = 0;
    for(int i = 0; i < n; i++) c[i] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            if(x == 'C'){
                r[i]++;
                c[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++) ans += ((r[i] * (r[i]-1))/2) + ((c[i] * (c[i]-1))/2);
    cout << ans << '\n';
    return 0;
}