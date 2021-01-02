#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define str string 

int x, y, ans;

void solve() {
	cin >> x >> y;
	if(x==y) {
		ans=x+y;
	} else {
		if(x>y)ans=(y*2)+((x-1-y)*2)+1;
		else ans=(x*2)+((y-1-x)*2)+1;
	}
	cout << ans << "\n";
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

