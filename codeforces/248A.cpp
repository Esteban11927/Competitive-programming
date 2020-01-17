#include<iostream>
using namespace std;
int l[2], r[2];
int main(){
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        l[x]++;
        r[y]++;
    }
    cout << min(l[0], l[1]) + min(r[0], r[1]) << '\n';
    return 0;
}