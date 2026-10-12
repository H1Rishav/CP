#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  
  int n;
  cin>>n;
  vector<vector<int>>v;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;
    v.push_back({a,b});
  }
  int low=v[0][0],high=1e9;
  int lp=0,rp=0;
  if(n==1){
   
    cout<<v[0][0]<<endl;
   return;
    
  }
  
  while(low<=high){
    int lp=0,rp=0;
    bool flag=false;
  
    int k=low+(high-low)/2;
      
    for(int i=0;i<n;i++)
    {
      lp=lp-k;
      rp=rp+k;
      lp=max(lp,v[i][0]);
      rp=min(rp,v[i][1]);
      
      if(lp>rp)
      {
        flag=true;
        break;
      }
    }
    if(flag==false)
    {
     // cout<<low<<high<<endl;
      high=k-1;
    }
    else{
      low=k+1;
    }
    
  }
  cout<<low<<endl;
}
 
int main() 
{
    int t;
    cin>>t;
    while(t--)solve();
}