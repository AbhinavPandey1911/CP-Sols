#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
long long a[3][3];
for(int i=0;i<3;i++)
 for(int j=0;j<3;j++)
    cin>>a[i][j];
long long  x,y,z;
z= (a[1][0]+a[2][0]+a[0][1]+a[2][1]-a[0][2]-a[1][2])/2;
y=(a[1][0]+a[2][0]+a[0][2]+a[1][2]-a[0][1]-a[2][1])/2;
x= (a[2][0]+a[2][1]+a[0][1]+a[2][1]-a[1][0]-a[2][0])/2;
a[0][0]=x; a[1][1]=y; a[2][2]=z;
for(int i=0;i<3;i++)
 {for(int j=0;j<3;j++)
   cout<<a[i][j]<<" ";
 cout<<endl;}
  
return 0;
 
}