#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<10000){
        for(i=1;i<10000;i++){
            if(i%n==2){
                printf("%d\n",i);
            }
            else{}
        }
    }
    else{}
    return 0;
}
