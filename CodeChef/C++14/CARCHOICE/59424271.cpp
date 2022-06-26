#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
   float x1,x2,y1,y2;
   cin>>x1>>x2>>y1>>y2;
   if(y1/x1>y2/x2) cout<<"1\n";
   else if(y1/x1<y2/x2) cout<<"-1\n";
    else cout<<"0\n";


 } 



 return 0;
}