/*
project:simple calculator that takes two numbers and outputs the sum,difference,product and quotient of the numbers
Author:@kelvin GICHUHI
Compiler:c89
License:MIT
date  :July 2022

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  //  variable declaraction
      float num1,num2,sum,difference,product,quotient;

    printf("\tCalculator!\n");
   // input
    printf (" Enter two numbers:\n");
    scanf ("%f%f",&num1,&num2);
    // computation
   //arithmetic operation: + - * / ++ -- %
    sum = num1 +num2;
    difference = num1 - num2;
    product = num1 * num2;
    qtient = num1 / num2;
    // output
    // 20 + 30 =50
    printf(" %8.2f + %8.2f = %8.2f\n",num1,num2,sum);

    printf(" %8.2f - %8.2f = %8.2f\n",num1,num2,difference);

    printf(" %8.2f * %8.2f = %8.2f\n",num1,num2,product);

    printf(" %8.2f / %8.2f = %8.2f\n",num1,num2,quotient);
    return 0;
}





