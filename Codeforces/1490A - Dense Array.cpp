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
int a[55];

void solve() {
	cin >> n;
	int ans=0;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n-1;i++) {
		int MAX=max(a[i], a[i+1]), MIN=min(a[i], a[i+1]);
		while(MIN*2<MAX) {
			ans++;
			MIN*=2;
		}
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
