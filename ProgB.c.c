#include<stdio.h>
void main()
{
  float km,m,f,in,cm;
  printf("Enter distannce between two cities in kilometres. \n");
  scanf("%f", &km);
  m=1000*km;
  cm=100*m;
  f=km*3280.84;
  in=f*12;
  printf("The given distance in: \n metres=%0.2f \n centimetres=%0.2f \n feet=%0.2f \n inches=%0.2f", m,cm,f,in);
}
