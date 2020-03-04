#include<iostream>
#include<vector>
using namespace std;
const int tam = 2*1e5+100;
bool aux[tam];
int mat[tam][3];
vector<int> vec;
void go(int x){
    x;
    aux[x] = true;
    if(aux[mat[x][2]] == false){
        vec.emplace_back(mat[x][2]);
        go(mat[x][2]);
    }
    else if(aux[mat[x][0]] == false){
        vec.emplace_back(mat[x][0]);
        go(mat[x][0]);
    }
    return;
}

int main(){
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(mat[a][1] == 0){
            mat[a][1] = a;
            mat[a][2] = b;
        }
        else{
            mat[a][0] = b;
        }
        if(mat[b][1] == 0){
            mat[b][1] = b;
            mat[b][2] = a;
        }
        else{
            mat[b][0] = a;
        }
    }
    vec.emplace_back(1);
    go(1);
    for(int i = 0; i < n; i++) cout << vec[n-i-1] << ' ';
    cout << '\n';
    return 0;
}