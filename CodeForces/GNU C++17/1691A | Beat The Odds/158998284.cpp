#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
     cin>>a[i];
 int count=0,count2=0;
 for(int i=0;i<n;i++)
   { if(a[i]%2!=0) count++;
  else if(a[i]%2==0) count2++; }
     
cout<<min(count,count2)<<endl;
 
 
 
}
 
 
 
 
return 0;
 
}