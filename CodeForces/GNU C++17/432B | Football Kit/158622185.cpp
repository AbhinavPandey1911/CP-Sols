#include<bits/stdc++.h>
using namespace std;
int main() {
//long long m= 1000000007;
int n;
cin>>n;
int a[n][2];
map<int,int> mx,my;
for(int i=0;i<n;i++)
 {   cin>>a[i][0]>>a[i][1];
    mx[a[i][0]]++; my[a[i][1]]++;
  }
int b[n][2]={0};
for(int i=0;i<n;i++)
 { b[i][0]=n-1;
 
 }
for(int i=0;i<n;i++)
 { b[i][0]+=mx[a[i][1]];
   b[i][1]=2*(n-1)-b[i][0];
 }
for(int i=0;i<n;i++)
 cout<<b[i][0]<<" "<<b[i][1]<<endl;
 
 
return 0;
 
}