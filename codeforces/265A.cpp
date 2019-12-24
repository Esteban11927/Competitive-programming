#include<iostream>
using namespace std;
int main(){
    string s, t;
    int p = 0;
    cin >> s >> t;
    int n = s.size();
    for(int i = 0; i < t.size(); i++){
        if(s[p] == t[i]) p++;
    }

    cout << min(p+1, n) << '\n';
    return 0;
}