#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define str string 

str s;

void solve() {
	cin >> s;
	int a=0, b=0, c=0, d=0;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(')a++;
		else if(s[i]=='[')c++;
		else if(s[i]==')'&& a>=b+1)b++;
		else if(s[i]==']' && c>=d+1)d++;
	}	
	cout << b+d << "\n";
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

