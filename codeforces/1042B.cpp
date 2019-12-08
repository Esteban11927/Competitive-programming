#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    long long int n, x, a = (1e9)*2, b = (1e9)*2, c = (1e9)*2, ab = (1e9)*2, ac = (1e9)*2, bc = (1e9)*2, abc = (1e9)*2, ans = (1e9)*2;
    string s;
    vector<int> A, B, C, AB, AC, BC, ABC;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> s;
        sort(s.begin(), s.end());
        if(s == "A") A.emplace_back(x);
        if(s == "B") B.emplace_back(x);
        if(s == "C") C.emplace_back(x);
        if(s == "AB") AB.emplace_back(x);
        if(s == "AC") AC.emplace_back(x);
        if(s == "BC") BC.emplace_back(x);
        if(s == "ABC") ABC.emplace_back(x);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    sort(AB.begin(), AB.end());
    sort(AC.begin(), AC.end());
    sort(BC.begin(), BC.end());
    sort(ABC.begin(), ABC.end());
    if(A.size()) a = A[0];
    if(B.size()) b = B[0];
    if(C.size()) c = C[0];
    if(AB.size()) ab = AB[0];
    if(AC.size()) ac = AC[0];
    if(BC.size()) bc = BC[0];
    if(ABC.size()) abc = ABC[0];

    ans = min(min(ans, a+b+c), a+bc);
    ans = min(min(ans, a+b+c), a+bc);
    ans = min(min(ans, b+ac), c+ab);
    ans = min(min(ans, ab+abc), ac+abc);
    ans = min(min(ans, ab+abc), ac+abc);
    ans = min(min(ans, bc+abc), a+abc);
    ans = min(min(ans, b+abc), c+abc);
    ans = min(min(ans, ab+ac), ab+bc);
    ans = min(min(ans, bc+ac), ab+bc);
    ans = min(ans, abc);
    if(ans != (1e9)*2) cout << ans << '\n';
    else cout << "-1\n";
    return 0;
}