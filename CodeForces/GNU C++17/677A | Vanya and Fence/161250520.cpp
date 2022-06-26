#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int a[x];
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(y>=a[i]){
         count+=1;   
        }
        else{
            count+=2;
        }
    }
    cout<<count<<endl;
    return 0;
}