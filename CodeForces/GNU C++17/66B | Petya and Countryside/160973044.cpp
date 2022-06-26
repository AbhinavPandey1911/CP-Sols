 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;i++)
    { cin>>a[i]; b[i]=a[i];}
sort(b,b+n);
int count=0;
int max=INT_MIN;
 
   for(int j=0;j<n;j++)
   {  count=0;
       int least=a[j];
         for(int k=j;k<n;k++)
            {
            if(least>=a[k]) {least=a[k]; count++;}
            else break;}
        least=a[j];
        for(int k=j-1;k>=0;k--)
            {if(least>=a[k]){ count++; least=a[k];}
           else break;}
      if(count>max) max=count;
}
cout<<max<<endl;
 
 
 
 
    return 0;
}