#include<iostream>
using namespace std;
int main(){
    int a, b, c, x, aux = 0;
    cin >> a >> b >> c;
    x = min(min(a/3, b/2), c/2);
    a -= x*3; b -= x*2; c -= x*2;
    for(int i = 0; i < 7; i++){
        int sum = 0, u = a, v = b, w = c;
        for(int j = 0; j < 7; j++){
            if((j+i)%7 == 0 || (j+i)%7 == 3 || (j+i)%7 == 6){
                if(u)u--;
                else break;
                sum++;
            }
            if((j+i)%7 == 1 || (j+i)%7 == 5){
                if(v)v--;
                else break;
                sum++;
            }
            if((j+i)%7 == 2 || (j+i)%7 == 4){
                if(w)w--;
                else break;
                sum++;
            }
            aux = max(aux, sum);
        }
    }
    cout << x*7+aux << '\n';
    return 0;
}