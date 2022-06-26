#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
       int n,k,count=0;
       cin>>n>>k;
      string s;
      cin>>s;
    vector<int>psum;
    psum.push_back(0);
    int temp=0;
    for(int i=0;i<n;i++)
      {
        temp=psum[psum.size()-1];
      if(s[i]=='W') temp++;
      psum.push_back(temp);
    }
  
 int ans=n;
 for(int i=0;i<=n-k;i++)
   {
    ans=min(ans,psum[i+k]-psum[i]);
 }
 cout<<ans<<endl;
   
 
    }
  
        
    return 0;
}