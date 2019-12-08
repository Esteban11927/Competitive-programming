#include<iostream>
#include<vector>
using namespace std;

vector<int> vec;
int n, m, k, x = 1;

void calculate(){
    for(int i = 0; i < vec.size(); i++){
        while(vec[i]%2 == 0 && vec.size() < k){
            vec[i] >>= 1;
            vec.emplace_back(vec[i]);
        }
    }
    return;
}

int main(){
    cin >> n >> k;
    m = n;
    while(x << 1 <= n) x <<= 1;
    while(m){
        while(x > m) x >>= 1;
        vec.emplace_back(x);
        m -= x;
    }
    if(k <= n){
        calculate();
    }

    if(vec.size() != k) cout << "NO";
    else{
        cout << "YES\n";
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << ' ';
        }
    }
    cout << '\n';
    return 0;
}