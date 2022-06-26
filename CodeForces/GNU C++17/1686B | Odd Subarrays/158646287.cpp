#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
     {cin>>a[i]; }
int oddc=0,evec=0;
for(int i=0;i<n-1;i++)
 if(a[i]>a[i+1]) {evec++; i++;}
 
// for(int i=1;i<n-1;i+=2)
  //if(a[i]>a[i+1]) oddc++;
cout<<max(evec,oddc)<<endl;
}
 
return 0;
 
}