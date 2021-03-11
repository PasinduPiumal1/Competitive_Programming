// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h> 
using namespace std;

#define ll long long
#define ld long double
#define str string 
#define F first
#define S second 
#define all(x) begin(x), end(x)
#define pb push_back
#define mp make_pair

const int mxN=1e5;

void solve() {
	ll n;
	cin >> n;
	for(ll i=1;i<min(n, (ll)1e4+1);i++) {
		ll a=n-(i*i*i);
		if(a<=0)continue;
		if(cbrt((long double)a)==((long long)cbrt(a))) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);
	
	int t;
	cin >> t; 	
	while(t--) {
		solve();
	}

	return 0;
}
