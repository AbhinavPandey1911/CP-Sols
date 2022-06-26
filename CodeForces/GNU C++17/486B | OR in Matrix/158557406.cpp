#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int n,m;
cin>>n>>m;
int a[n][m],b[n][m],c[n][m];
for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
    {cin>>a[i][j]; b[i][j]=1; c[i][j]=0;}
for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
 { if(a[i][j]==0)
     { for(int k=0;k<n;k++)
         {b[k][j]=0; }
        for(int k=0;k<m;k++)
         b[i][k]=0;
 
     }
 }
for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
 {  for(int k=0;k<n;k++)
    c[i][j]= c[i][j]|b[k][j];
    for(int k=0;k<m;k++)
    c[i][j]= c[i][j]|b[i][k];
 }
int flag=0;
for(int i=0;i<n;i++)
{ for(int j=0;j<m;j++)
   if(c[i][j]!=a[i][j]) {flag=1; break;}
   if(flag==1) break;
}
if(flag==1) cout<<"NO\n";
else{
    cout<<"YES\n";
   for(int i=0;i<n;i++)
{ for(int j=0;j<m;j++)
   cout<<b[i][j]<<" ";
 cout<<endl;} 
}
 
return 0;
 
}