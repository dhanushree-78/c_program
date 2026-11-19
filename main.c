#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%s",&arr);
    char ch;
    int ct=0;
    scanf(" %c",&ch);
    for(int i=0;arr[i]!='\0';i++)
    {
        char c=arr[i];
        if(c==ch)
        ct++;
    }
    printf("%d",ct);
}