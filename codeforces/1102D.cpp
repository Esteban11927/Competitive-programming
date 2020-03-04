#include<iostream>
#include<vector>
using namespace std;
const int tam = 3*1e5+100;
int aux[tam], aux2[tam];
int main(){
    int n, c = 0, u = 0, d = 0;
    cin >> n;
    char arr[n];
    for(int i = 0 ;i  < n; i++){
        cin >> arr[i];
        aux[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(aux[arr[i]] > n/3 && aux['0'] < n/3){
            aux[arr[i]]--;
            aux['0']++;
            arr[i] = '0';
        }
    }
    for(int i = 0; i  < n; i++){
        if(c < n/3 && arr[i] == '0'){
            aux2[i]= true;
            c++;
        }
    }
    for(int i = 0; i < n; i++){
        if(aux[arr[i]] > n/3 && aux['1'] < n/3 && aux2[i] == 0){
            aux['1']++;
            aux[arr[i]]--;
            arr[i] = '1';
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(aux[arr[i]] > n/3 && aux['2'] < n/3){
            aux['2']++;
            aux[arr[i]]--;
            arr[i] = '2';
        }
    }
    for(int i = 0; i < n; i++) cout << arr[i];
    cout << '\n';
    return 0;
}