#include<iostream>
using namespace std;
int main(){
    int n, ans = 0, energy = 0;
    cin >> n;
    int h[n+1];
    h[0] = 0;
    for(int i = 1; i <= n; i++) cin >> h[i];
    for(int i = 0; i < n; i++){
        energy += h[i] - h[i+1];
        if(energy < 0){
            ans -= energy;
            energy = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}