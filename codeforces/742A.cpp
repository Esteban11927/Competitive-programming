#include<iostream>
using namespace std;
int main(){
    int n, arr[4] = {8, 4, 2, 6};
    cin >> n;
    cout << (n == 0 ? 1 : arr[n - ((n/4)*4) - (n%4 == 0 ? -3 : 1)]) << '\n';
}

//1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4
//8 4 2 6 8 4 2 6 8 4 2 6 8 4 2 6