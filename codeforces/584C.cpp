#include<iostream>
using namespace std;
int main(){
    int n, t, cont = 0, x;
    string s1, s2;
    cin >> n >> t >> s1 >> s2;
    x = t;
    t = n-t;
    char ans[n];
    for(int i = 0; i < n; i++){
        for(char c = 'a'; c <= 'z'; c++){
            if(c != s1[i] && c != s2[i]){
                ans[i] = c;
                cont++;
                break;
            }
        }
    }
    //ans[i] != s1[i] && ans[i] != s2[i]
    for(int i = 0; i < n; i++){
        if(s1[i] == s2[i] && t){
            ans[i] = s1[i];
            t--;
        }
    }
    //if necessary, i change ans[i] to ans[i] = s1[i] = s2[i]
    int i;
    int a = t, b = t;
    for(i = 0; i < n; i++){
        if(a == 0) break;
        if(s1[i] != s2[i] && a){
            for(char c = 'a'; c <= 'z'; c++){
                if(c == s1[i] && c != s2[i]){
                    ans[i] = c;
                    a--;
                    break;
                }
            }
        }
    }
    //make ans[i] = s1[i] && ans[i] != s2
    for(i; i < n; i++){
        if(s1[i] != s2[i] && b){
            for(char c = 'a'; c <= 'z'; c++){
                if(c != s1[i] && c == s2[i]){
                    ans[i] = c;
                    b--;
                    break;
                }
            }
        }
    }
    //make ans[i] = s2[i] && ans[i] != s1
    int conta = 0, contb = 0;
    for(int i = 0; i < n; i++) if(ans[i] != s1[i]) conta++;
    for(int i = 0; i < n; i++) if(ans[i] != s2[i]) contb++;
    //decide if there is a correct answer
    if(conta == x && contb == x){
        for(int i = 0; i < n; i++) cout << ans[i];
        cout << '\n';
    }
    else cout << "-1\n";
    //if there is answer, print it, else, print -1
    return 0;
}