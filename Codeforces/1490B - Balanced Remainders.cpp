// <-- Coded by Pasindu_Piumal -->
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define str string
#define F first
#define S second
#define all(x) begin(x), end(x)
#define pb push_back
#define mp make_pair

const int mxN=1e5;
int n;

void solve() {
    cin >> n;
    int c1=0, c2=0, c3=0, ans=0, p;
    for(int i=0;i<n;i++) {
        cin >> p;
        if(p%3==0)c1++;
        else if(p%3==1)c2++;
        else c3++;
    }
    p=n/3;
    //cout << c1 << ' ' << c2 << ' ' << c3 << "\n";
    if(c1<p) {
    	if(c3>p) {
    		c1+=c3-p;
    		ans+=c3-p;
    		c3=p;
    	}
    	if(c2>p && c1<p) {
    		c2-=p-c1;
    		ans+=(p-c1)*2;
    		c1=p;
    	}
    }
    if(c2<p) {
    	if(c1>p) {
    		c2+=c1-p;
    		ans+=c1-p;
    		c1=p;
    	}
    	if(c3>p && c2<p) {
    		c3-=p-c2;
    		ans+=(p-c2)*2;
    		c2=p;
    	}
    }
    if(c3<p) {
    	if(c2>p) {
    		c3+=c2-p;
    		ans+=c2-p;
    		c2=p;
    	}
    	if(c1>p && c3<p) {
    		c1-=p-c3;
    		ans+=(p-c3)*2;
    		c1=p;
    	}
    }
    cout << ans << "\n";
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
