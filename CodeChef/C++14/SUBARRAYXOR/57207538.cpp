#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int t;
   cin>>t;
   while(t--)
   	 { int n;
   	 	cin>>n;
   	  cout<<"1 ";
   	  for(int i=2;i<n+1;i++)
   	  	{ cout<<(i^(i-1))<<" ";
        }

      cout<<endl;

   	 }


  return 0;
 }
