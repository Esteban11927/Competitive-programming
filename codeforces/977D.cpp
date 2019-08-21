#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool flag = false;
bool visited[105];
int n;
int arr[105], aux[105];
vector<int> vec;
void check(int q, int idx){
    if(q == n-1){
        flag = true;
        for(int i = 0; i < n - 1; i++){
            vec.emplace_back(aux[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if( flag == false && visited[i] == false){
            if(arr[idx] * 2 == arr[i] || arr[i] * 3 == arr[idx]){
                visited[i] = true;
                aux[idx] = arr[i];
                check(q+1, i);
                visited[i] = false;
            }
        }
    }
    return;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        check(0, i);
        if(flag == true){
            cout << arr[i] << ' ';
            break;
        }
    }
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << ' ';
    cout << '\n';
    return 0;
}