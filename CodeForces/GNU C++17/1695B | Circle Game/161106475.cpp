 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 long long a[n];
 for(int i=0;i<n;i++)
    cin>>a[i];
if(n%2!=0) cout<<"Mike\n"; 
else{
   long long minm=INT_MAX,minj=INT_MAX,summ=0,sumj=0;
int idx;
   for(int i=0;i<n;i++)
      { if(i%2==0)
            {summ+=a[i];}
        else 
            { sumj+=a[i];}
        if(minj>a[i]){minj=a[i]; idx=i;}
      }
 
   if(idx%2)cout<<"Mike\n";
   else cout<<"Joe\n";
 
}
 
 
}
   
    return 0;
 
}