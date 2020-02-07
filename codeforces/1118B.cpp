#include<iostream>
using namespace std;
const int tam = 1e6;
int odd[tam], even[tam];
int main(){
    int in, n, ans = 0;
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        odd[i] = odd[i-1]+(i%2 == 1 ? arr[i] : 0);
        even[i] = even[i-1]+(i%2 == 0 ? arr[i] : 0);
    }
    for(int i = 1; i <= n; i++){
        if(i%2 == 1 && odd[i-1]+even[n]-even[i] == even[i-1]+odd[n]-odd[i]) ans++;
        if(i%2 == 0 && even[i-1]+odd[n]-odd[i] == odd[i-1]+even[n]-even[i]) ans++;
    }
    cout << ans << '\n';
    return 0;
}