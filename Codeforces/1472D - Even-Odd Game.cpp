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
vector<int> a;

void solve() {
	cin >> n;
	ll alice=0, bob=0;
	a.resize(n);
	for(int i=0;i<n;i++)cin >> a[i];
	sort(a.rbegin(), a.rend());
	for(int i=0;i<n;i++) {
		if(i%2==0 && a[i]%2==0)alice+=a[i];
		if(i%2==1 && a[i]%2==1)bob+=a[i];
	}
	if(alice==bob)cout << "Tie\n";
	else if(alice>bob)cout << "Alice\n";
	else cout << "Bob\n";
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
