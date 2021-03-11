#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

void solve() {
    int n;
    string s, m;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> m;
        sort(m.begin(),m.end());
        s+=m[0];
    }
    sort(s.begin(),s.end());
    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
