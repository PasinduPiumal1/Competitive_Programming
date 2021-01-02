#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

int n, k;
int a[100001];

void solve() {
	cin >> n >> k;
	int MAX=0;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		MAX=max(a[i], MAX);
	}
	int MIN=INT_MAX;
	for(int i=1;i<=MAX;i++) {
		int ans=0;
		for(int j=0;j<n;j++) {
			if(a[j]!=i) {
				ans++;
				j+=k-1;
			}
		}	
		MIN=min(ans, MIN);
	}
	cout << MIN << "\n";
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
