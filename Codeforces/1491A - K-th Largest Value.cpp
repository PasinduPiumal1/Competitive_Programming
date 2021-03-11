// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long int
#define ld long double
#define str string
#define F first
#define S second
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair

const int mxN=1e5+1;
int n, q, t, k, cnt1=0, cnt0=0;
int a[mxN];

void solve() {
	cin >> t >> k;
	k--;
	if(t==1) {
		if(a[k]==1) {
			cnt1--;
			cnt0++;
			a[k]=0;
		} else {
			cnt1++;
			cnt0--;
			a[k]=1;
		}
	} else {
		if(k<cnt1)cout << "1\n";
		else cout << "0\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	cin >> n >> q;

	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(a[i]==1)cnt1++;
		else cnt0++;
	}
	while(q--) {
		solve();
	}
	
	return 0;
}
