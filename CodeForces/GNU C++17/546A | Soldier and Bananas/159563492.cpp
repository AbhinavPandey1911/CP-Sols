#include <bits/stdc++.h>
using namespace std;
 
bool cmp(pair<char, int>& a, 
 
         pair<char, int>& b) 
{ 
 
    return a.second > b.second; 
}
int main()
{  
int w,k,n;
cin>>w>>k>>n;
int ans=(w*n*(n+1)/2)-k;
if(ans>0) cout<<ans;
else cout<<0;
 return 0;
}
 