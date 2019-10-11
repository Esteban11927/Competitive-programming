#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    bool colored[n];
    memset(colored, 0, sizeof colored);
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
    int cont = 0;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        if(colored[i] == false){
            colored[i] = true; cont++;
            for(int j = i; j < n; j++){
                if(arr[j] % arr[i] == 0) colored[j] = true;
            }
        }
    }
    cout << cont << '\n';
}