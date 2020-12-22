#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, pre=-1, jj;
string s;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(vector<int> arr, int n) {
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}

void solve() {
	cin >> n;
	if(n==pre) {
		cout << jj << "\n";
		return;
	}
	pre=n;
	while(true) {
		s=to_string(n);
		sort(s.begin(), s.end());
		s.erase(unique(s.begin(), s.end()), s.end());
		s.erase(remove(s.begin(), s.end(), '0'), s.end());
		vector<int> arr;
		arr.clear();
		int g;
		for(int i=0; i<s.size(); i++) {
			g=s[i]-'0';
			arr.push_back(g);
		}
		ll lcm=findlcm(arr, arr.size());
		if(n%lcm==0) {
			cout << n << "\n";
			jj=n;
			break;
		}
		n++;
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
