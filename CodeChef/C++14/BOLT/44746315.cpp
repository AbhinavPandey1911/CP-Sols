#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ long int T;
cin>>T;
float k1[T],k2[T],k3[T],v[T],t;
for(int i=0;i<T;i++)
{ 
    scanf("%f%f%f%f",&k1[i],&k2[i],&k3[i],&v[i]);
}
for(int i=0;i<T;i++)
{ 
       t=100/(k1[i]*k2[i]*k3[i]*v[i]);
       t=t*100+0.5;
       t=(int)t;
       if(t<958)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
   
}
return 0;
}



