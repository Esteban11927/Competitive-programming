#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, x;

bool compare1(const int a, const int b){
    if(a%m != b%m) return a%m < b%m;
    if(a%m == b%m){
        if(abs(a)%2 != abs(b)%2){
            return abs(a)%2 > abs(b)%2;
        }
        if(a%2 != 0 && b%2 != 0){
            return a > b;
        }
        if(a%2 == 0 && b%2 == 0){
            return a < b;
        }
    }
}

int main(){
    while(cin >> n >> m){
        vector<int> vec;
        for(int i = 0; i < n; i++){
            cin >> x;
            vec.emplace_back(x);
        }
        sort(vec.begin(), vec.end(), compare1);
        cout << n << ' ' << m << '\n';
        for(int i = 0; i < n; i++){
            cout << vec[i] << '\n';
        }
    }
    return 0;
}