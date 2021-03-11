// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long int
#define ld long double
#define str string
#define F first
#define S second
#define all(x) begin(x), end(x)
#define pb push_back
#define mp make_pair

const int mxN=1e5;
ull p, a, b, c;

void solve() {
    cin >> p >> a >> b >> c;
    if(p%a==0 || p%b==0 || p%c==0) {
        cout << "0\n";
        return;
    }
    ull la=a-(p%a), lb=b-(p%b), lc=c-(p%c);
    //cout << la << ' ' << lb << ' ' << lc << "\n";
    cout << min(la, min(lb, lc)) << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

	return 0;
}
