 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
int n;
cin>>n;
int a[n][4];
for(int i=0;i<n;i++)
for(int j=0;j<4;j++)
     cin>>a[i][j];
int thomas_score=a[0][0]+a[0][1]+a[0][2]+a[0][3];
int count=0;
for(int i=0;i<n;i++)
{ int sum=0;
    for(int j=0;j<4;j++)
        sum+=a[i][j];
if(sum>thomas_score) count++;
 
}
 cout<<count+1;
 
 
 
 
    return 0;
}