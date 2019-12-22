#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main(){
    int n, x, y, ans = 0;
    map<pair<int, int>, int> mapa;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        mapa[make_pair(x, y)]++;
        ans = max(ans, mapa[make_pair(x, y)]);
    }
    cout << ans << '\n';
    return 0;
}