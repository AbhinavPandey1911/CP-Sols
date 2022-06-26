/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ int t;
cin>>t;
while(t--){ int n,m,q,sum=0,flag=0;
cin>>n>>m>>q;
int a[q]; char ch[q];
for(int i=0;i<q;i++)
 cin>>ch[i]>>a[i];

for(int i=0;i<q;i++)
{ if(ch[i]=='+'&&sum<m)
  {sum++; }
  else if(ch[i]=='-'&&sum>0)
   { for(int j=0;j<i;j++)
      {if(a[i]==a[j]&&ch[j]=='+')
         {sum--; flag=0; break; }
      else 
        flag=1;
       }
     if(flag==1) break;
     
   }
  else {flag=1; break;}
}
if(flag==0) cout<<"Consistent"<<endl;
else cout<<"Inconsistent"<<endl;
}
    return 0;
}
