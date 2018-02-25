#include <stdio.h>

void main() {
   float payable_amount;
   float actual_amount = 0;
   float percent = 0;

   printf("Enter the number of actual amount");
   scanf("Enter the number of actual amount %f",&actual_amount);
   printf("Enter the number of percent amount");
   scanf("%f",&percent);

   float discounted_amount = (actual_amount * percent) / 100;

    payable_amount = actual_amount - discounted_amount;
   printf("Payable Amount =  %f", payable_amount);
}