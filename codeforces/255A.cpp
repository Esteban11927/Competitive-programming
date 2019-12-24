#include<iostream>
using namespace std;
int main(){
    int n, chest = 0, biceps = 0, back = 0, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i%3 == 0) chest += x;
        if(i%3 == 1) biceps += x;
        if(i%3 == 2) back += x;
    }
    if(chest > biceps && chest > back) cout << "chest\n";
    if(biceps > chest && biceps > back) cout << "biceps\n";
    if(back > biceps && back > chest) cout << "back\n";
    return 0;
}