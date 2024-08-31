/*Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
 and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include <stdio.h>
void main()
{
  float basic, hra, da, gross;
  printf("Input basic salary. \n");
  scanf("%f", &basic);
  da= 0.40*basic;
  hra= 0.20*basic;
  gross= da+hra+basic;
  printf("Gross salary is %0.2f", gross);  
}
