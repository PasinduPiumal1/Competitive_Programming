#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

string s;

bool solve() {
    cin >> s;
    if(s.size()==1) {
        return true;
    } else {
        sort(s.begin(), s.end());
        for(int i=0;i<s.size()-1;i++) {
            if((s[i]-'a')+1!=s[i+1]-'a') {
                return false;
            }
        }
        return true;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        if(solve()) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}
