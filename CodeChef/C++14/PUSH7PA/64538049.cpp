#include<bits/stdc++.h>  
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
   int t;
   cin>>t;
    while (t--){
      long long n;
      cin>>n;
      long long a[n],count=0,maxcnt=0,ele=0;
    for(long long i=0;i<n;i++) cin>>a[i];
 sort(a,a+n);
 long long max=a[n-1];
     
      for(long long i=0;i<n-1;i++)
      {  if(a[i]==a[i+1])
          count++;
        else count=0;
        if(count+a[i]>max) {max=count+a[i];}
      }

     
      cout<<max<<endl;
      
    }
      
     
      
    return 0; 
} 
