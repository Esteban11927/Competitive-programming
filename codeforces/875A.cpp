#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int digsum(int n){
    int x = n, ans = 0;
    while(x){
        ans += x%10;
        x /= 10;
    }
    return ans;
}

int main(){
    int n, a;
    cin >> n;
    a = n;
    vector<int> vec;
    while(n - a <= 100000 && a != 0){
        if(digsum(a) + a == n) vec.emplace_back(a);
        a--;
    }
    sort(vec.begin(), vec.end());
    cout << vec.size() << '\n';
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << '\n';
    }
    return 0;
}