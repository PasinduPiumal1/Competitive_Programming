#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

const int mxN=1e5;
int n;
str s, m, d;

void solve() {
	cin >> n >> s;
	if(s[0]=='1')d="2";
	else d="1";
	m="1"; 
	for(int i=1;i<n;i++) {
		if(s[i]=='0') {
			m+='1';
			d+='1';
			if(d[i-1]==d[i])m[i]='0', d[i]='0';
		} else {
			m+='1';
			d+='2';
			//cout << d << "\n";
			if(d[i-1]==d[i])m[i]='0', d[i]='1';
		}
		//cout << m << ' ' << d << "\n"; 
	}
	cout << m << "\n";
	m="", d="";
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
