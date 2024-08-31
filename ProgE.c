/* The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a program to calculate the area & perimeter of the rectangle, 
and the area & circumference of the circle.*/
#include <stdio.h>
void main()
{
    int l,b,r, ar_rec, peri;
    float ar_cir, circ;
    printf("Input length and breadth of rectangle \n");
    scanf("%d\n%d",&l,&b);
    peri=2*(l+b);
    ar_rec=l*b;
    printf("Input radius of circle \n");
    scanf("%d", &r);
    circ=2*3.14159*r;
    ar_cir=3.14159*r*r;
    printf("Perimeter of rectangle= %d \n Area of rectangle= %d \n Circumference of cicle= %0.2f \n Area of circle= %0.2f",peri,ar_rec,circ,ar_cir);
}