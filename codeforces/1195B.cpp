#include<iostream>
using namespace std;
long long int gauss(long long int n){
    return (n*(n+1))/2;
}
int main(){
    long long int n, k;
    cin >> n >> k;
    long long int l = 0, r = n, mid = 1;
    while(r-l > 1){
        mid = (l+r)/2;
        if(gauss(mid)-abs(n-mid) == k) break;
        if(gauss(mid)-abs(n-mid) > k) r = mid;
        else l = mid;
    }
    cout << n-mid << '\n';
}