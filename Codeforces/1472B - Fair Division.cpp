#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

int n, p;

void solve() {
	cin >> n;
	int a=0, b=0;
	for(int i=0;i<n;i++) {
		cin >> p;
		if(p==1) a++;
		else b++;
	}
	if(a==0) {
		if(b%2==0)cout << "YES" << "\n";
		else cout << "NO" << "\n";
		return;
	}
	if((b*2)%2==0 && a%2==0) {
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
