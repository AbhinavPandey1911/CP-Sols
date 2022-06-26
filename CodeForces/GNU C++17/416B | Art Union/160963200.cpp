#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int m,n;
 cin>>m>>n;
 int a[m][n];
 for(int i=0;i<m;i++)
   for(int j=0;j<n;j++)
   {
     cin>>a[i][j];
   }
   std::vector<int> v(m);
   int freeat=0,start;
 for(int i=0;i<n;i++)
 {  freeat=0;
   for(int j=0;j<m;j++)
   { start=max(freeat,v[j]);
     v[j]=start+a[j][i];
     freeat=v[j];
   }
}
for(int i=0;i<m;i++)
cout<<v[i]<<" ";
cout<<endl;
 
 
 
}