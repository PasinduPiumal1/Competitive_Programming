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

void solve() {
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n-1;i++) {
		if(a[i]<i) {
			cout << "NO\n";
			return;
		}
		a[i]-=i;
		a[i+1]+=a[i];
	} 
	if(a[n-1]<n-1) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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
