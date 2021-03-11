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
int n, ksz;
str s;
unordered_map<str, bool> key;
unordered_map<str, bool> keyc;
unordered_map<str, int> numc;
unordered_map<str, int> numcc;

bool stringEqual(str k) {
    key=keyc;
    numc=numcc;
    int c=0;
    for(int i=0;i<k.size();i=i+ksz) {
        str g=k.substr(i, ksz);
        if(key[g]) {
            key[g]=false;
            if(numc[g]>0) {
                numc[g]=numc[g]-1;
                key[g]=true;
            }
            c=c+1;
        } else {
            return false;
        }
    }
    if(c==n)return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> s >> n;
    str p;
    for(int i=0;i<n;i++) {
        cin >> p;
        if(key[p])numc[p]=numc[p]+1;
        key[p]=true;
    }
    numcc=numc;
    keyc=key;
    ksz=p.size();
    int sz=s.size()-(ksz*n)+1, co=0;
       for(int i=0;i<sz;i=i+1) {
        p=s.substr(i, ksz*n);
        if(stringEqual(p)) {
            cout << i << "\n";
            co=co+1;
        }
    }    
    if(co==0)cout << "-1\n";
    return 0;
}

