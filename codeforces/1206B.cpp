#include<iostream>
using namespace std;
int main(){
    long long n, ans = 0, zero = 0, negative = 0;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) zero++;
        else if(arr[i] < 0){
            negative++;
            ans += abs(arr[i] + 1);
        }
        else ans += arr[i] - 1;
    }
    if( negative%2 == 1 ){
        if(zero){
            zero--;
            ans++;
        }
        else ans += 2;
    }
    cout << ans+zero << '\n';

    return 0;
}