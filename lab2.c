#include<stdio.h>
int main()
{
    unsigned int maxint=0-1;
    int i=1;
    int k=0;
    printf("The max value of unsigned int on 32 machine:%u",maxint);
    printf("\n");
    while(i!=0){
    i=i<<1;
    k++;
    }
    printf("%d",k);
    printf("\n");
    return 0;
}