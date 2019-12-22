#include<iostream>
using namespace std;
int main(){
    int n, d, x, sum = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }
    if(sum + 10 * (n-1) <= d){
        cout << 2*(n-1) + ((d - sum - (n-1)*10)) / 5 << '\n';
    }
    else cout << "-1\n";
    return 0;
}