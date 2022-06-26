#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
} 
int main()
{ int n,l;
cin>>n;
 long long k=n,maxsize=0, idx;
vector<int>v,temp;
for(int i=1;i<=n;i++)
 if(n%i==0) v.push_back(i);
 vector<vector<int>>ans;
for(int i=0;i<v.size();i++)
 { l=v[i];
  for(int j=i;j<v.size();j++)
   if(v[j]%l==0) { l=v[j]; temp.push_back(l);}
  if(maxsize<temp.size()) {maxsize=temp.size(); }
  ans.push_back(temp);
   temp.clear();
   }
 
 
 for(int i=0;i<ans.size();i++)
  if(ans[i].size()==maxsize){
    for(int j=ans[i].size()-1;j>=0;j--)
       cout<<ans[i][j]<<" ";
 
  }
    cout<<endl;
    
    
    return 0;
}