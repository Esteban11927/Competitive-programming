#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n = 0;
    string s, ss, sss;
    cin >> n;
    while(n){
        if(n == 0) break;
        vector<string> brancop, brancom, brancog;
        vector<string> vermelhop, vermelhom, vermelhog;
        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, sss);
            cin >> s >> ss;
            if(s == "branco" && ss == "P") brancop.emplace_back(sss);
            if(s == "branco" && ss == "M") brancom.emplace_back(sss);
            if(s == "branco" && ss == "G") brancog.emplace_back(sss);
            if(s == "vermelho" && ss == "P") vermelhop.emplace_back(sss);
            if(s == "vermelho" && ss == "M") vermelhom.emplace_back(sss);
            if(s == "vermelho" && ss == "G") vermelhog.emplace_back(sss);
        }
        sort(brancop.begin(), brancop.end());
        sort(brancom.begin(), brancom.end());
        sort(brancog.begin(), brancog.end());
        sort(vermelhop.begin(), vermelhop.end());
        sort(vermelhom.begin(), vermelhom.end());
        sort(vermelhog.begin(), vermelhog.end());
        for(int i = 0; i < brancop.size(); i++){
            cout << "branco P " << brancop[i] << '\n';
        }
        for(int i = 0; i < brancom.size(); i++){
            cout << "branco M " << brancom[i] << '\n';
        }
        for(int i = 0; i < brancog.size(); i++){
            cout << "branco G " << brancog[i] << '\n';
        }

        for(int i = 0; i < vermelhop.size(); i++){
            cout << "vermelho P " << vermelhop[i] << '\n';
        }
        for(int i = 0; i < vermelhom.size(); i++){
            cout << "vermelho M " << vermelhom[i] << '\n';
        }
        for(int i = 0; i < vermelhog.size(); i++){
            cout << "vermelho G " << vermelhog[i] << '\n';
        }
        cin >> n;
        if(n)  cout << '\n';
    }
    return 0;
}