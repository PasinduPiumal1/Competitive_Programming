#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;
long long keep[200001];
void io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void solve(int n){
  int arr[n];
  for(int i=0; i<n; i++){cin>>arr[i];}
  for(int i=n-1; i>=0; i--){
    int sum=arr[i];
    int res=i+arr[i];
    if(res<=n-1){
      sum+=keep[res];
    }
    keep[i]=sum;
  }
  int maxi=-1;
  for(int i=0; i<n; i++)if(keep[i]>maxi)maxi=keep[i];
  cout<<maxi<<endl;
}
int main()
{
    io();
    int t; cin>>t;
    int n;
    while(t--){
      cin>>n;
      solve(n);
    }
}
