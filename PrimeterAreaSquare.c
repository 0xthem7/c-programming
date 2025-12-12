/*Area and Peremeter of circle*/
#include <stdio.h>

int main()
{
  int r,l;
  float area,circum;
  printf("Enter the value of Length : ");
  scanf("%d",&l);
  area = l*l;
  printf("Area: %f\n",area);
  circum = 4*l;
  printf("Circumference : %f",circum);
  return 0;
}
