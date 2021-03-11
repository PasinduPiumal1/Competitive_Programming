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
str s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> s;
    bool f=false;
    for(int i=0;i<s.size();i++) {
        for(int j=0;j<s.size()-1;j++) {
            if(s[j]==s[j+1]) {
                s.erase(j, 2);
                f=true;
            }
            //cout << s  << ' ' << j << "\n";
        }
        if(f==false)break;
        f=false;
    }
    f=false;
    for(int i=0;i<s.size();i++) {
        for(int j=0;j<s.size()-1;j++) {
            if(s[j]==s[j+1]) {
                s.erase(j, 2);
                f=true;
            }
            //cout << s  << ' ' << j << "\n";
        }
        if(f==false)break;
        f=false;
    }
    cout << s << "\n";

    return 0;
}
