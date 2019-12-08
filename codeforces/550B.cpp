#include<iostream>
using namespace std;
int arr[15], n, l, r, x, aux = 1, ans = 0;

int evaluate(int d){
    int cont = 0, sum = 0, easiest = 1e9, hardest = 0;
    for(int i = 0; i < 20; i++){
        if((d >> i) % 2 == 1){
            cont++;
            sum += arr[n-i-1];
            easiest = min(arr[n-i-1], easiest);
            hardest = max(arr[n-i-1], hardest);
        }
    }
    if(l <= sum && sum <= r && cont >= 2 && hardest-easiest >= x) return 1;
    return 0;
}

int main(){
    cin >> n >> l >> r >> x;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        aux *= 2;
    }
    //cout << aux << '\n';
    for(int i = 1; i < aux; i++){
        //cout << i << ' ' << evaluate(i) << '\n';
        ans += evaluate(i);
    }
    cout << ans << '\n';
    return 0;
}