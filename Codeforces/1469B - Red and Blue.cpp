#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

int n, m, p;
int r[101], b[101];
vector<int> c;

void solve() {
	cin >> n;
	vector<int> r(n);
	for(int i=0;i<n;i++) {
		cin >> r[i];
	}	
	cin >> m;
	vector<int> b(m);
	for(int i=0;i<m;i++) {
		cin >> b[i];
	}
	vector<int> rc(n+1, 0), bc(m+1, 0);
	for(int i=0;i<n;i++) {
		rc[i+1]=r[i]+rc[i];
	}
	for(int i=0;i<m;i++) {
		bc[i+1]=b[i]+bc[i];
	}
	cout << *max_element(rc.begin(), rc.end())+*max_element(bc.begin(), bc.end()) << "\n";
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

