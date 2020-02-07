#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int t, n, a, b, c;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long int> div;
        for(long long int i = 2; i*i <= n; i++){
            if(n%i == 0){
                div.emplace_back(i);
                div.emplace_back(n/i);
            }
        }
        for(long long int &aa : div){
            for(long long int &bb: div){
                long long int cc = n/(aa*bb);
                if(n > aa*bb && n%(aa*bb) == 0 && aa != bb && aa != cc && bb != cc){
                    a = aa;
                    b = bb;
                    c = cc;
                }
            }
        }
        if(a*b*c == n && a > 1 && b > 1 && c > 1) cout << "YES\n" << a << ' ' << b << ' ' << c << '\n';
        else cout << "NO\n";
    }
    return 0;
}