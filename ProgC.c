/* If the marks obtained by a student in five different subjects are input through the keyboard, 
find out the aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100. */
#include<stdio.h>
void main()
{
    int phy, chem, math, bio, eng;
    float agg, percent;
    printf("Enter marks obtained in Physics \n");
    scanf("%d", &phy);
    printf("Enter marks obtained in Chemistry \n");
    scanf("%d", &chem);
    printf("Enter marks obtained in Maths \n");
    scanf("%d", &math);
    printf("Enter marks obtained in Biology \n");
    scanf("%d", &bio);
    printf("Enter marks obtained in English \n");
    scanf("%d", &eng);
    agg= phy+chem+math+bio+eng;
    percent=agg/5;
    printf("Aggregate marks obtained is %0.0f and \n percentage obtained is %0.2f", agg,percent);
}