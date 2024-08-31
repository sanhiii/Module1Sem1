/*If a five-digit number is input through the keyboard, 
write a program to reverse the number.*/
#include<stdio.h>
void main()
{
    int num, a,b,c,d,e, rev;
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
    rev=10000*a+1000*b+100*c+10*d+e;
    printf("The number in reverse is %d", rev);
}