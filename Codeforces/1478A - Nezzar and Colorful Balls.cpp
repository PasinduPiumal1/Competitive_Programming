// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define ld long double
#define str string 
#define F first
#define S second 
#define all(x) begin(x), end(x)
#define pb push_back
#define mp make_pair

const int mxN=1e5;
int n;
int a[101];

void solve() {
	cin >> n;
	int c[n+1];
	memset(c, 0, sizeof(c));
	for(int i=0;i<n;i++) {
		cin >> a[i];
		c[a[i]]++;
	}
	int ans=0;
	for(int i=0;i<n+1;i++) {
		ans=max(ans, c[i]);
	}
	cout << ans << "\n";
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
