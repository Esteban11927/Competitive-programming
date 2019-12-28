#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, m, x = -1, y = -1, cont = 0, aux = 0;
    cin >> n >> m;
    char c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            if(c == 'B') cont++;
            if(c == 'B' && x == -1){
                x = i;
                y = j;
            }
        }
    }
    aux = (sqrt(cont)-1) / 2;
    cout << x+aux+1 << ' ' << y+aux+1 << '\n';
    return 0;
}