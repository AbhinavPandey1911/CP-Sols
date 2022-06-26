 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
int main() {
    // Write C++ code here  
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
int n,k;
cin>>n>>k;
int a[n];
std::vector<pair<int,int>> v;
 for(int i=0;i<n;i++)
    {cin>>a[i]; v.push_back({a[i],i+1});}
 
 sort(v.begin(),v.end()); 
 
  cout<<v[n-k].first<<endl;
 int count=0;
  for(int i=n-1;count!=k;i--)
    {cout<<v[i].second<<" "; count++;}
 
 
 
 
    return 0;
 
}