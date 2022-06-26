#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int>& a, 

         pair<char, int>& b) 
{ 

    return a.second > b.second; 
}
int main()
{  
 int t;
 cin>>t;
 while(t--){
 	 int n;
 	 cin>>n;
 	 int a[n];
 	for(int t=0;t<n;t++)
 	 cin>>a[t];
 	 int i=n-1,count=0;
 while (a[i]==0&&i>0)
  { count++;
    i--;
  	}
 	cout<<n-count-1<<endl;
 	
 	}
	
	return 0;
}
