#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n;
string s;

void solve() {
	cin >> n >> s;
	int c=0;
	for(int i=n-1;i>=0;i--) {
		if(s[i]==')')c++;
		else break;
	}
	if(c>(n-c)) cout << "YES\n";
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
