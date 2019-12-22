#include<iostream>
using namespace std;
int main(){
    int n, tf = 0, f = 0, h = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(arr[i] == 25) tf++;
        if(arr[i] == 50){
            if(tf >= 1){
                tf--;
                f++;
            }
            else{
                cout << "NO\n";
                return 0;
            }
        }
        if(arr[i] == 100){
            if(f >= 1 && tf >= 1){
                f--;
                tf--;
            }
            else if(tf >= 3) tf -= 3;
            else{
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}