#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 int a[n];
 std::vector<pair<int,int>> v;
 map<int,int>m;
 for(int i=0;i<n;i++)
    { cin>>a[i];
     v.push_back({i,a[i]});
    m[a[i]]++;}
 
 int flag=0;
for(auto it:m)
    if(it.second<2)flag=1;
 
if(flag==1)cout<<"-1\n";
else {
    vector<pair<int,int>>ans;
    sort(v.begin(),v.end());
    int equal=-1;
    int flag1=1;
    int j=0;
 for(int i=0;i<v.size();i++)
   { flag1=0;
    if(v[i].second==v[i+1].second&&i<v.size()-1) { ans.push_back({v[i].first,j}); ans.push_back({v[i+1].first,j}); }
    else j++;
   //else if(v[i].second==equal) { ans.push_back(v[i].first); flag1=1;}
   }
vector<pair<int,int>>final;
     
for(int i=0;i<ans.size();i++)
  if(final.size()==0||final[final.size()-1].second!=ans[i].first)final.push_back({ans[i].second,ans[i].first});
      
j=0;
for(int i=0;i<final.size()-1;i++)
 { if(final[i].first==j&&final[i+1].first==j)
    swap(final[i].second,final[i+1].second);
    else j++;
 }
 
 for(int i=0;i<final.size();i++)
    cout<<final[i].second+1<< " ";
cout<<endl;
}
 
 
}
 
 
 
 
return 0;
 
}