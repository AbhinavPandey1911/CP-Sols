#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
} 
int main()
{ int n,m;
  cin>>n>>m;
  int a[m+1]={0};
  int b[n][2];
  for(int i=0;i<n;i++)
  {
     cin>>b[i][0]>>b[i][1];
     for(int j=b[i][0];j<=b[i][1];j++)
       a[j]++;
  }
  int cnt=0;
  for(int i=1;i<=m;i++)
    { if(a[i]==0)
      cnt++;
   }
cout<<cnt<<endl;
  for(int i=1;i<=m;i++)
    { if(a[i]==0)
      cout<<i<<" ";
   }
 
    
    return 0;
}