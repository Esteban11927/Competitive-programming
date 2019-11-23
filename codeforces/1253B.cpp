#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int n, cont = 0;
    cin >> n;
    int arr[n];
    vector<int> vec;
    map<int, int> mapa;
    bool noans = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0) cont++;;
        if(arr[i] < 0) cont--;
        if(cont == 0 && vec.size() == 0) vec.emplace_back(i);
        if(cont == 0 && i > 0) vec.emplace_back(i - vec[i-1]);
    }
    cont = 0;
    int summatory = 0;
    for(int i = 0; i < vec.size(); i++){
        summatory += vec[i];
    }
    cout << summatory << '\n';
    if(summatory < n-1) noans = true;
    for(int i = 0; i < vec.size(); i++){
        if(i == 0){
            for(int j = 0; j < vec[i]; j++){
                if(arr[j] > 0){
                    cont++;
                    mapa[abs(arr[j])]++;
                }
                else if(arr[j] < 0){
                    cont--;
                    //mapa[abs(arr[j])]--;
                }
                if(cont < 0 || mapa[arr[j]] >= 2) noans = true;
                //cout << arr[j] << ' ' << mapa[arr[j]] << '\n';
            }
        }
        else{
            for(int j = vec[i-1]; j < vec[i]; j++){
                if(arr[j] > 0){
                    cont++;
                    mapa[abs(arr[j])]++;
                }
                else if(arr[j] < 0){
                    cont--;
                    //mapa[abs(arr[j])]--;
                }
                if(cont < 0 || mapa[abs(arr[j])] >= 2) noans = true;
                //cout << arr[j] << ' ' << mapa[arr[j]] << '\n';
            }
        }
        mapa.clear();
    }
    int size = 0, summ = 0;
    for(int i = 0; i < vec.size(); i++){
        summ += vec[i];
        if(summ <= n) size++;
    }
    int sum = 0;
    if(noans || vec.size() == 0) cout << "-1\n";
    else{
        cout << size << '\n';
        for(int i = 0; i < vec.size(); i++){
            sum += vec[i]+1;
            if(sum <= n) cout << vec[i]+1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}