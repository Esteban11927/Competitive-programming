#include<iostream>
using namespace std;
int q, n;
bool clockwise(int start, int *arr){
    for(int i = 0; i < n; i++){
        if((arr[(start + i) % n]) == i+1) continue;
        return false;
    }
    return true;
}
bool counterclockwise(int start, int *arr){
    for(int i = 0; i < n; i++){
        if((arr[(start + i) % n]) == n - i) continue;
        return false;
    }
    return true;
}
int main(){
    cin >> q;
    while(q--){
        int start;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1) start = i;
        }
        if(clockwise(start, arr)){
            cout << "YES\n";    continue;
        }
        if(counterclockwise(start+1, arr)){
            cout << "YES\n";    continue;
        }
        else cout << "NO\n";
    }
    return 0;
}