#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int n, sum = 0;
    vector<int> ans;
    cin >> n;
    cout << (n*(n+1)/2)%2 << '\n';
    sum = n*(n+1)/4;
    while(sum){
        if(n <= sum){
            sum -= n;
            ans.emplace_back(n);
        }
        n--;
    }
    cout << ans.size() << ' ';
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}