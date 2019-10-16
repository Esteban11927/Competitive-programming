#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n){
        string s[n];
        int maxtam = 0;
        for(int i = 0; i < n; i++){
            cin >> s[i];
            int x = s[i].size();
            maxtam = max(x, maxtam);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < maxtam - s[i].size(); j++){
                cout << ' ';
            }
            cout << s[i] << '\n';
        }
        cin >> n;
        if(n != 0)  cout << '\n';
    }
}