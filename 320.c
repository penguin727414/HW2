#include <stdio.h>
#include <stdlib.h>
    float s,r,c;
int main()
{
    printf("Enter # of hours worked (-1 to end): ");  
    scanf("%f", &s);
    printf("Enter hourly rate of the worker($00.00):");
    scanf("%f", &r);
    if(s>40)
    c=s-40;
    c=c/2;
    s=(c+s)*r;
    printf("Salary is $%.2f",s);
  
    return 0;
}