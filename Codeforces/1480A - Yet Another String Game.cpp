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

void solve() {
	cin >> s;
	for(int i=0;i<s.size();i++) {
		if(i%2==0) {
			if(s[i]=='a')s[i]='b';
			else s[i]='a';
		} else {
			if(s[i]=='z')s[i]='y';
			else s[i]='z';
		}
	}
	cout << s << "\n";
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
