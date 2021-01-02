#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

ll n;

void solve() {
	cin >> n;
	if(n%4==0) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
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
