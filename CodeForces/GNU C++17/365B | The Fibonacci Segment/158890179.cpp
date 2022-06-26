#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
long long a[n];
for(long long i=0;i<n;i++)
cin>>a[i];
if(n==1) {cout<<1<<endl; return 0;}
long long count=2;
long long max=-1;
for(long long i=2;i<n;i++)
{if(a[i]==a[i-1]+a[i-2]) count++;
  else {
     if(count>max)max=count;
     count=2;
  }
}
if(count>max) max=count;
cout<<max<<endl;
 
return 0;
 
}