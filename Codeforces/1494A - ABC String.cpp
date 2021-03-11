// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long int
#define ld long double
#define str string
#define F first
#define S second
#define all(x) begin(x), end(x)
#define pb push_back
#define mp make_pair

inline void io_setup(){
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
  	cout.tie(NULL);
}

const int mxN=1e5;
int n;
str s;

bool check(string s){
	vector<int> q;
	for(char c:s){
		if(c=='(')q.push_back(1);
		else {
			if(q.empty())return false;
			q.pop_back();
		}
	}
	return q.size()==0;
}

void solve() {
	cin >> s;
	n=s.size();
	if(s[0]==s[n-1]) {
		cout << "NO\n";
		return;
	}
	str a, b;
	for(int i=0;i<n;i++) {
		if(s[i]==s[0])a+='(', b+='(';
		else if(s[i]==s[n-1])a+=')', b+=')';
		else a+='(', b+=')';
	}
	if(check(a) || check(b)) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
}

int main() {
	io_setup();
    
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}
