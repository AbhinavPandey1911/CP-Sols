/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{ int g1,s1,b1,g2,s2,b2;
  int t,c;
  cin>>t;
  while(t--)
  { cin>>g1>>s1>>b1>>g2>>s2>>b2;
   
   
    if(g1+s1+b1>g2+s2+b2) cout<<"1"<<endl;
   else cout<<"2"<<endl;
  }

    return 0;
}
