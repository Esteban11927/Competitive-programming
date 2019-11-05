#include<iostream>
using namespace std;

long long cal(string s, int index){
    for(int i = index; i < s.size()-1; i++){
        if((s[i] == 'u' && s[i+1] == 'u') || (s[i] == 'n' && s[i+1] == 'n')){
            if(i+2 < s.size()){
                if(s[i+2] != s[i+1]) return (2 * cal(s, i + 2));
            }
        }
    }
    return 1;
}

int main(){
    string s;
    cin >> s;
    int ans = cal(s, 0);
    cout << ans << '\n';
    return 0;
}