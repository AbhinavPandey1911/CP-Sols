#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
}
int main()
{  int  n,k;
 cin>>n>>k;
 vector<int>a(n),ans;
 map<int,int>m,m1;
 for(int i=0;i<n;i++)
  {cin>>a[i]; m[a[i]]++; m1[a[i]]++;}
 for(auto it:m)
  if(it.second>1) {cout<<0; return 0;}
  int flag=0,count=0,z;
  sort(a.begin(),a.end());
 for(int i=0;i<n;i++)
  { z=a[i]&k;
   if(z!=a[i])
   {m[z]++;
   }
  if(m[z]>1) { 
   
    if(m1[z]==1) count=1; 
  else count=2;
  
  ans.push_back(count);
   flag=1; }
  }
  sort(ans.begin(),ans.end());
 
 if(flag==1) cout<<ans[0]<<endl;
 else cout<<"-1"<<endl;
 return 0;
}