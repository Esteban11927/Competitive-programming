#include<iostream>
#include<vector>
using namespace std;
const int tam = 2e6 + 5;
bool sieve[tam];
vector<int> vec, ans;
void calsieve(){
    for(int i = 2; i*i <= tam; i++){
        if(sieve[i] == false){
            vec.emplace_back(i);
            for(int j = i*i; j <= tam; j += i){
                sieve[j] = true;
            }
        }
    }
    for(int i = 2; i <= tam; i++) if(sieve[i] == false) vec.emplace_back(i);
    int aux = vec.size();
    for(int i = 0; i <= aux; i++){
        if(sieve[i] == false){
            for(int j = i+1; j <= aux; j++){
                ans.emplace_back(vec[i]*vec[j]);
            }
        }
    }
}
int main(){
    calsieve();
    cout << vec.size() << ' ' << ans.size() << '\n';
    return 0;
}