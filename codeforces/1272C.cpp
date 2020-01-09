#include<iostream>
using namespace std;
bool aux[300];
int main(){
    long long int n, k, cont = 0, ans = 0;
    string s;
    char c;
    cin >> n >> k >> s;
    for(int i = 0; i < k; i++){
        cin >> c;
        aux[c] = true;
    }
    for(int i = 0; i < n; i++){
        if(aux[s[i]]) cont++;
        else{
            ans += cont*(cont+1)/2;
            cont = 0;
        }
    }
    ans += cont*(cont+1)/2;
    cout << ans << '\n';
    return 0;
}