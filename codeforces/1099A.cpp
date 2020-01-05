#include<iostream>
using namespace std;
int main(){
    int w, h, w1, h1, w2, h2;
    cin >> w >> h >> w1 >> h1 >> w2 >> h2;
    for(int i = h; i >= 0; i--){
        w -= (h1 == i ? w1 : 0);
        w -= (h2 == i ? w2 : 0);
        w += i;
        w = max(0, w);
    }
    cout << w << '\n';
    return 0;
}