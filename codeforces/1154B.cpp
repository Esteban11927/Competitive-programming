#include<iostream>
#include<vector>
#include<algorithm>
bool aux[200];
using namespace std;
int main(){
    int n, x, d = -1;
    vector<int> vec;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(aux[x] == false) vec.emplace_back(x);
        aux[x] = true;
    }
    sort(vec.begin(), vec.end());
    if(vec.size() == 3 && vec[1]-vec[0] == vec[2]-vec[1]) d = vec[1]-vec[0];
    if(vec.size() == 2) d = ((vec[1]-vec[0])%2 == 0 ? (vec[1]-vec[0])/2 : vec[1]-vec[0]);
    if(vec.size() == 1) d = 0;
    cout << d << '\n';
    return 0;
}