#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
}
int main()
{  int n,sum=0,sum2=0;
 cin>>n;
 int a[n],b[n];
 for (int i=0;i<n;i++)
   {cin>>a[i]; sum+=a[i];}
 
for (int i=0;i<n;i++)
   {cin>>b[i]; sum2+=b[i];}
  if(sum>=sum2) cout<<"Yes\n";
   else cout<<"No\n";
 return 0;
}
 