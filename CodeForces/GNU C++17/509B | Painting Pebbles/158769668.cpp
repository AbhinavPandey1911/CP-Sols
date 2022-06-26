#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
        srand(time(0));
int n;
cin>>n;
int k;
cin>>k;
int a[n],b[n];
for(int i=0;i<n;i++)
{cin>>a[i]; b[i]=a[i];}
int flag=0;
sort(b,b+n);
if(abs(b[0]-b[n-1])>k)flag=1;
if(flag==1) cout<<"NO\n";
else {
    cout<<"YES\n";
    int z=1;
 for(int i=0;i<n;i++)
  { for(int j=0;j<a[i];j++)
      {if(z<=0||z>k) z=1;
      cout<<z<<" "; z++;}
      z=0;
  cout<<endl; }
 
 
}
 
return 0;
 
}