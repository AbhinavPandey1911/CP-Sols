#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 string s,t;
 cin>>s>>t;
 std::vector<pair<int,int>>v1,v2;
 for(int i=0;i<n;i++){
    if(s[i]=='a'||s[i]=='c')v1.push_back({s[i],i});
    if(t[i]=='a'||t[i]=='c')v2.push_back({t[i],i});
}
if(v1.size()!=v2.size())cout<<"NO\n";
else{
    int flag=0;
  for(int i=0;i<v1.size();i++)
  {
   if(v1[i].first!=v2[i].first) {flag=1; break;}
   else {
      if(v1[i].first=='c'&&v1[i].second>=v2[i].second)
        continue;
      else if(v1[i].first=='a'&&v1[i].second<=v2[i].second)
         continue;
     else {flag=1; break;}
 
   }
  }
  if(flag==0) cout<<"YES\n";
  else cout<<"NO\n";
 
 
}
 
 
 
}
 
    return 0;
}