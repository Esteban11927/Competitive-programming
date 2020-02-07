#include<iostream>
using namespace std;
int main(){
    int t, n, in;
    cin >> t;
    while(t--){
        cin >> n;
        int sum = 0;
        bool odd = true, even = true;
        for(int i = 0; i < n; i++){
            cin >> in;
            if(in%2) even = false;
            else odd = false;
            sum += in;
        }
        if(odd && sum%2 == 1) cout << "YES\n";
        else if(odd && sum%2 == 0) cout << "NO\n";
        else if(even) cout << "NO\n";
        else if(odd == false && even == false){
            cout << "YES\n";
        }
    }
    return 0;
}