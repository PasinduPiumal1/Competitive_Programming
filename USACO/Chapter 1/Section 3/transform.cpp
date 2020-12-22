/*
ID: pasindu3
PROG: transform
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define arr array

int n;
bool t=false;
vector<string> a;
vector<string> b;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ofstream fout("transform.out");
	ifstream fin("transform.in");

	fin >> n;
	a.resize(n), b.resize(n);
	for(int i=0;i<n;i++) {
		fin >> a[i];
	}
	for(int i=0;i<n;i++) {
		fin >> b[i];
	}
	vector<string> c=a, d=a;
	int g=1;
	while(g<4) {
		for(int i=0;i<n;i++) {
			for(int j=n-1, k=0;j>=0;j--, k++) {
				c[i][k]=a[j][i];
			}
		}
		if(c==b && t==false) {
            t=true;
			fout << g << "\n";
		}
		a=c;
		g++;
	}
	a=d;
	for(int i=0;i<n;i++) {
		reverse(a[i].begin(),a[i].end());
	}
	if(a==b && t==false) {
        t=true;
		fout << 4 << "\n";
	}
    g=1;
    while(g<4) {
		for(int i=0;i<n;i++) {
			for(int j=n-1, k=0;j>=0;j--, k++) {
				c[i][k]=a[j][i];
			}
		}
		if(c==b && t==false) {
            t=true;
			fout << 5 << "\n";
		}
		a=c;
		g++;
	}
    a=d;
    if(a==b && t==false) {
        t=true;
		fout << 6 << "\n";
	}
    if(t==false) {
        fout << 7 << "\n";
    }
	return 0;
}
