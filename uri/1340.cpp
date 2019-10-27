#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int n, op, x, a, b, c;
    while(cin >> n){
        bool qu = true, pq = true, st = true;
        queue<int> q;
        stack<int> s;
        priority_queue<int> p;
        for(int i = 0; i < n; i++){
            cin >> op >> x;
            if(op == 1){
                q.emplace(x);
                s.emplace(x);
                p.emplace(x);
            }
            else{
                a = q.front();
                b = s.top();
                c = p.top();
                q.pop();
                s.pop();
                p.pop();
                if(a != x){
                    qu = false;
                }
                if(b != x){
                    st = false;
                }
                if(c != x){
                    pq = false;
                }
            }
        }
        int sum = qu + st + pq;
        if(sum == 2) cout << "It can be more than one of the three data structures mentioned above.\n";
        else if(!sum) cout << "impossible\n";
        else if(sum == 3) cout << "It can't be a stack, a queue or a priority queue.\n";
        else if(st){
            if(sum > 1) cout << "stack\n";
            else cout << "It's definitely a stack.\n";
        }
        else if(qu){
            if(sum > 1) cout << "queue\n";
            else cout << "It's definitely a queue.\n";
        }
        else if(pq){
            if(sum > 1) cout << "priority queue\n";
            else cout << "It's definitely a priority queue.\n";
        }
    }
    return 0;
}