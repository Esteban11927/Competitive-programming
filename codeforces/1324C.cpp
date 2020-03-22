#include<iostream>
using namespace std;
int main(){
    int n, m;
    string s;
    cin >> n;
    while(n--){
        int ans = 0, cont = 1;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L') cont++;
            else cont = 1;
            ans = max(ans, cont);
        }
        cout << ans << '\n';
    }
    return 0;
}