#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define arr array

int n, ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	if(n%2==0) {
		ans=1;
		for(int i=2; i<=n; i+=2) {
			ans++;
		}
		cout << ans*ans << "\n";
	} else {
		ans=4;
		int dfs=8;
		for(int i=1;i<n;i+=2) {
			ans+=dfs;
			dfs+=4;
		}
		cout << ans << "\n";
	}

	return 0;
}
