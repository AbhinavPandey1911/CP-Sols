#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int p,q,l,r;
cin>>p>>q>>l>>r;
int a[p][2];
int b[q][2];
for(int i=0;i<p;i++)
cin>>a[i][0]>>a[i][1];
for(int i=0;i<q;i++)
cin>>b[i][0]>>b[i][1];
int cnt=0;
int flag=0;
 for(int i=l;i<=r;i++)
 { flag=0;
   for(int j=0;j<q;j++) 
   { int m=b[j][0]+i;int n= b[j][1]+i;
      for(int k=0;k<p;k++)
        if(m<=a[k][1]&&n>=a[k][0])
            { 
           cnt++; flag=1; break;
           //cout<<m<<" "<<n<<endl;
           //cout<<a[k][0]<<" "<<a[k][1]<<endl;
        }
     if(flag==1) break;
       }
 }
cout<<cnt<<endl;
 
 
return 0;
 
}