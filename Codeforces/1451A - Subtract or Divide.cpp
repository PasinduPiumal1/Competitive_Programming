#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

ll n;

void solve() {
	cin >> n;
	if(n==1) {
		cout << 0 << "\n";
	} else if(n==2) {
		cout << 1 << "\n";
	} else if(n==3) {
		cout << 2 << "\n";
	} else {
		if(n%2) cout << 3 << "\n";
		else cout << 2 << "\n";
	}
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
