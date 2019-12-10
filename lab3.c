#include <stdio.h>
#define MAXLINE 1000
int main(void){
char s[MAXLINE];
char t[MAXLINE];
int a  = 0;
int b = 0;
while ((s[a] = getchar()) != EOF)
{
    if (s[a] == ' ')
    {
        break;
    }
    else
    a++;
}
while (s[a] == ' ' && (t[b] = getchar()) != EOF && t[b]!= '\n')
{
    if (t[b] == '\n')
    {
        break;
    }
    else
    b++;
}
 int p;
 p = b - 1;
 int i, j, k;
    for (i = a - 1; i > 0; i--)
    {
        for (j = i, k = p ; s[j] == t[k]; j--, k--)
            ;
        if (k < 0 )
        {
            printf("T is on the right of  s ：%d\n", j + 1);
            return i;
        }
    }
    printf("Error:You cannot  find ");
}