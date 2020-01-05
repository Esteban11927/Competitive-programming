#include<iostream>
using namespace std;
int main(){
    int n;
    bool r = false, u = false;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if(a[i] != b[i]) r = true;
    }
    if(r) cout << "rated\n";
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]){
                    cout << "unrated\n";
                    return 0;
                }
            }
        }
    }
    if(!r)cout << "maybe\n";
    return 0;
}