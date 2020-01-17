#include<iostream>
using namespace std;
bool a[11], b[11];
int main(){
    int n, m, x = 10, y = 10, in;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> in;
        a[in]=true;
    }
    for(int i = 0; i < m; i++){
        cin >> in;
        b[in]=true;
    }
    for(int i = 1; i < 10; i++){
        if(a[i] && b[i]){
            cout << i << '\n';
            return 0;
        }
    }
    for(int i = 1; i < 10; i++){
        if(a[i]){
            for(int j = i; j < 10; j++){
                if(b[j]){
                    cout << i << j << '\n';
                    return 0;
                }
            }
        }
        if(b[i]){
            for(int j = i; j < 10; j++){
                if(a[j]){
                    cout << i << j << '\n';
                    return 0;
                }
            }
        }
    }
    return 0;
}