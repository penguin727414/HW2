#include <stdio.h>
#include <stdlib.h>
    float loan,r,d,c;
int main()
{
    printf("Enter loan principal (-1 to end): ");  
    scanf("%f", &loan);
    if(loan<=-1)
      return 0;
    printf("Enter interest rate: ");  
    scanf("%f", &r);  
    printf("Enter  term of the loan in days: ");  
    scanf("%f", &d);
    c=loan*r*d/365;
    printf("The interest charge is $%.2f",c);
  
    return 0;
}