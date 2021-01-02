#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

str s;

void solve() {
	cin >> s;
	if(s.size()%2!=0) {
		cout << "NO\n";
		return;
	}
	int a=0, b=0, c=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(')a++;
		else if(s[i]==')')b++;
		else c++;
		if(b>c+a) {
			cout << "NO\n";
			return;
		}
	}
	if(s[s.size()-1]=='(') {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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

