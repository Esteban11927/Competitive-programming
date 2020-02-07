#include<iostream>
using namespace std;
int cont[1000000];
bool used[1000000];
int main(){
    int n, c = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cont[arr[i]]++;
        c = (cont[arr[i]] >= cont[c] ? arr[i] : c);
    }
    cout << n-cont[c] << '\n';
    for(int i = 0; i < n; i++){
        if(arr[i] == c){
            for(int j = i-1; j >= 0; j--){
                if(used[j] || arr[j] == c) break;
                used[j+1] = true;
                used[j] = true;
                cout << (arr[i] > arr[j] ? "1 " : "2 ") << j+1 << ' ' << j+2 << '\n';
            }
            for(int j = i+1; j < n; j++){
                if(used[j] || arr[j] == c) break;
                used[j-1] = true;
                used[j] = true;
                cout << (arr[i] > arr[j] ? "1 " : "2 ") << j << ' ' << j+1 << '\n';
            }
        }
    }
    return 0;
}