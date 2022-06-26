#include<bits/stdc++.h>
using namespace std;
int main() {
int d,sum;
cin>>d>>sum;
int a[d][2],b[d][2];
std::vector<pair<int,int>> v;
    vector<pair<int,int>> v1;
int sumt=0,sumk=0;
for(int i=0;i<d;i++)
    {cin>>a[i][0]>>a[i][1]; v.push_back({a[i][0],a[i][1]}); sumt+=a[i][1]; sumk+=a[i][0];}
if(sumt<sum||sumk>sum) cout<<"NO\n";
else
if(sumt>=sum) 
{
    int k=sumt-sum;
 for(int i=v.size()-1;i>=0;i--)
    {if(k>=(v[i].second-v[i].first)&&k!=0){k-=(v[i].second-v[i].first); v1.push_back({i,v[i].first});}
     else if(k<v[i].second-v[i].first&&k!=0) {  v1.push_back({i,(v[i].second-k)});k=0;}
     else {v1.push_back({i,v[i].second}); }}
  sort(v1.begin(),v1.end());
  cout<<"YES\n";
for(int i=0;i<v1.size();i++)
    cout<<v1[i].second<<" ";
  }
 
 
 
return 0;
 
}