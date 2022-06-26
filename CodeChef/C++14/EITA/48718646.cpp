#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin>>t;
 while(t--)
{ int d,x,y,z,w1,w2;
cin>>d>>x>>y>>z;
w1=7*x;
w2=(y*d)+(z*(7-d));
cout<<max(w1,w2)<<endl;
    
    
}
	return 0;
}
