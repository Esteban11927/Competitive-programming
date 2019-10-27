#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
    int q, n, a, b, uno, cero;
    cin >> q;
    while(q--){
        uno = 0; dos = 0;
        vector<pair<int, int>> vec;
        cin >> n;
        string s;
        for(int i = 0; i < n; i++){
            cin >> s;
            a = 0; b = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[i] == '1') a++, uno++;
                else b++, cero;
            }
            vec.push_back({a, b});
        }
        
    }
    return 0;
}