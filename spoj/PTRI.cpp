#include<iostream>
#include<vector>
using namespace std;

struct triangle{
    int row;
    int column;
    int prime;
};

const int tam = 1e8+10;
bool sieve[tam];
vector<triangle> vec;

void calsieve(){
    sieve[0] = true;
    sieve[1] = true;
    for(int i = 2; i*i <= 1e8; i++){
        if(!sieve[i]){
            for(int j = i*i; j <= 1e8; j += i){
                sieve[j] = true;
            }
        }
    }
    triangle x;
    for(int i = 0; i <= 1e8; i++){
        if(sieve[i] == false){
            x.prime = i;
            vec.emplace_back(x);
        }
    }
    int temp = vec.size();
    for(int i = 1; i*(i-1) / 2 < temp; i++){
        for(int j = i*(i-1) / 2; j < i*(i+1) / 2 && j < temp; j++){
            vec[j].row = i;
        }
    }
    int cont = 1;
    for(int i = 0; i <= temp; i){
        for(int j = 1; j <= cont; j++ && i++){
            vec[i].column = j;
        }
        cont++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    calsieve();
    int t, n;
    cin >> t;
    while(t--){
        int l = 0, r = vec.size() - 1;
        cin >> n;
        if(sieve[n] == true){
            cout << "-1\n";
            continue;
        }
        while(r - l > 1){
            if(n < vec[(r+l) / 2].prime) r = (r+l) / 2;
            else l = (r+l) / 2;
        }
        if(vec[l].prime == n){
            cout << vec[l].row << ' ' << vec[l].column << '\n';
        }
        else if(vec[r].prime == n){
            cout << vec[r].row << ' ' << vec[r].column << '\n';
        }
    }
    return 0;
}