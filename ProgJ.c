/* In a town, the percentage of men is 52. The percentage of total literacy is 48. 
If total percentage of literate men is 35 of the total population, 
write a program to find the total number of illiterate men and women if the population of the town is 80,000. */
#include<stdio.h>
void main()
{
    int men, women, total, lit, menlit, womenlit, illmen,illwomen, ill;
    total=80000;
    men=0.52*total;
    women=total-men;
    menlit=0.35*total;
    lit=0.48*total;
    womenlit=lit-menlit;
    illmen=men-menlit;
    illwomen=women-womenlit;
    ill=illmen+illwomen;
    printf("in a town of 80000 population,\nno. of illeterate men is %d, and women is %d. \nBringing the total of illeterate people to %d", illmen, illwomen, ill);
}