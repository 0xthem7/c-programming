/*Simple interest*/
#include <stdio.h>

int main()
{
  int p,n;
  float A,r;
  printf("Enter the value of principal : ");
  scanf("%d",&p);
  printf("Enter the value of rate : ");
  scanf("%f",&r);
  printf("Enter the value of time : ");
  scanf("%f",&n);

  A = p*(1 + r/100)^n;
  printf("Simple Interest: %f\n",A);
  return 0;
}
