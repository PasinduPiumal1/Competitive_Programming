// <-Coded by Pasindu Piumal-> 
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ld long double
#define str string
#define F first 
#define S second
#define pb push_back
#define mp make_pair

int mxN=1e5;
ll n;

void solve() {
	cin >> n;
	int p=n%2020, k=n/2020;
	if(p<=k)cout << "YES\n";
	else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
    	solve();
    }

    return 0;
}
