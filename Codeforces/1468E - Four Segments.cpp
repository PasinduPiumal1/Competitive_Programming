#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define str string 

int a[4];

void solve() {
	for(int i=0;i<4;i++) {
		cin >> a[i];
	}
	sort(a, a+4);
	cout << (min(a[0], a[1]))*(min(a[2], a[3])) << "\n";
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

