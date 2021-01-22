//Coded by Chirath Nirodha
#include<bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
using namespace std;
const ll mod=1000000007;
inline void io(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int n;
ll a[1000000];
int istrue(int i){
	if(i<1 || i>n-2)return 0;
	if((a[i]>a[i+1] && a[i]>a[i-1])||(a[i]<a[i+1] && a[i]<a[i-1]))return 1;
	else return 0;
}
void solve(){
	int sum,val,cur,addi,subi;cin>>n;
	sum=0;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=1;i<n-1;i++)if(istrue(i)==1)sum++;
	int best=sum;
	//cout << best << "\n";
	for(int i=1;i<n-1;i++){
		ll temp=a[i];
		val=istrue(i-1)+istrue(i)+istrue(i+1);
		a[i]=a[i-1];
		addi=istrue(i-1)+istrue(i)+istrue(i+1);
		a[i]=a[i+1];
		subi=istrue(i-1)+istrue(i)+istrue(i+1);
		a[i]=temp;
		//cout << val << ' ' << addi << ' ' << subi << "\n";
		cur=sum-(val-min(addi,subi));
		best=min(best,cur);
	}
	cout<<best<<endl;
}
int main(){
    io();
	int t;cin>>t;
	for(int i=0;i<t;i++)solve();
    return 0;
}
