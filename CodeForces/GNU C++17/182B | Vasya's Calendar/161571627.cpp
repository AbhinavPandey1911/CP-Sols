 
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair <int,int >&a, pair <int ,int>&b)
{
   return (a.second>b.second);
 
}
int main() {
    // Write C++ code here  
 int d;
 cin>>d;
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
    cin>>a[i];
int ans=0;
for(int i=0;i<n-1;i++)
{  ans+=abs(d-a[i]);
}
 cout<<ans<<"\n";
 
    return 0;
 
}