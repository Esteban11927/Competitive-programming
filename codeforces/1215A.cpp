#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(const int a, const int b){
    return a > b;
}

int main(){
    int a1, a2, k1, k2, n, nn, minimum = 0, maximum = 0;
    vector<int> formin;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    nn = n;
    for(int i = 0; i < a1; i++) formin.emplace_back(k1);
    for(int i = 0; i < a2; i++) formin.emplace_back(k2);
    
    if(min(k1, k2) == k1){
        while(a1 != 0 && n >= k1){
            maximum++;
            a1--;
            n -= k1;
        }
        while(a2 != 0 && n >= k2){
            maximum++;
            a2--;
            n -= k2;
        }
    }
    else{
        while(a2 != 0 && n >= k2){
            maximum++;
            a2--;
            n -= k2;
        }
        while(a1 != 0 && n >= k1){
            maximum++;
            a1--;
            n -= k1;
        }
    }
    n = nn;
    for(int i = 0; i < formin.size(); i++) n -= formin[i] - 1;

    int aux = formin.size();
    if(n < 0) cout << 0;
    else cout << min(n, aux);

    cout << ' ' << maximum << '\n';
    return 0;
}