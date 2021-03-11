#include<bits/stdc++.h> 
using namespace std; 
  

struct counter 
{ 
    int64_t val; 
    int64_t level; 
}; 
vector<int>fact(11);
void ini(){
    fact[0]=0;
    fact[1]=1;
    for (int i=2;i<=10;++i)fact[i]=fact[i-1]*i;
    
}
 
int64_t minny(int x, int y) 
{ 
    
    vector<bool>visited(150000,false);
    fill(visited.begin(),visited.end(),false);  
    
    queue<counter> q; 
    counter n = {x, 0}; 
    q.push(n); 
 
  
    
    while (!q.empty()) 
    { 
       
        counter t = q.front(); 
        q.pop(); 
  
        
        if (t.val == y) 
            return t.level; 
  
        visited[t.val]=true; 
  
         
        if ((t.val/2 == y&&t.val!=0&&t.val%2==0) || (__builtin_popcount(t.val) == y)||(((t.val*3) +1)==y&&t.val<33333)||(t.val*t.val ==y&&t.val<=316)) 
            return t.level+1; 
        if (t.val<=8){
            if (fact[t.val]==y)return t.level+1;
        }
  
        if (t.val<=33333)
        if (!visited[((t.val*3) + 1)]) 
        { 
            n.val = (t.val*3) + 1; 
            n.level = t.level+1; 
            q.push(n); 
        }
        if (t.val<=316)
        if (!visited[(t.val*t.val)]) 
        { 
            n.val = t.val*t.val; 
            n.level = t.level+1; 
            q.push(n); 
        }
    if (!visited[(__builtin_popcount(t.val))]){
    n.val=__builtin_popcount(t.val);
    n.level = t.level+1; 
            q.push(n);    
    } 
        if (t.val!=0&&t.val%2==0)
        if (t.val/2>=0 && !visited[(t.val/2)]) 
        { 
            n.val = t.val/2; 
            n.level = t.level+1; 
            q.push(n); 
        }
        if (t.val<=8)
    if (!visited[fact[t.val]]) 
        { 
            n.val = fact[t.val]; 
            n.level = t.level+1; 
            q.push(n); 
        } 
    }
  return -1;
    }
int main(){
ini();
int64_t x,y;cin>>x>>y;
cout<<minny(x,y);
return 0;    
}
