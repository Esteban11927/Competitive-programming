#include<iostream>
using namespace std;
int main(){
    int t, s, i, e;
    cin >> t;
    while(t--){
        cin >> s >> i >> e;
        if(s <= i){
            int temp = min((i+1) - s, e);
            s += temp;
            e -= temp;
        }
        if(s <= i){
            cout << "0\n"; continue;
        }
        cout << min(e+1, ((s+e+1) - i) / 2) << '\n';
    }
    return 0;
}