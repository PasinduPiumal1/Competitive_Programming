#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define str string

int n;

void solve() {
	cin >> n;
	int k=8;
	cout << "9";
	for(int i=0;i<n-1;i++) {
		cout << k;
		if(k<9)k++;
		else k=0;
	}
	cout << "\n";
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
