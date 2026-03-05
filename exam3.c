#include<stdio.h>
int main()

{

    int cp, sp;

    printf("Enter Cost Price: "); 
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if (sp > cp) { printf("Profit\n");}

    else if (sp < cp) { printf("Loss\n");}

    else { printf("no profit no loss/n");}
     
    return 0;
}