#include<iostream>
using namespace std;
int arr[10];
int main(){
    int cont = 0, in, flag = false;
    for(int i = 0; i < 6; i++){
        cin >> in;
        arr[in]++;
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] >= 4) flag = true;
    }
    if(flag){
        for(int i = 0; i < 10; i++) if(arr[i]) cont++;
        if(cont == 1){
            cout << "Elephant\n";
        }
        if(cont == 2){
            flag = false;
            for(int i = 0; i < 10; i++) if(arr[i] == 2) flag = true;
            if(flag) cout << "Elephant\n";
            else cout << "Bear\n";
        }
        if(cont == 3) cout << "Bear\n";
    }
    else cout << "Alien\n";
    return 0;
}