#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<long long int> vec;
    long long int aux = 1;
    while(aux < 1e18){
        vec.emplace_back(aux);
        aux *= 3;
    }
    for(int i = 0; i < 10; i++) cout << vec[i] << ' ';
    cout << '\n';
    return 0;
}