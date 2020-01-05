#include<iostream>
using namespace std;
int aux[3000];
int main(){
    int n, x, sum = 0, in, ans = 0;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> in;
        aux[in+1000] = true;
        sum += in;
    }
    if(sum < 0) sum *= -1;
    ans += sum/x;
    sum -= sum/x * x;
    cout << ans+(sum > 0) << '\n';
    return 0;
}