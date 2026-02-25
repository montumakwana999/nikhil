#include<stdio.h>
void main()
{
    int qube,number;
    printf("entur number");
    scanf("%d",&number);
    if (number<0);
    {
        number=0-number;
        printf("(your number is negative convertrd into the positive");
    }
    qube=number*number*number;
    printf("qube:%d",qube);
    
}