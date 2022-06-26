#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Write C++ code here
    int m;
    cin>>m;
    while(m--)
    {
        int a,arr[3];
        cin>>a;
                int cnt =0;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
             if(a<arr[i])
            {
             cnt++;   
            }
        }
       
        cout<<cnt<<endl;
    }
 
    return 0;
}