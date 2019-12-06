#include<stdio.h>
int bitcount(unsigned x);
int main(void)
{
    char a[5];
    int i=0;
    int n=0;
    while(i<7)
    {
        a[i]=getchar();
        n=n*10+(a[i]-'0');
        i++;
    }
    printf("%d\n",n);
    return 0;
}
int bitcount(unsigned x)
{
    int b;
    for(b=0;x!=0;x>>=1)
    {
        if(x&01)
        {
            b++;
        }
    }
    return b;
}