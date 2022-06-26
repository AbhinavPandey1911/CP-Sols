#include<bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
char a[n][m];
int count=0;
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
     {cin>>a[i][j]; a[i][j]=tolower(a[i][j]);}
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
    if(a[i][j]=='w')
    { if(a[i+1][j]=='p'&&i!=n-1) { a[i+1][j]='.'; count++;}
      else if(a[i-1][j]=='p'&&i!=0)  {a[i-1][j]='.'; count++;}
      else if(a[i][j-1]=='p'&&j!=0)  {a[i][j-1]='.'; count++;}
      else if(a[i][j+1]=='p'&&j!=m-1)  {a[i][j+1]='.'; count++;}
 
    }
 
 cout<<count<<endl;
 
 
return 0;
 
}