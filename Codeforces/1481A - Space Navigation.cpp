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
str s;
int x, y;
int a[4];

void solve() {
	cin >> x >> y >> s;
	memset(a, 0, sizeof(a));	
	for(char m : s) {
		if(m=='U')a[0]++;
		else if(m=='D')a[1]++;
		else if(m=='R')a[2]++;
		else a[3]++;
	}
	a[1]/=-1, a[3]/=-1;
	if(((x>=0 && a[2]>=x) || (x<0 && a[3]<=x)) && ((y>=0 && a[0]>=y) || (y<0 && a[1]<=y)))cout << "YES\n";
	else cout << "NO\n";  
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
