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

const int mxN=1e5;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull t, f, ans=1, k=1, m=1;
    cin >> t >> f;
    if(f==t) {
        cout << "1\n";
        exit(0);
    }
    if(f==1) {
        cout << t << "\n";
        exit(0);
    }
    for(int i=1;i<=t;i++)ans*=i;
    for(int i=1;i<=f;i++)k*=i;
    for(int i=1;i<=t-f;i++)k*=i;
    ans/=k;
    cout << ans << "\n";

    return 0;
}
