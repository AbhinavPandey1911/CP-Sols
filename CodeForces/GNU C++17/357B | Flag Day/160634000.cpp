#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
int n,m;
cin>>n>>m;
 int a[m][4];
 int b[n+1]={0}; 
 for(int i=0;i<m;i++)
    cin>>a[i][1]>>a[i][2]>>a[i][3];
map<int,int>m1;
 
for(int i=0;i<m;i++)
{ 
    for(int j=1;j<=3;j++)
     {if(m1[a[i][j]]==0) 
      m1[a[i][j]]=j;
    else{
      //cout<<a[i][j]<<endl;
      swap(a[i][j],a[i][m1[a[i][j]]]);
      for(int k=1;k<=3;k++)
        m1[a[i][k]]=k;
    }}
}
map<int,int> m2;
for(int i=0;i<m;i++)
{for(int j=1;j<=3;j++)
    if(b[a[i][j]]==0)
     b[a[i][j]]=j;
    
}
for(int i=1;i<=n;i++)
    cout<<b[i]<<" ";
 
    return 0;
}