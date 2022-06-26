#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{  int a[3],z;
for(int i=0;i<3;i++)
{ cin>>z;
 if(z<=10&&z>=1)
 a[i]=z;
}
z=0;
z=z+(a[0]==a[1]? 2: 0);
z=z+(a[1]==a[2]? 2: 0);
z=z+(a[0]==a[2]? 2: 0);
if(z>=2)
cout<<"YES";
else
cout<<"No";
return 0;
}
