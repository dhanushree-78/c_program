#include<stdio.h>
int main()
{
    char arr[100];
    scanf("%[^\n]s",arr);
    int i,c=0;
    for(i=0;arr[i]!='\0';i++)
    {
        char ch =arr[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        continue;
        else
        c++;
    }
    printf("consonants count : %d",c);
}