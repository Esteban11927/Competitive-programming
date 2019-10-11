#include<iostream>
#include<queue>
#include<map>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> qu;
    int n, k, x;
    cin >> n >> k;
    map<int, bool> mapa;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(qu.size() < k && mapa[x] == false){
            qu.emplace(x);
            mapa[x] = true;
        }
        else{
            if(mapa[x] == false){
                mapa[qu.front()] = false;
                mapa[x] = true;
                qu.pop();
                qu.emplace(x);
            }
        }
    }
    int aux = qu.size();
    vector<int> vec;
    for(int i = 0; i < aux; i++){
        vec.emplace_back(qu.front());
        qu.pop();
    }
    cout << vec.size() << '\n';
    for(int i = vec.size()-1; i >= 0; i--){
        cout << vec[i] << ' ';
    }
    cout << '\n';
}