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
int n, k;

void solve() {
    cin >> n >> k;
    int x[n], y[n];
    ll c=0, MAX=0;
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(abs(x[i]-x[j])+abs(y[i]-y[j])<=k)c++;
        }
        MAX=max(c, MAX);
        c=0;
    }
    if(MAX==n)cout << "1\n";
    else cout << "-1\n";
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
