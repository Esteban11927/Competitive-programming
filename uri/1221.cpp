#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    long long n, x;
    cin >> n;
    while(n--){
        cin >> x;
        int root = sqrt(x);
        bool flag = false;
        for(long long i = 2; i <= root; i++){
            if(x%i == 0){
                cout << "Not Prime\n";
                flag = true;
                break;
            }
        }
        if(!flag) cout << "Prime\n";
    }
    return 0;
}