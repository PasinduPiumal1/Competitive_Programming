#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

int n, shmp, con;
string s;
bool shower=false, door=false, shampo=false, conditioner=false, wet=false;

bool act(int p) {
    //cout << shower << conditioner << shampo << door << wet << "\n";
    bool ans=true;
    if(s[p]=='G') {
        if(door==false) {
            door=true;
        } else {
            door=false;            
        }
    } else if(s[p]=='O') {
        if(door==false || shower==true)ans=false;
        shower=true, wet=true, shampo=false, conditioner=false;
    } else if(s[p]=='F') {
        if(door==false || shower==false)ans=false;
        shower=false, shampo=false, conditioner=false, wet=true;
    } else if(s[p]=='S') {
        shampo=true, shmp--, conditioner=false;
        if(door==false || shmp<0)ans=false;
    } else if(s[p]=='C') {
        conditioner=true, con--;
        if((shampo==true && shower==false) || door==false || con<0)ans=false;
        shampo=false;
    } else if(s[p]=='D') {
        if((shower==false && shampo==true) || (shower==false && conditioner==true) || wet==false || (shower==true && door==true))ans=false;
        wet=false;
    } else if(s[p]=='A') {
        if(door==true || shower==true || shmp==2 || s[p-1]=='B' || s[p-1]=='D' || s[p+1]=='D')ans=false;
        shmp=2;
    } else {
        if(door==true || shower==true || con==2 || (s[p-1]=='A' || s[p-1]=='D' || s[p+1]=='D'))ans=false;
        con=2;
    }
    return ans;
}

void solve() {
    cin >> n >> s;
    /*if(s[0]!='G') {
        cout << "N " << 0 << "\n";
        return;
    }*/
    shmp=2, con=2;
    shower=false, door=false, shampo=false, conditioner=false, wet=false;
    for(int i=0;i<n;i++) {
        bool y=act(i);
        if(y==false) {
            cout << "N " << i << "\n";
            return;
        }    
    }
    cout << 'Y' << "\n";
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

