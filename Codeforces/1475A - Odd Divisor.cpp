// <-Coded by Pasindu Piumal-> 
#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int 
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
	while(n%2==0)n/=2;
	if(n==1)cout << "NO\n";
	else cout << "YES\n";
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
