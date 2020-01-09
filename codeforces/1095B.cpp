#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &c : a) cin >> c;
    sort(a, a+n);
    cout << min(a[n-2] - a[0], a[n-1] - a[1]) << '\n';
    return 0;
}