#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    printf("Number is %d : Positive",a);
    else if(a<0)
    printf("Number is %d : Negative",a);
    else
    printf("Number is 0");
}