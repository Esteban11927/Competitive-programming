#include<iostream>
#include<algorithm>
using namespace std;
bool compare(const int a, const int b){
    return a > b;
}
int main(){
    int k, arr[12], ans = 0, cont = 0;
    cin >> k;
    for(int i = 0; i < 12; i++){
        cin >> arr[i];
    }
    sort(arr, arr+12, compare);
    for(int i = 0; i < 12; i++){
        if(cont < k){
            ans++;
            cont += arr[i];
        }
    }
    if(cont >= k) cout << ans << '\n';
    else cout << "-1\n";
}