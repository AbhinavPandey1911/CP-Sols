#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
bool cmp2(const pair<int,int> &a, const pair<int,int> &b)
 { return (a.first>b.first);
 }
int main() {
int n,m,d;
cin>>n>>m>>d;
int a[n][m],min=INT_MAX,max=INT_MIN;
for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {cin>>a[i][j]; if(min>a[i][j]) min=a[i][j]; if(max<a[i][j]) max=a[i][j];}
if((max-min)%d!=0)cout<<"-1\n";
else {
    int flag=0;
 for(int i=0;i<n;i++)
  {for(int j=0;j<m;j++)
    if((a[i][j]-min)%d) {flag=1; break;}
  if(flag==1) break;}
  if(flag==1) cout<<"-1\n";
  else 
  { int b[n*m]={0},c=0; 
   for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
     { for(int k=0;k<n;k++)
        for(int l=0;l<m;l++)
        { b[c]+=abs(a[k][l]-a[i][j])/d;
 
        }
        c++;
 
 
     }
     sort(b,b+n*m);
    cout<<b[0]<<endl;
 
 
  }
 
 
}
 
 
return 0;
 
}