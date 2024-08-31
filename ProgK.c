/*A cashier has currency notes of denominations 10, 50 and 100. 
If the amount to be withdrawn is input through the keyboard in hundreds, 
find the total number of currency notes of each denomination 
the cashier will have to give to the withdrawer.*/
#include <stdio.h>
void main()
{
    int ten, fifty, hun, money;
    printf("How much money would you like to withdraw?");
    scanf("%d", &money);
    hun=money/100;
    money=money%100;
    fifty=money/50;
    money=money%50;
    ten=money/10;
    money=money%10;
    if(money!=1170)
    {
     printf("we don't have change for %d but\n", money);
    }
    printf("you'll receive %d notes of hundred, \n %d notes of fifty, and %d notes of ten.", hun,fifty,ten);
}