#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 0 ... 34:
        printf("FAIL");
        break;
        case 35 ... 60:
        printf("AVERAGE");
        break;
        case 61 ... 100:
        printf("GOOD");
        break;
        default:
        printf("Invalid Input");
    }
}