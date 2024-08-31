/* Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D.*/
#include<stdio.h>
void main()
{
    int C, D;
    printf("Input the value of C and D \n");
    scanf("%d \n %d", &C, &D);
    printf("Values before swapping: \n C= %d  D= %d /n", C,D);
    C=C+D;
    D=C-D;
    C=C-D;
    printf("Values after swapping: \n C= %d  D= %d", C,D);
}