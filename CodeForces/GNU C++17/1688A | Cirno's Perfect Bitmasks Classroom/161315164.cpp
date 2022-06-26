 
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here  
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  if(n==1) {cout<<"3\n"; continue;}
  else if(__builtin_popcount(n)==1){
       cout<<n+1<<endl;
 
   }
   else
     cout<< (1<<__builtin_ctzll(n))<<endl;
 
 
 
  }
 
 
 
    return 0;
 
}