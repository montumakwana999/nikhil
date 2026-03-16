#include<stdio.h>
int getpi()
{
    int pi=11;
    return pi;
}

void main()
{
    int redius,area,pi;
    printf("enter area of circle:");
    scanf("%d",&redius);
    pi=getpi();
    area=(pi*redius*redius)/7;
    printf("the area of circle is : %d",area);
}