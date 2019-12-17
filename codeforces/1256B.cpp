#include<iostream>
#include<string.h>
using namespace std;
bool swapeado[100];
int main(){
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        for(int i = 0; i < n; i++){
            for(int j = n-1; j > 0; j--){
                if(arr[j-1] > arr[j] && swapeado[j-1] == false){
                    swap(arr[j-1], arr[j]);    
                    swapeado[j-1] = true;
                }
            }
        }
        
        for(int i = 0; i < n; i++) cout << arr[i] << ' ';
        cout << '\n';

        memset(swapeado, 0, sizeof(swapeado));
    }
    return 0;
}