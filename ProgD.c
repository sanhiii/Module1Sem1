/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees.*/
#include<stdio.h>
void main()
{
    float f,c;
    printf("Input temperature in Fahrenheit \n");
    scanf("%f", &f);
    c=5*((f-32)/9);
    printf("Temperature in Celcius is %0.2f", c);
}