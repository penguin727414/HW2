#include <stdio.h>
#include <stdlib.h>
    float sales;
int main()
{
    printf("Enter sales in dollars (-1 to end): ");  
    scanf("%f", &sales);
    if(sales<=-1)
      return 0;
    sales=sales*0.09+200;
    printf("Salary is: $%f",sales);
 
    return 0;
}