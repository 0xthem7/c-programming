/*Area and Circumference of circle*/
#include <stdio.h>


int main()
{
  const float PI = 3.14;
  int r,l,b;
  float area,circum;
  printf("Enter the value of radius : ");
  scanf("%d",&r);
  printf("Enter the value of Length : ");
  scanf("%d",&l);
  printf("Enter the value of Breadth : ");
  scanf("%d",&b);
  area = PI*r*r;
  printf("Area: %f\n",area);
  circum = 2*PI*r;
  printf("Circumference : %f",circum);
  return 0;
}
