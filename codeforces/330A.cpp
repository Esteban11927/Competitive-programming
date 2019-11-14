#include<iostream>
using namespace std;
int main(){
    int r, c, cont, ans = 0;
    cin >> r >> c;
    char arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        bool flag = false;
        cont = 0;
        for(int j = 0; j < c; j++){
            if(arr[i][j] == '.') cont++;
            if(arr[i][j] == 'S') flag = true;
        }
        if(flag) cont = 0;
        else{
            for(int j = 0; j < c; j++){
                arr[i][j] = '*';
            }
        }
        ans += cont;
    }
    for(int i = 0; i < c; i++){
        bool flag = false;
        cont = 0;
        for(int j = 0; j < r; j++){
            if(arr[j][i] == '.') cont++;
            if(arr[j][i] == 'S') flag = true;
        }
        if(flag) cont = 0;
        else{
            for(int j = 0; j < r; j++){
                arr[j][i] = '*';
            }
        }
        ans += cont;
    }
    cout << ans << '\n';
    return 0;
}