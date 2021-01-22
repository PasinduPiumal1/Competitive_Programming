#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define str string

string s, t, k, l; 	

ll gcd(ll a, ll b) {
	if(b==0) 
		return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
	return (a/gcd(a, b))*b;
}

void solve() {
	cin >> s >> t;
	ll a=s.size(), b=t.size();
	if(s==t) {
		cout << s << "\n";
	} else if(a>b && a%b==0) {
		for(int i=0;i<a/b;i++)k+=t;
		if(k==s)cout << s << "\n";
		else cout << "-1\n";
	} else if(b>a && b%a==0) {
		for(int i=0;i<b/a;i++)l+=s;
		if(l==t)cout << t << "\n";
		else cout << "-1\n";
		//cout << l << "\n";
	} else {
		ll LCM=lcm(a, b);
		for(int i=0;i<LCM/a;i++)k+=s;
		for(int i=0;i<LCM/b;i++)l+=t;
		//cout << k << ' ' << l << "\n";
		if(k==l)cout << k << "\n";
		else cout << "-1\n";
	}
	k="", l="";
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
