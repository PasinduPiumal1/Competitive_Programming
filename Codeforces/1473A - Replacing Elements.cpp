#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ld long double
#define str string
	
int n, d;
int a[101];

void solve() {
	cin >> n >> d;
	int cnt=0, val=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		if(a[i]>d)cnt=1;
	}
	if(!cnt) {
		cout << "YES\n";
		return;
	}
	sort(a, a+n);
	if(a[0]+a[1]<=d)cout << "YES\n";
	else cout << "NO\n";
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

