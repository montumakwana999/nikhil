#include<stdio.h>
void main()
{
    float p,r,t,si;
    
    printf("enter amount:");
    scanf("%f",&p),

    printf("enter rate:");
    scanf("%f";&r);

    printf("enter years:");
    scanf("%f",&t);

    si=(p*r*t)/100;

    printf("simpale intrest=%f",si);
    return0;
}