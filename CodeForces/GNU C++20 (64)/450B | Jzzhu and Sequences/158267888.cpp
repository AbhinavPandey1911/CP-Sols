#include<bits/stdc++.h>
using namespace std;
int main() {
const unsigned int m= 1000000007;
long long x,y,k;
cin>>x>>y;
cin>>k;
long long a[6];
 a[0]=x;
 a[1]=y;
 a[2]=(y-x);
 a[3]=(-x);
 a[4]=(-y);
 a[5]=(x%m-y%m);
long long n=(k-1)%6;
//cout<<n<<endl;
//cout<<n<<endl;
a[n]=a[n]<0?(a[n] % m + m) % m:a[n]%m;
cout<<a[n]<<endl;
 
         
return 0;
 
}