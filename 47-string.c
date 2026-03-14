#include<stdio.h>
void main()
{
    char name[10],address[100];
    printf("enterr your name:");
    scanf("%s,name");

    fflush(stdin);
    printf("enter your name:");
    gets(address);

    printf("name=%s",name);
    puts(address);
}