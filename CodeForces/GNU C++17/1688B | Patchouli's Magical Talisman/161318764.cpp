 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
  int t;
  cin>>t;
  while(t--){
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
int flag=0,flag2=0;
 for(int i=0;i<n;i++){
    if(a[i]%2) flag=1;
      else {flag2=1; }}
 
 
    if(flag==1&&flag2==0) cout<<"0\n";
    else {
       if(flag==1) {
        long long cnt=0;
         for(int i=0;i<n;i++)
            if(a[i]%2==0) cnt++;
        cout<<cnt<<endl;
       }
       else{
        sort(a,a+n);
        int min=INT_MAX;
        long long k;
         for(int i=0;i<n;i++)
             {k=__builtin_ctzll(a[i]);
               if(k<min) min=k;}
                               cout<<min+(n-1)<<endl;
 
       }
 
    }
 
  }
 
 
 
    return 0;
 
}