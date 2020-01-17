#include<iostream>
#include<math.h>
using namespace std;

int s(int x){
    int ans = 0;
    while(x){
        ans += x%10;
        x /= 10;
    }
    return ans;
}

int main(){
    long long int n, x;
    cin >> n;
    x = sqrt(n);
    while(x != 0 && x*x+x*s(x) != n && abs(ceil(n/x) - x < 2000)){
        x--;
    }
    cout << (x*x+x*(s(x)) != n ? -1 : x) << '\n';
    return 0;
}