/* If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits.*/
#include<stdio.h>
void main()
{
    int num, a,b,c,d,e, sum;
    printf("Input a 5 digit number\n");
    scanf("%d", &num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    e=num%10;
    sum=a+b+c+d+e;
    printf("Sum of digits= %d", sum);
}