#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
} 
int main()
{ int t;
cin>>t;
while(t--){
  int n;
   cin>>n;
   if(n-ceil(n/3.0)-ceil(n/3.0)-1>0)
  cout<<ceil(n/3.0)<<" "<<ceil(n/3.0)+1<<" "<<n-ceil(n/3.0)-ceil(n/3.0)-1<<endl;
  else 
  cout<<ceil(n/3.0)-1<<" "<<ceil(n/3.0)+1<<" "<<n-2*ceil(n/3.0)<<endl;
  }
  
 return 0;
}
 