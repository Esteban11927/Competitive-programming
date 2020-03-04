#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n, k;
    vector<int> vec;
    cin >> n >> k;
    int arr[n];
    set<int> s[6000];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int aux = 1;
    for(int i = 0; i < n; i++){
        if(aux <= k){
            vec.push_back(aux);
            s[arr[i]].insert(aux++);
        }
        else{
            for(int j = 1; j <= k; j++){
                if(s[arr[i]].find(j) == s[arr[i]].end()){
                    s[arr[i]].insert(j);
                    vec.push_back(j);
                    break;
				}            
            }
        }
    }
    if(vec.size() == n){
    	cout << "YES\n";
    	for(int i = 0; i < n; i++) cout << vec[i] << ' ';
	}
	else cout << "NO";
    cout << '\n';
    return 0;
}