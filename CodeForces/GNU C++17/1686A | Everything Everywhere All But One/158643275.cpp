#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int a[n],sum=0;
  for(int i=0;i<n;i++)
     {cin>>a[i]; sum+=a[i];}
 float k=(float)sum/n*1.0;
 int flag=0;
 for(int i=0;i<n;i++)
    if(k==a[i]) flag=1;
//cout<<k<<endl;
if(flag==1) cout<<"YES\n";
else cout<<"NO\n";
 
}
 
return 0;
 
}