#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n], swapeado[n];
        memset(swapeado, 0, sizeof swapeado);
        for(int i = 0; i < n; i++) cin >> arr[i];

        for(int i = n-2; i >= 0; i--){
            for(int j = i; j < n-1; j++){
                if(arr[j] > arr[j+1] && !swapeado[j]){
                    swapeado[j] = true;
                    swap(arr[j], arr[j+1]);
                }
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}