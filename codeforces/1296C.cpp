#include<iostream>
#include<map>
#include<utility>
using namespace std;
const int tam = 1e6;
int cl, cr, cu, cd;
int main(){
    int t, n;
    char c;
    cin >> t;
    while(t--){
        int l = -1, r = 1e9;
        map<pair<int, int>, int> mapa;
        pair<int, int> last;
        last.first = 0, last.second = 0;
        mapa[last] = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> c;
            if(c == 'R') last.first++;
            if(c == 'L') last.first--;
            if(c == 'U') last.second++;
            if(c == 'D') last.second--;
            if(mapa.count(last) && i-mapa[last]+1 < r-l+1){
                l = mapa[last]+1, r = i+1;
            }
            mapa[last] = i+1;
        }
        cout << l;
        if(l != -1) cout << ' ' << r;
        cout << '\n';
    }
    return 0;
}