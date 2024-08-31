/* If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
write a program to find the cost price of one item. */
#include<stdio.h>
void main()
{
    float cp,sp,profit,cp1;
    printf("input the selling price of 15items and total profit earned on them \n");
    scanf("%f \n %f", &sp,&profit);
    cp=sp-profit;
    cp1=cp/15;
    printf("cost price of one item is %f", cp1);
}