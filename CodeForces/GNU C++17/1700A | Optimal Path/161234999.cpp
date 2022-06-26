 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
int t;
cin>>t;
while(t--){
 long long n,m;
 cin>>n>>m;
 long long ans=0;
 ans+=(m*(m+1))/2;
 ans+=(((n)*(2*m+(n-1)*m))/2)-m;
 cout<<ans<<endl;
 
 
 
}
   
    return 0;
 
}