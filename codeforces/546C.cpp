#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n, k1, k2, x;
    queue<int> q1, q2;
    cin >> n;
    cin >> k1;
    for(int i = 0; i < k1; i++){
        cin >> x;
        q1.emplace(x);
    }
    cin >> k2;
    for(int i = 0; i < k2; i++){
        cin >> x;
        q2.emplace(x);
    }
    for(int i = 0; i < 1000; i++){
        if(q1.front() > q2.front()){
            q1.emplace(q2.front());
            q1.emplace(q1.front());
            q1.pop();
            q2.pop();
            if(q2.size() == 0){
                cout << i+1 << ' ' << "1\n";
                return 0;
            }
        }
        else{
            q2.emplace(q1.front());
            q2.emplace(q2.front());
            q2.pop();
            q1.pop();
            if(q1.size() == 0){
                cout << i+1 << ' ' << "2\n";
                return 0;
            }
        }
    }
    cout << "-1\n";
    return 0;
}