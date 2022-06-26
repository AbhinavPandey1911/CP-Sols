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
 	 int a[4];
 	 int max=INT_MIN;
 	for(int k=0;k<4;k++)
 	 {cin>>a[k]; if(max<a[k]) max=a[k];}
 	cout<<max<<endl;
 	}
	
	return 0;
}
