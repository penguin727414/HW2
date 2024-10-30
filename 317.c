/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
    int account;
    float bb,total_charges,total_credits,credit_limit,a;
int main()
{
    printf("Enter account number (-1 to end): ");  
    scanf("%d", &account);
    if(account==-1)
      return 0;
    printf("Enter begining balance : ");  
    scanf("%f", &bb);
    printf("Enter total charges : ");  
    scanf("%f", &total_charges);
    printf("Enter total credits : ");  
    scanf("%f", &total_credits);
    printf("Enter credits limit : ");  
    scanf("%f", &credit_limit);
    a=bb+total_charges-total_credits;
    if(a>credit_limit)
    {
        printf("Account:%d",account);
        printf("\n");
        printf("Credits limit :%f",credit_limit);
        printf("\n");
        printf("Balance:%f",a);
        printf("\n");
        printf("Credit Limit Exceeded.");
    }
    return 0;
}