#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case'A':
        printf("AIDS");
        break;
        case'B':
        printf("BUSINESS MANAGEMENT");
        break;
        case'C':
        printf("CYBERSECURITY");
        break;
        default:
        printf("Invalid Input");
    }
}