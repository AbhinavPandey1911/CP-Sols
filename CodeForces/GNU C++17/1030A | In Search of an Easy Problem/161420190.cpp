#include <stdio.h>
int main()
{
    int n,p,count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&p);
        if(p==1){
            printf("HARD");
            return 0;
        }
    }
    printf("EASY");
}