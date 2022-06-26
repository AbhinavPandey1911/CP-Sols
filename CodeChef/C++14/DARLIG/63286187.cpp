
#include <iostream>
using namespace std;
int main() {
  int t;
  cin>>t;
       while(t--){
         int n,k;
         cin>>n>>k;
        
         if((n%4==0)&&k==0) {cout<<"Off\n"; continue;}
         if((n%4!=0)&&k==0) {cout<<"On\n"; continue;}
         if((n%4==0)&&k==1) {cout<<"On\n"; continue;}
         if((n%4!=0)&&k==1) {cout<<"Ambiguous\n"; continue;}
         
       }
      
     return 0;
    }