#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

ll w, h, n;

void solve() {
	cin >> w >> h >> n;
	ll ans=0, c=w*h;
	while(true) {
		if(w%2==0 && h%2==0) {
			h/=2;
	 	} else if(w%2==0 && h%2!=0) {
			w/=2;
		} else if(w%2!=0 && h%2==0) {
			h/=2;
		} else {
			break;
		}
	}
	ans=c/(w*h);
	if(ans>=n) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
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
