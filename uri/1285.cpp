#include<iostream>
using namespace std;

int main(){
    int arr[5001], l, r;
    arr[0] = 0;
    for(int i = 1; i <= 5000; i++){
        arr[i] = arr[i-1];
        if(i < 10) arr[i]++;
        else if(i < 100 && i%10 != (i/10)%10) arr[i]++;
        else if(i < 1000 && i%10 != (i/10)%10 && i%10 != (i/100)%10 && (i/10)%10 != (i/100)%10) arr[i]++;
        else if(i <= 5000 && i%10 != (i/10)%10 && i%10 != (i/100)%10 && i%10 != (i/1000)%10 && (i/10)%10 != (i/100)%10 && (i/10)%10 != (i/1000)%10 && (i/100)%10 != (i/1000)%10) arr[i]++;
    }
    while(cin >> l >> r){
        cout << arr[r] - arr[l-1] << '\n';
    }
    return 0;
}