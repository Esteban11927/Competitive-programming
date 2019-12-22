#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int l = n, r = n, sl = -1, sr = 1;
    for(int i = 0; i <= n*2; i++){
        int out = 0;
        for(int j = 0; j <= n*2; j++){
            if(l <= j && j <= r){
                cout << out;
                if(j != r) cout << ' ';
                if(j < n) out++;
                else out--;
            }
            else if(j < r) cout << "  ";
        }
        cout << '\n';
        if(i < n){
            l--;
            r++;
        }
        else{
            l++;
            r--;
        }
    }
    return 0;
}