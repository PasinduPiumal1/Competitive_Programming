// <-Coded by Pasindu Piumal-> 
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ld long double
#define str string
#define F first 
#define S second
#define pb push_back

ll n, k;

void solve() {
	cin >> n >> k;
	if(k>n) {
		cout << "NO\n";
		return;
	}
	if((n-(1*(k-1)))%2==1 && (n-(1*(k-1)))>0) {
		cout << "YES\n";
		for(int i=0;i<k-1;i++)cout << "1 ";
		cout << n-(1*(k-1)) << "\n";
	} else if((n-(2*(k-1)))%2==0 && (n-(2*(k-1)))>0){
		cout << "YES\n";
		for(int i=0;i<k-1;i++)cout << "2 ";
		cout << n-(2*(k-1)) << "\n";
	} else {
		cout << "NO\n";
	}
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
