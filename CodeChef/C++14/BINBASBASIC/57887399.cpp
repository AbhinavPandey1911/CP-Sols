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
  while(t--)
  {
  int n,k,count=0;
  cin>>n>>k;
  string s;
  cin>>s;
  for(int i=0;i<=(s.size()-1)/2;i++)
    if(s[i]!=s[s.size()-i-1]) count++;
  
  if(k>=count) 
    { if((k-count)%2==0)
       cout<<"YES"<<endl;
       else if(n%2!=0) cout<<"YES"<<endl;
       else
      cout<<"NO"<<endl;
  }
  else cout<<"NO"<<endl;

 }
    return 0;
}
