#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define str string 

ll n, x;
ll a[100010];

void solve() {
	cin >> n >> x;
	ll MAX=0, MIN=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		MAX+=a[i]/x;
		if(a[i]%x!=0)MAX++;
	}
	ll c=0;
	for(int i=0;i<n;i++) {
		if(a[i]%x!=0) {
			c+=a[i];
		} else {
			MIN+=a[i]/x;
		}
	}
	MIN+=c/x;
	if(c%x!=0)MIN++;
	cout << MIN << ' ' << MAX << "\n";
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

