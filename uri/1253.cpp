#include<iostream>
using namespace std;
int main(){
    int q, n;
    string s, t;
    s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin >> q;
    while(q--){
        cin >> t >> n;
        for(int i = 0; i < t.size(); i++){
            if((int (t[i] - 'A')) - n < 0){
                cout << char (t[i] - n + 26);
            }
            else{
                cout << char (t[i] - n);
            }
        }
        cout << '\n';
    }
    return 0;
}