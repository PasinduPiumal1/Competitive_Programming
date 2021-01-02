#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double
#define str string 

int n;
int a[51];
vector<double> c;

int subArray() {
	double k=2, sum;
	while(k<=n-1) {
		sum=0;
		for(int i=0;i<n-k;i++) {
			for(int j=i;j<i+k;j++) {
				sum+=c[j];
			}
			c.push_back(sum);
			sum=0;
		}
		k++;
	}
	sort(c.begin(),c.end());
	c.erase(unique(c.begin(),c.end()),c.end());
	return c.size();
}

void solve() {
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];		
	}
	int p=a[0];
	for(int i=1;i<n;i++) {
		c.push_back((a[i]-p)*0.5);
		p=a[i];
	}
	int ans=subArray();
	c.clear();
	cout << ans << "\n";
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

