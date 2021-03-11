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
str s;
int c[26];

bool isPalindrome(str m) {
    int k=0;
    memset(c, 0, sizeof(c));
    for(int i=0;i<m.size();i++)c[m[i]-'a']++;
    for(int i=0;i<26;i++) 
        if(c[i]%2!=0)k++;
    if(k>1)return false;
    return true;
}

void solve() {
    cin >> n >> s;
    int ans=1, i=0, j=0;
    str m;
    while(i<n) {
        j=0;
        while(j<n-i) {
            if(isPalindrome(s.substr(j, i+1)))ans=max(ans, i+1);
            j++;
        }
        i++;
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


