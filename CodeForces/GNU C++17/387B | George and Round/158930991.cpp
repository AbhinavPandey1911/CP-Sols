#include<bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m;
int a[n],b[m];
map<long long,long long>m1;
map<long long ,long long>m2;
for(int i=0;i<n;i++)
    { cin>>a[i]; m1[a[i]]++; }
for(int i=0;i<m;i++)
    { cin>>b[i]; m2[b[i]]++; }
sort(a,a+n);
sort(b,b+m);
int sum=0,change=0,already=0;
int flag=0;
int i=0,j=0;
int count=n;
 while(i<n&&j<m)
{
  if(a[i]<=b[j]){
    count--;
    i++;
 
    j++;
  }
 else
 {
    j++;
 }
}
 
 
cout<<count<<endl;
 
 
 
return 0;
 
}