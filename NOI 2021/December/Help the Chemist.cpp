#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array

bool vis[10001];
int c=0;

void dfs(int n, vector<int> adj[]) {
    if(!vis[n]) {
        vis[n]=true;
        for(int i=0;i<adj[n].size();i++) {
            if(!vis[adj[n][i]]) {
                //cout << adj[n][i] << "\n";
                c++;
                dfs(adj[n][i], adj);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    vector<int > adj[10001];
    cin >> n;
    int MAX;
    for(int i=0;i<n;i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        //adj[y].push_back(y);
        MAX=max(MAX, max(x, y));
    }
    vector<int> m;
    for(int i=1;i<=MAX;i++) {
        c=0;
        dfs(i, adj);
        //cout << c << "\n";
        if(c!=0) {
            //cout << c << "\n";
            c++;
            m.push_back(c);
        }
    }
    sort(m.begin(),m.end());
    cout << m.size() << "\n";
    for(auto x : m) {
        cout << x << "\n";
    }

    return 0;
}

