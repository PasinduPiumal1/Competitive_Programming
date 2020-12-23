#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll maxNum(ll a, ll b, ll c, ll d) {
	return max(a, max(b, max(c, d)));
}

void solve() {
	ll n, m, r, c, s1, s2, s3, s4;
	cin >> n >> m >> r >> c;
	s1=(r-1)+(c-1);
	s2=(n-r)+(c-1);
	s3=(r-1)+(m-c);
	s4=(n-r)+(m-c);
	cout << maxNum(s1, s2, s3, s4) << "\n";
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
