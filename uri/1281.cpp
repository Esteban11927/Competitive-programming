#include<iostream>
#include<map>
#include<iomanip>
using namespace std;
int main(){
    int q, n, p;
    double x;
    string s;
    cin >> q;
    while(q--){
        map<string, double> mapa;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> s >> x;
            mapa[s] = x;
        }
        cin >> p;
        double ans = 0;
        for(int i = 0; i < p; i++){
            cin >> s >> x;
            ans += mapa[s] * x;
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << ans << '\n';
    }
    return 0;
}