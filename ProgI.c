/*If a four-digit number is input through the keyboard, 
write a program to obtain the sum of the first and last digit of this number.*/
#include<stdio.h>
void main()
{
    int num, f,l, sum;
    printf("Input a 4 digit number \n");
    scanf("%d", &num);
    l=num%10;
    f=num/1000;
    sum=f+l;
    printf("Sum of first and last digit= %d", sum);
}