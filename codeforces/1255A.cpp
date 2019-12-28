#include<iostream>
using namespace std;
int main(){
    int a, b, n, t;
    cin >> t;
    while(t--){        
        cin >> a >> b;
        n = abs(a-b);
        //cout << n/5 << ' ' << ((n-((n/5)*5)) / 2) << ' ' << (n - (((n-((n/5)*5)) / 2) * 2)) << '\n';
        cout << (n/5) + ((n-((n/5)*5)) / 2) + (n - ((n/5)*5) - ((n-((n/5)*5)) / 2) * 2 ) << '\n';
    }
    return 0;
}
