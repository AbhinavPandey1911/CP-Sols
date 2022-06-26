#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415926535
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
float ans=0;
sort(a,a+n);
for (int i = n-1; i>0; i-=2)
{  
    ans+=abs(pi*(a[i]*a[i]-((a[i-1])*(a[i-1]))));
    
}
//cout<<ans<<endl;
//cout<<ans<<endl;
if(n%2) ans+=pi*a[0]*a[0];
 
printf("%0.10f\n",ans);
 
 
return 0;
 
}