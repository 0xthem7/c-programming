/*Area and Perimeter of rectangle*/
#include <stdio.h>

int main()
{
  int r,l,b;
  float area,circum;
  printf("Enter the value of radius : ");
  scanf("%d",&r);
  printf("Enter the value of Length : ");
  scanf("%d",&l);
  printf("Enter the value of Breadth : ");
  scanf("%d",&b);
  area = l*b;
  printf("Area: %f\n",area);
  circum = 2*(l+b);
  printf("Perimeter : %f",circum);
  return 0;
}
