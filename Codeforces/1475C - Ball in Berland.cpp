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
ll a, b, k;
vector<pair<int, int>> cpl;

void solve() {
	cin >> a >> b >> k;
	cpl.resize(k);
	vector<int> fir(a+2), sec(b+2);
	for(int i=0;i<k;i++)cin >> cpl[i].F;
	for(int i=0;i<k;i++)cin >> cpl[i].S;
	for(int i=0;i<k;i++)fir[cpl[i].F]++;
  	for(int i=0;i<k;i++)sec[cpl[i].S]++;
	ll ans=0;	
	for(int i=0;i<k;i++) {
		ans+=k-fir[cpl[i].F]-sec[cpl[i].S]+1;
	}
	cout << ans/2 << "\n";
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

