#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int n,t;
cin>>n>>t;
int a[n],sum=0,cnt=0;
for(int i=0;i<n;i++)
 {   cin>>a[i]; }
int k=0;
for(int i=0;i<n;i++)
{ sum+=a[i];
    if(sum<=t){
        cnt++;
    }
    else{
     sum-=a[k];
     k++;
    }
 
}
cout<<cnt<<endl;
 
return 0;
 
}