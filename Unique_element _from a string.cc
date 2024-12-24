#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    map<char,int>uni;

    for(int i=0;i<s.size();i++){
        uni[s[i]]++;
    }
    int total=0;
    for(auto &it :uni){
        int count=it.second;
        total+=min(count, 1);
    }


        cout<<total<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
