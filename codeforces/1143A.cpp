#include<iostream>
using namespace std;
int main(){
    int n, x, left = 0, right = 0;
    cin >> n;
    for(int i = 0; i <n ; i++){
        cin >> x;
        left = (x == 0 ? i : left);
        right = (x == 1 ? i : right);
        //cout << left << ' ' << right << '\n';
    }
    cout << min(left, right) + 1 << '\n';
    return 0;
}