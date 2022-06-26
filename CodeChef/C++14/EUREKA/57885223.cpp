/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int t;
  cin>>t;
  while(t--){
  float n;
  cin>>n;
float k=n;
  n=n*0.143;
  n=pow(n,k);
  if(n-floor(n)<0.5) cout<<floor(n)<<endl;
  else cout<<floor(n)+1<<endl;
   }
   


    return 0;
}
