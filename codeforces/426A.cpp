#include<iostream>
using namespace std;
int main(){
    int n, s, m = 0, sum = 0, x;
    cin >> n >> s;
    while(n--){
        cin >> x;
        sum += x;
        m = max(m, x);
    }
    cout << (sum-m <= s ? "YES\n" : "NO\n");
    return 0;
}