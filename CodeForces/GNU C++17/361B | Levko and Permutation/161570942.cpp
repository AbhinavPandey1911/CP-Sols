 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
int main() {
    // Write C++ code here  
   int n,k;
   cin>>n>>k;
   std::vector<int> v;
   if(n==k) {cout<<"-1\n"; return 0;}
  for(int i=0;i<n;i++)
    v.push_back(i+1);
 
if(k!=n-1){
     swap(v[0],v[n-1]);
    for(int i=k+1;i<n-1;i+=2)
        swap(v[i],v[i+1]);
}
 
 
for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
 
 
    return 0;
 
}