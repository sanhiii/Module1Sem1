/* If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402. */
#include<stdio.h>
void main()
{
    int num, a,b,c,d,e,new;
    printf("Input a 5 digit number\n");
    scanf("%d", &num);
    a=(num%10+1)%10;
    num=num/10;
    b=(num%10+1)%10;
    num=num/10;
    c=(num%10+1)%10;
    num=num/10;
    d=(num%10+1)%10;
    num=num/10;
    e=(num%10+1)%10;
    new=e*10000+d*1000+c*100+b*10+a;
    printf("Required output is %d", new);
}