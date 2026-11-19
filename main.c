#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
    printf("Neither prime nor composite nummber");
    return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {c++;
        printf("Not a prime number");
        break;
        }
    }
    if(c==0)
    printf("Prime Number");
}