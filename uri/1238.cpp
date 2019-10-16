#include<iostream>
using namespace std;
int main(){
    int n;
    string a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b;
        c = a + b;
        int l = 0, r = a.size();
        for(int i = 0; i < max(a.size(), b.size()); i++){
            if(l < a.size()){
                cout << c[l++];
            }
            if(r < c.size()){
                cout << c[r++];
            }
        }
        cout << '\n';
    }
    return 0;
}